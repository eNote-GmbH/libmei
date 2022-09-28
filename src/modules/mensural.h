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

#ifndef MENSURAL_H_
#define MENSURAL_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "externalsymbolsmixins.h"
#include "facsimilemixins.h"
#include "mensuralmixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"


namespace mei {
/** \brief A mensural notation symbol that combines two or more notes into a single sign.
 */
class MEI_EXPORT Ligature : public MeiElement {
    public:
        Ligature();
        Ligature(const Ligature &other);
        virtual ~Ligature();

/* include <ligature> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LigatureVisMixIn    m_LigatureVis;
        ColorMixIn    m_Color;

    private:
        REGISTER_DECLARATION(Ligature);
};

/** \brief (mensuration) – Collects information about the metrical relationship between a
 *  note value and the next smaller value; that is, either triple or duple.
 */
class MEI_EXPORT Mensur : public MeiElement {
    public:
        Mensur();
        Mensur(const Mensur &other);
        virtual ~Mensur();

/* include <mensur> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DurationRatioMixIn    m_DurationRatio;
        MensuralSharedMixIn    m_MensuralShared;
        MensurVisMixIn    m_MensurVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        SlashCountMixIn    m_SlashCount;

    private:
        REGISTER_DECLARATION(Mensur);
};

/** \brief Plica
 */
class MEI_EXPORT Plica : public MeiElement {
    public:
        Plica();
        Plica(const Plica &other);
        virtual ~Plica();

/* include <plica> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        PlicaVisMixIn    m_PlicaVis;

    private:
        REGISTER_DECLARATION(Plica);
};

/** \brief (proportion) – Description of note duration as arithmetic ratio.
 */
class MEI_EXPORT Proport : public MeiElement {
    public:
        Proport();
        Proport(const Proport &other);
        virtual ~Proport();

/* include <proport> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DurationRatioMixIn    m_DurationRatio;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(Proport);
};

/** \brief A stem element.
 */
class MEI_EXPORT Stem : public MeiElement {
    public:
        Stem();
        Stem(const Stem &other);
        virtual ~Stem();

/* include <stem> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        StemVisMixIn    m_StemVis;
        XyMixIn    m_Xy;
        ColorMixIn    m_Color;

    private:
        REGISTER_DECLARATION(Stem);
};
} // namespace mei
#endif // MENSURAL_H_
