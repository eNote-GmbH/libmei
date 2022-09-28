/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef ANALYTICALMIXIN_H_
#define ANALYTICALMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class HarmAnlMixIn {
    public:
        explicit HarmAnlMixIn(MeiElement *b);
        virtual ~HarmAnlMixIn();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class HarmonicFunctionMixIn {
    public:
        explicit HarmonicFunctionMixIn(MeiElement *b);
        virtual ~HarmonicFunctionMixIn();
        /** \brief Captures scale degree information using Humdrum **deg syntax -- an optional
         *  indicator of melodic approach (^ = ascending approach, v = descending approach),
         *  a scale degree value (1 = tonic ...
         * 
         *  7 = leading tone), and an optional indication of chromatic alteration, 1, v7,
         *  ^1, or v5+, for example. The amount of chromatic alternation is not indicated.
         */
        MeiAttribute* getDeg();
        void setDeg(std::string _deg);
        bool hasDeg();
        void removeDeg();

/* include <degmixin> */

    private:
        MeiElement *b;
};

class IntervalHarmonicMixIn {
    public:
        explicit IntervalHarmonicMixIn(MeiElement *b);
        virtual ~IntervalHarmonicMixIn();
        /** \brief Encodes the harmonic interval between pitches occurring at the same time.
         */
        MeiAttribute* getInth();
        void setInth(std::string _inth);
        bool hasInth();
        void removeInth();

/* include <inthmixin> */

    private:
        MeiElement *b;
};

class IntervalMelodicMixIn {
    public:
        explicit IntervalMelodicMixIn(MeiElement *b);
        virtual ~IntervalMelodicMixIn();
        /** \brief Encodes the melodic interval from the previous pitch.
         * 
         *  The value may be a general directional indication (u, d, s, etc.), an indication
         *  of diatonic interval direction, quality, and size, or a precise numeric value in
         *  half steps.
         */
        MeiAttribute* getIntm();
        void setIntm(std::string _intm);
        bool hasIntm();
        void removeIntm();

/* include <intmmixin> */

    private:
        MeiElement *b;
};

class KeySigAnlMixIn {
    public:
        explicit KeySigAnlMixIn(MeiElement *b);
        virtual ~KeySigAnlMixIn();
        /** \brief Indicates major, minor, or other tonality.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <modemixin> */

    private:
        MeiElement *b;
};

class KeySigDefaultAnlMixIn {
    public:
        explicit KeySigDefaultAnlMixIn(MeiElement *b);
        virtual ~KeySigDefaultAnlMixIn();
        /** \brief Contains an accidental for the tonic key, if one is required, e.g., if key.pname
         *  equals c and key.accid equals s, then a tonic of C# is indicated.
         */
        MeiAttribute* getKeyAccid();
        void setKeyAccid(std::string _keyaccid);
        bool hasKeyAccid();
        void removeKeyAccid();
        /** \brief Indicates major, minor, or other tonality.
         */
        MeiAttribute* getKeyMode();
        void setKeyMode(std::string _keymode);
        bool hasKeyMode();
        void removeKeyMode();
        /** \brief Holds the pitch name of the tonic key, e.g., c for the key of C.
         */
        MeiAttribute* getKeyPname();
        void setKeyPname(std::string _keypname);
        bool hasKeyPname();
        void removeKeyPname();

/* include <key.pnamemixin> */

    private:
        MeiElement *b;
};

class MelodicFunctionMixIn {
    public:
        explicit MelodicFunctionMixIn(MeiElement *b);
        virtual ~MelodicFunctionMixIn();
        /** \brief Describes melodic function using Humdrum **embel syntax.
         */
        MeiAttribute* getMfunc();
        void setMfunc(std::string _mfunc);
        bool hasMfunc();
        void removeMfunc();

/* include <mfuncmixin> */

    private:
        MeiElement *b;
};

class PitchClassMixIn {
    public:
        explicit PitchClassMixIn(MeiElement *b);
        virtual ~PitchClassMixIn();
        /** \brief Holds pitch class information.
         */
        MeiAttribute* getPclass();
        void setPclass(std::string _pclass);
        bool hasPclass();
        void removePclass();

/* include <pclassmixin> */

    private:
        MeiElement *b;
};

class SolfaMixIn {
    public:
        explicit SolfaMixIn(MeiElement *b);
        virtual ~SolfaMixIn();
        /** \brief Contains sol-fa designation, e.g., do, re, mi, etc., in either a fixed or
         *  movable Do system.
         */
        MeiAttribute* getPsolfa();
        void setPsolfa(std::string _psolfa);
        bool hasPsolfa();
        void removePsolfa();

/* include <psolfamixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // ANALYTICALMIXIN_H_
