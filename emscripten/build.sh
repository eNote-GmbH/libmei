#!/usr/bin/env bash

function print_help {
	 echo "Usage:
-l		Light version with no increased memory allocation
-w 		WebWorker-compatible build.
-v N		Version number (e.g., 1.0.0); no number by default
-c		Turns on \"Chatty\" compiling; Will print the compiler progress" >&2 ; 
} 

LIBMEI_ROOT=../
LIBMEI_INCLUDE=../src

if command -v emcc >/dev/null 2>&1 ; then
	EMCC=`command -v emcc`
else
	echo >&2 "I require the emscripten compiler (emcc) but it's not installed.  Aborting.";
	exit 1;
fi

if [ ! -d build ]; then mkdir build; fi

# Default is with ASM an large file support.
# Memory is increased (TOTAL_STACK) for processing large files (tested up to 7MB)
# Empirically, the memory amount required is approx. 5 times the file size (as an indication).
# We can disable this for a light version that uses the default memory settings 	
ASM="\
	-O2 --memory-init-file 0 \
	-s ASM_JS=1 \
	-s TOTAL_STACK=64*1024*1024"
ASM_NAME=""

# default is master (no version)
VERSION=""
VERSION_NAME=""
CHATTY=""
WEBWORKER=false

while getopts "lwv:h:c" opt; do
	case $opt in
		l)
			echo "light version (-l)"
			ASM="\
			    --memory-init-file 0 \
				-s ASM_JS=1 "
			ASM_NAME="-light"
			;;
		v)
			echo "version (-v) $OPTARG"
			VERSION="$OPTARG"
			VERSION_NAME="-$VERSION"
			;;
		c)
			CHATTY="-v"
			echo $EMCC
			;;
		w)
			WEBWORKER=true
			echo "building with webworker compatibility"
			;;
		h)
			print_help
			exit 2
			;;
		\?)
			print_help
			exit 2
			;;
	esac
done

echo "Compiling"

python $EMCC $CHATTY --bind \
    -s DISABLE_EXCEPTION_CATCHING=0 \
	-I$LIBMEI_INCLUDE/ \
    -I$LIBMEI_INCLUDE/modules/ \
    -I/usr/include/libxml2 \
    ./build/xmllint.o ./build/.libs/libxml2.a \
	-o libmei.js \
	-DUSE_EMSCRIPTEN \
	$ASM \
    emscripten.cpp \
	$LIBMEI_ROOT/src/meiattribute.cpp \
    $LIBMEI_ROOT/src/meidocument.cpp \
    $LIBMEI_ROOT/src/meielement.cpp \
    $LIBMEI_ROOT/src/meinamespace.cpp \
    $LIBMEI_ROOT/src/meixml.cpp \
    \
    $LIBMEI_ROOT/src/export/xmlexport.cpp \
    $LIBMEI_ROOT/src/import/xmlimport.cpp \
    \
    $LIBMEI_ROOT/src/modules/analysismixins.cpp \
    $LIBMEI_ROOT/src/modules/cmn.cpp \
    $LIBMEI_ROOT/src/modules/cmnmixins.cpp \
    $LIBMEI_ROOT/src/modules/cmnornaments.cpp \
    $LIBMEI_ROOT/src/modules/cmnornamentsmixins.cpp \
    $LIBMEI_ROOT/src/modules/corpus.cpp \
    $LIBMEI_ROOT/src/modules/critapp.cpp \
    $LIBMEI_ROOT/src/modules/critappmixins.cpp \
    $LIBMEI_ROOT/src/modules/edittrans.cpp \
    $LIBMEI_ROOT/src/modules/edittransmixins.cpp \
    $LIBMEI_ROOT/src/modules/facsimile.cpp \
    $LIBMEI_ROOT/src/modules/facsimilemixins.cpp \
    $LIBMEI_ROOT/src/modules/figtable.cpp \
    $LIBMEI_ROOT/src/modules/figtablemixins.cpp \
    $LIBMEI_ROOT/src/modules/frbr.cpp \
    $LIBMEI_ROOT/src/modules/frbrmixins.cpp \
    $LIBMEI_ROOT/src/modules/harmony.cpp \
    $LIBMEI_ROOT/src/modules/harmonymixins.cpp \
    $LIBMEI_ROOT/src/modules/header.cpp \
    $LIBMEI_ROOT/src/modules/headermixins.cpp \
    $LIBMEI_ROOT/src/modules/linkalign.cpp \
    $LIBMEI_ROOT/src/modules/linkalignmixins.cpp \
    $LIBMEI_ROOT/src/modules/lyrics.cpp \
    $LIBMEI_ROOT/src/modules/lyricsmixins.cpp \
    $LIBMEI_ROOT/src/modules/mensural.cpp \
    $LIBMEI_ROOT/src/modules/mensuralmixins.cpp \
    $LIBMEI_ROOT/src/modules/midi.cpp \
    $LIBMEI_ROOT/src/modules/midimixins.cpp \
    $LIBMEI_ROOT/src/modules/namesdates.cpp \
    $LIBMEI_ROOT/src/modules/neumes.cpp \
    $LIBMEI_ROOT/src/modules/neumesmixins.cpp \
    $LIBMEI_ROOT/src/modules/performance.cpp \
    $LIBMEI_ROOT/src/modules/ptrref.cpp \
    $LIBMEI_ROOT/src/modules/shared.cpp \
    $LIBMEI_ROOT/src/modules/sharedmixins.cpp \
    $LIBMEI_ROOT/src/modules/tablaturemixins.cpp \
    $LIBMEI_ROOT/src/modules/text.cpp \
    $LIBMEI_ROOT/src/modules/usersymbols.cpp \


