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

#ifndef STRINGTAB_H_
#define STRINGTAB_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include <string>


namespace mei {
/** \brief A barre in a chord tablature grid.
 */
class MEI_EXPORT Barre : public MeiElement {
    public:
        Barre();
        Barre(const Barre &other);
        virtual ~Barre();
        /** \brief Records the location at which the strings should be stopped against a fret in a
         *  fretboard diagram.
         * 
         *  This may or may not be the same as the actual location on the fretboard of the
         *  instrument in performance.
         */
        MeiAttribute* getFret();
        void setFret(std::string _fret);
        bool hasFret();
        void removeFret();

/* include <barre> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;

    private:
        REGISTER_DECLARATION(Barre);
};
} // namespace mei
#endif // STRINGTAB_H_
