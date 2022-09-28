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

#ifndef LYRICS_H_
#define LYRICS_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "facsimilemixins.h"
#include "sharedmixins.h"


namespace mei {
/** \brief Recurring lyrics, especially at the end of each verse or stanza of a poem or
 *  song lyrics; a chorus.
 */
class MEI_EXPORT Refrain : public MeiElement {
    public:
        Refrain();
        Refrain(const Refrain &other);
        virtual ~Refrain();

/* include <refrain> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        ColorMixIn    m_Color;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VoltaGroupingSymMixIn    m_VoltaGroupingSym;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Refrain);
};

/** \brief Division of a poem or song lyrics, sometimes having a fixed length, meter or
 *  rhyme scheme; a stanza.
 */
class MEI_EXPORT Verse : public MeiElement {
    public:
        Verse();
        Verse(const Verse &other);
        virtual ~Verse();

/* include <verse> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        ColorMixIn    m_Color;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VoltaGroupingSymMixIn    m_VoltaGroupingSym;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Verse);
};

/** \brief Sung text for a specific iteration of a repeated section of music.
 */
class MEI_EXPORT Volta : public MeiElement {
    public:
        Volta();
        Volta(const Volta &other);
        virtual ~Volta();

/* include <volta> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        ColorMixIn    m_Color;
        TypographyMixIn    m_Typography;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Volta);
};
} // namespace mei
#endif // LYRICS_H_
