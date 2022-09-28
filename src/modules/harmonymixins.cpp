#include "harmonymixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::HarmLogMixIn::HarmLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarmLogMixIn::~HarmLogMixIn() {}
MeiAttribute* mei::HarmLogMixIn::getChordref() {
    if (!b->hasAttribute("chordref")) {
        return NULL;
    }
    return b->getAttribute("chordref");
};

void mei::HarmLogMixIn::setChordref(std::string _chordref) {
    MeiAttribute *a = new MeiAttribute("chordref", _chordref);
    b->addAttribute(a);
};

bool mei::HarmLogMixIn::hasChordref() {
    return b->hasAttribute("chordref");
};

void mei::HarmLogMixIn::removeChordref() {
    b->removeAttribute("chordref");
};

/* include <chordrefmixin> */


