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

#ifndef NEUMES_H_
#define NEUMES_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "analyticalmixins.h"
#include "externalsymbolsmixins.h"
#include "facsimilemixins.h"
#include "gesturalmixins.h"
#include "midimixins.h"
#include "neumesmixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"
#include <string>


namespace mei {
/** \brief Represents a division (divisio) in neume notation.
 * 
 *  Divisions indicate short, medium, or long pauses similar to breath marks in
 *  modern notation.
 */
class MEI_EXPORT DivLine : public MeiElement {
    public:
        DivLine();
        DivLine(const DivLine &other);
        virtual ~DivLine();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <divLine> */

        BasicMixIn    m_Basic;
        ClassedMixIn    m_Classed;
        ColorMixIn    m_Color;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        VisibilityMixIn    m_Visibility;
        XyMixIn    m_Xy;
        VisualOffsetHoMixIn    m_VisualOffsetHo;

    private:
        REGISTER_DECLARATION(DivLine);
};

/** \brief Episema.
 */
class MEI_EXPORT Episema : public MeiElement {
    public:
        Episema();
        Episema(const Episema &other);
        virtual ~Episema();

/* include <episema> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        ArticulationGesturalMixIn    m_ArticulationGestural;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        EpisemaVisMixIn    m_EpisemaVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Episema);
};

/** \brief Hispanic tick.
 */
class MEI_EXPORT HispanTick : public MeiElement {
    public:
        HispanTick();
        HispanTick(const HispanTick &other);
        virtual ~HispanTick();

/* include <hispanTick> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        HispanTickVisMixIn    m_HispanTickVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(HispanTick);
};

/** \brief Liquescent.
 */
class MEI_EXPORT Liquescent : public MeiElement {
    public:
        Liquescent();
        Liquescent(const Liquescent &other);
        virtual ~Liquescent();

/* include <liquescent> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LiquescentVisMixIn    m_LiquescentVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Liquescent);
};

/** \brief Sign representing a single pitched event, although the exact pitch may not be
 *  known.
 */
class MEI_EXPORT Nc : public MeiElement {
    public:
        Nc();
        Nc(const Nc &other);
        virtual ~Nc();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <nc> */

        BasicMixIn    m_Basic;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        HarmonicFunctionMixIn    m_HarmonicFunction;
        IntervalMelodicMixIn    m_IntervalMelodic;
        MelodicFunctionMixIn    m_MelodicFunction;
        PitchClassMixIn    m_PitchClass;
        SolfaMixIn    m_Solfa;
        NcGesMixIn    m_NcGes;
        AccidentalGesturalMixIn    m_AccidentalGestural;
        ArticulationGesturalMixIn    m_ArticulationGestural;
        DurationGesturalMixIn    m_DurationGestural;
        InstrumentIdentMixIn    m_InstrumentIdent;
        MidiVelocityMixIn    m_MidiVelocity;
        NcLogMixIn    m_NcLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        NcFormMixIn    m_NcForm;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Nc);
};

/** \brief Collection of one or more neume components.
 */
class MEI_EXPORT NcGrp : public MeiElement {
    public:
        NcGrp();
        NcGrp(const NcGrp &other);
        virtual ~NcGrp();

/* include <ncGrp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        TimestampGesturalMixIn    m_TimestampGestural;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        SylTextMixIn    m_SylText;
        ColorMixIn    m_Color;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(NcGrp);
};

/** \brief Sign representing one or more musical pitches.
 */
class MEI_EXPORT Neume : public MeiElement {
    public:
        Neume();
        Neume(const Neume &other);
        virtual ~Neume();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <neume> */

        BasicMixIn    m_Basic;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TimestampGesturalMixIn    m_TimestampGestural;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        SylTextMixIn    m_SylText;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Neume);
};

/** \brief Oriscus.
 */
class MEI_EXPORT Oriscus : public MeiElement {
    public:
        Oriscus();
        Oriscus(const Oriscus &other);
        virtual ~Oriscus();

/* include <oriscus> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Oriscus);
};

/** \brief Quilisma.
 */
class MEI_EXPORT Quilisma : public MeiElement {
    public:
        Quilisma();
        Quilisma(const Quilisma &other);
        virtual ~Quilisma();

/* include <quilisma> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        QuilismaVisMixIn    m_QuilismaVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Quilisma);
};

/** \brief Significantive letter(s).
 */
class MEI_EXPORT SignifLet : public MeiElement {
    public:
        SignifLet();
        SignifLet(const SignifLet &other);
        virtual ~SignifLet();

/* include <signifLet> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        SignifLetVisMixIn    m_SignifLetVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(SignifLet);
};

/** \brief Strophicus.
 */
class MEI_EXPORT Strophicus : public MeiElement {
    public:
        Strophicus();
        Strophicus(const Strophicus &other);
        virtual ~Strophicus();

/* include <strophicus> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Strophicus);
};

/** \brief Neume notation can be thought of as "neumed text".
 * 
 *  Therefore, the syllable element provides high-level organization in this
 *  repertoire.
 */
class MEI_EXPORT Syllable : public MeiElement {
    public:
        Syllable();
        Syllable(const Syllable &other);
        virtual ~Syllable();

/* include <syllable> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Syllable);
};
} // namespace mei
#endif // NEUMES_H_
