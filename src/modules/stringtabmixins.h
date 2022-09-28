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

#ifndef STRINGTABMIXIN_H_
#define STRINGTABMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class StringtabMixIn {
    public:
        explicit StringtabMixIn(MeiElement *b);
        virtual ~StringtabMixIn();
        /** \brief Indicates which finger, if any, should be used to play an individual string.
         * 
         *  The index, middle, ring, and little fingers are represented by the values 1-4,
         *  while t is for the thumb. The values x and o indicate muffled and open strings,
         *  respectively.
         */
        MeiAttribute* getTabFing();
        void setTabFing(std::string _tabfing);
        bool hasTabFing();
        void removeTabFing();
        /** \brief Records the location at which a string should be stopped against a fret.
         */
        MeiAttribute* getTabFret();
        void setTabFret(std::string _tabfret);
        bool hasTabFret();
        void removeTabFret();
        /** \brief Records which string is to be played.
         */
        MeiAttribute* getTabString();
        void setTabString(std::string _tabstring);
        bool hasTabString();
        void removeTabString();

/* include <tab.stringmixin> */

    private:
        MeiElement *b;
};

class StringtabPositionMixIn {
    public:
        explicit StringtabPositionMixIn(MeiElement *b);
        virtual ~StringtabPositionMixIn();
        /** \brief Records fret position.
         */
        MeiAttribute* getTabPos();
        void setTabPos(std::string _tabpos);
        bool hasTabPos();
        void removeTabPos();

/* include <tab.posmixin> */

    private:
        MeiElement *b;
};

class StringtabTuningMixIn {
    public:
        explicit StringtabTuningMixIn(MeiElement *b);
        virtual ~StringtabTuningMixIn();
        /** \brief Provides a *written* pitch and octave for each open string or course of strings.
         */
        MeiAttribute* getTabStrings();
        void setTabStrings(std::string _tabstrings);
        bool hasTabStrings();
        void removeTabStrings();

/* include <tab.stringsmixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // STRINGTABMIXIN_H_
