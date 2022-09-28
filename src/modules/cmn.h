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

#ifndef CMN_H_
#define CMN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "cmnmixins.h"
#include "externalsymbolsmixins.h"
#include "facsimilemixins.h"
#include "gesturalmixins.h"
#include "midimixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"


namespace mei {
/** \brief (arpeggiation) – Indicates that the notes of a chord are to be performed
 *  successively rather than simultaneously, usually from lowest to highest.
 * 
 *  Sometimes called a "roll".
 */
class MEI_EXPORT Arpeg : public MeiElement {
    public:
        Arpeg();
        Arpeg(const Arpeg &other);
        virtual ~Arpeg();

/* include <arpeg> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        ArpegLogMixIn    m_ArpegLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartIdMixIn    m_StartId;
        ArpegVisMixIn    m_ArpegVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Arpeg);
};

/** \brief An instruction to begin the next section or movement of a composition without
 *  pause.
 */
class MEI_EXPORT Attacca : public MeiElement {
    public:
        Attacca();
        Attacca(const Attacca &other);
        virtual ~Attacca();

/* include <attacca> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        AttaccaLogMixIn    m_AttaccaLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        ExtenderMixIn    m_Extender;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VerticalGroupMixIn    m_VerticalGroup;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        XyMixIn    m_Xy;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Attacca);
};

/** \brief (bowed tremolo) – A rapid alternation on a single pitch or chord.
 */
class MEI_EXPORT BTrem : public MeiElement {
    public:
        BTrem();
        BTrem(const BTrem &other);
        virtual ~BTrem();

/* include <bTrem> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        BTremLogMixIn    m_BTremLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        AugmentDotsMixIn    m_AugmentDots;
        DurationLogicalMixIn    m_DurationLogical;
        NumberedMixIn    m_Numbered;
        NumberPlacementMixIn    m_NumberPlacement;
        TremMeasuredMixIn    m_TremMeasured;

    private:
        REGISTER_DECLARATION(BTrem);
};

/** \brief A container for a series of explicitly beamed events that begins and ends
 *  entirely within a measure.
 */
class MEI_EXPORT Beam : public MeiElement {
    public:
        Beam();
        Beam(const Beam &other);
        virtual ~Beam();

/* include <beam> */

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
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        BeamedWithMixIn    m_BeamedWith;
        ColorMixIn    m_Color;
        CueMixIn    m_Cue;
        BeamRendMixIn    m_BeamRend;
        VisibilityMixIn    m_Visibility;

    private:
        REGISTER_DECLARATION(Beam);
};

/** \brief (beam span) – Alternative element for explicitly encoding beams, particularly
 *  those which extend across bar lines.
 */
class MEI_EXPORT BeamSpan : public MeiElement {
    public:
        BeamSpan();
        BeamSpan(const BeamSpan &other);
        virtual ~BeamSpan();

/* include <beamSpan> */

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
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        BeamedWithMixIn    m_BeamedWith;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        ColorMixIn    m_Color;
        CueMixIn    m_Cue;
        BeamRendMixIn    m_BeamRend;
        VisibilityMixIn    m_Visibility;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(BeamSpan);
};

/** \brief (beat repeat) – An indication that material on a preceding beat should be
 *  repeated.
 */
class MEI_EXPORT BeatRpt : public MeiElement {
    public:
        BeatRpt();
        BeatRpt(const BeatRpt &other);
        virtual ~BeatRpt();

/* include <beatRpt> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        BeatRptLogMixIn    m_BeatRptLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        BeatRptVisMixIn    m_BeatRptVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;
        PlistMixIn    m_Plist;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(BeatRpt);
};

/** \brief A variation in pitch (often micro-tonal) upwards or downwards during the course
 *  of a note.
 */
class MEI_EXPORT Bend : public MeiElement {
    public:
        Bend();
        Bend(const Bend &other);
        virtual ~Bend();

/* include <bend> */

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
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        ColorMixIn    m_Color;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurveRendMixIn    m_CurveRend;
        BendGesMixIn    m_BendGes;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Bend);
};

/** \brief Marks a sequence of notational events grouped by a bracket.
 */
class MEI_EXPORT BracketSpan : public MeiElement {
    public:
        BracketSpan();
        BracketSpan(const BracketSpan &other);
        virtual ~BracketSpan();

/* include <bracketSpan> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BracketSpanLogMixIn    m_BracketSpanLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(BracketSpan);
};

/** \brief (breath mark) – An indication of a point at which the performer on an instrument
 *  requiring breath (including the voice) may breathe.
 */
class MEI_EXPORT Breath : public MeiElement {
    public:
        Breath();
        Breath(const Breath &other);
        virtual ~Breath();

/* include <breath> */

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
        StaffIdentMixIn    m_StaffIdent;
        StartIdMixIn    m_StartId;
        TimestampLogicalMixIn    m_TimestampLogical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        StaffLocMixIn    m_StaffLoc;
        StaffLocPitchedMixIn    m_StaffLocPitched;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        TimestampGesturalMixIn    m_TimestampGestural;

    private:
        REGISTER_DECLARATION(Breath);
};

/** \brief (fingered tremolo) – A rapid alternation between a pair of notes (or chords or
 *  perhaps between a note and a chord) that are (usually) farther apart than a
 *  major second.
 */
class MEI_EXPORT FTrem : public MeiElement {
    public:
        FTrem();
        FTrem(const FTrem &other);
        virtual ~FTrem();

/* include <fTrem> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        FTremLogMixIn    m_FTremLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        AugmentDotsMixIn    m_AugmentDots;
        DurationLogicalMixIn    m_DurationLogical;
        FTremVisMixIn    m_FTremVis;
        TremMeasuredMixIn    m_TremMeasured;

    private:
        REGISTER_DECLARATION(FTrem);
};

/** \brief An indication placed over a note or rest to indicate that it should be held
 *  longer than its written value.
 * 
 *  May also occur over a bar line to indicate the end of a phrase or section.
 *  Sometimes called a 'hold' or 'pause'.
 */
class MEI_EXPORT Fermata : public MeiElement {
    public:
        Fermata();
        Fermata(const Fermata &other);
        virtual ~Fermata();

/* include <fermata> */

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
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        FermataVisMixIn    m_FermataVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;

    private:
        REGISTER_DECLARATION(Fermata);
};

/** \brief (glissando) – A continuous or sliding movement from one pitch to another,
 *  usually indicated by a straight or wavy line.
 */
class MEI_EXPORT Gliss : public MeiElement {
    public:
        Gliss();
        Gliss(const Gliss &other);
        virtual ~Gliss();

/* include <gliss> */

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
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Gliss);
};

/** \brief A container for a sequence of grace notes.
 */
class MEI_EXPORT GraceGrp : public MeiElement {
    public:
        GraceGrp();
        GraceGrp(const GraceGrp &other);
        virtual ~GraceGrp();

/* include <graceGrp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        GraceGrpLogMixIn    m_GraceGrpLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        GracedMixIn    m_Graced;
        ColorMixIn    m_Color;

    private:
        REGISTER_DECLARATION(GraceGrp);
};

/** \brief Indicates continuous dynamics expressed on the score as wedge-shaped graphics,
 *  e.g., < and >.
 */
class MEI_EXPORT Hairpin : public MeiElement {
    public:
        Hairpin();
        Hairpin(const Hairpin &other);
        virtual ~Hairpin();

/* include <hairpin> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        HairpinLogMixIn    m_HairpinLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        HairpinVisMixIn    m_HairpinVis;
        ColorMixIn    m_Color;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VerticalGroupMixIn    m_VerticalGroup;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        DurationGesturalMixIn    m_DurationGestural;
        MidiValueMixIn    m_MidiValue;
        MidiValue2MixIn    m_MidiValue2;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Hairpin);
};

/** \brief (half-measure repeat) – A half-measure repeat in any meter.
 */
class MEI_EXPORT HalfmRpt : public MeiElement {
    public:
        HalfmRpt();
        HalfmRpt(const HalfmRpt &other);
        virtual ~HalfmRpt();

/* include <halfmRpt> */

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
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        DurationLogicalMixIn    m_DurationLogical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        DurationGesturalMixIn    m_DurationGestural;

    private:
        REGISTER_DECLARATION(HalfmRpt);
};

/** \brief (harp pedal) – Harp pedal diagram.
 */
class MEI_EXPORT HarpPedal : public MeiElement {
    public:
        HarpPedal();
        HarpPedal(const HarpPedal &other);
        virtual ~HarpPedal();

/* include <harpPedal> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        HarpPedalLogMixIn    m_HarpPedalLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;

    private:
        REGISTER_DECLARATION(HarpPedal);
};

/** \brief (laissez vibrer) – A "tie-like" indication that a note should ring beyond its
 *  written duration.
 */
class MEI_EXPORT Lv : public MeiElement {
    public:
        Lv();
        Lv(const Lv &other);
        virtual ~Lv();

/* include <lv> */

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
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        ColorMixIn    m_Color;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurveRendMixIn    m_CurveRend;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Lv);
};

/** \brief (measure number) – Designation, name, or label for a measure, often but not
 *  always consisting of digits.
 * 
 *  Use this element when the n attribute on measure does not adequately capture the
 *  appearance or placement of the measure number/label.
 */
class MEI_EXPORT MNum : public MeiElement {
    public:
        MNum();
        MNum(const MNum &other);
        virtual ~MNum();

/* include <mNum> */

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
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(MNum);
};

/** \brief (measure rest) – Complete measure rest in any meter.
 */
class MEI_EXPORT MRest : public MeiElement {
    public:
        MRest();
        MRest(const MRest &other);
        virtual ~MRest();

/* include <mRest> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        CueMixIn    m_Cue;
        DurationAdditiveMixIn    m_DurationAdditive;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        CutoutMixIn    m_Cutout;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        StaffLocPitchedMixIn    m_StaffLocPitched;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisibilityMixIn    m_Visibility;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;
        FermataPresentMixIn    m_FermataPresent;

    private:
        REGISTER_DECLARATION(MRest);
};

/** \brief (measure repeat) – An indication that the previous measure should be repeated.
 */
class MEI_EXPORT MRpt : public MeiElement {
    public:
        MRpt();
        MRpt(const MRpt &other);
        virtual ~MRpt();

/* include <mRpt> */

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
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        NumberedMixIn    m_Numbered;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtSymMixIn    m_ExtSym;
        NumberPlacementMixIn    m_NumberPlacement;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(MRpt);
};

/** \brief (2-measure repeat) – An indication that the previous two measures should be
 *  repeated.
 */
class MEI_EXPORT MRpt2 : public MeiElement {
    public:
        MRpt2();
        MRpt2(const MRpt2 &other);
        virtual ~MRpt2();

/* include <mRpt2> */

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
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(MRpt2);
};

/** \brief (measure space) – A measure containing only empty space in any meter.
 */
class MEI_EXPORT MSpace : public MeiElement {
    public:
        MSpace();
        MSpace(const MSpace &other);
        virtual ~MSpace();

/* include <mSpace> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DurationAdditiveMixIn    m_DurationAdditive;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        AltSymMixIn    m_AltSym;
        CutoutMixIn    m_Cutout;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;
        FermataPresentMixIn    m_FermataPresent;

    private:
        REGISTER_DECLARATION(MSpace);
};

/** \brief Unit of musical time consisting of a fixed number of note values of a given
 *  type, as determined by the prevailing meter, and delimited in musical notation
 *  by bar lines.
 */
class MEI_EXPORT Measure : public MeiElement {
    public:
        Measure();
        Measure(const Measure &other);
        virtual ~Measure();

/* include <measure> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        MetadataPointingMixIn    m_MetadataPointing;
        PointingMixIn    m_Pointing;
        JoinedMixIn    m_Joined;
        TimestampGesturalMixIn    m_TimestampGestural;
        MeasureLogMixIn    m_MeasureLog;
        AlignmentMixIn    m_Alignment;
        MeterConformanceBarMixIn    m_MeterConformanceBar;
        BarringMixIn    m_Barring;
        WidthMixIn    m_Width;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Measure);
};

/** \brief (meter signature) – Written meter signature.
 */
class MEI_EXPORT MeterSig : public MeiElement {
    public:
        MeterSig();
        MeterSig(const MeterSig &other);
        virtual ~MeterSig();

/* include <meterSig> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        MeterSigLogMixIn    m_MeterSigLog;
        MeterSigVisMixIn    m_MeterSigVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(MeterSig);
};

/** \brief (meter signature group) – Used to capture alternating, interchanging, and mixed
 *  meter signatures.
 */
class MEI_EXPORT MeterSigGrp : public MeiElement {
    public:
        MeterSigGrp();
        MeterSigGrp(const MeterSigGrp &other);
        virtual ~MeterSigGrp();

/* include <meterSigGrp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        MeterSigGrpLogMixIn    m_MeterSigGrpLog;

    private:
        REGISTER_DECLARATION(MeterSigGrp);
};

/** \brief (multiple rest) – Multiple measures of rest compressed into a single symbol,
 *  frequently found in performer parts.
 */
class MEI_EXPORT MultiRest : public MeiElement {
    public:
        MultiRest();
        MultiRest(const MultiRest &other);
        virtual ~MultiRest();

/* include <multiRest> */

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
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        NumberedMixIn    m_Numbered;
        MultiRestVisMixIn    m_MultiRestVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        NumberPlacementMixIn    m_NumberPlacement;
        StaffLocMixIn    m_StaffLoc;
        StaffLocPitchedMixIn    m_StaffLocPitched;
        TypographyMixIn    m_Typography;
        WidthMixIn    m_Width;
        DurationGesturalMixIn    m_DurationGestural;

    private:
        REGISTER_DECLARATION(MultiRest);
};

/** \brief (multiple repeat) – Multiple repeated measures.
 */
class MEI_EXPORT MultiRpt : public MeiElement {
    public:
        MultiRpt();
        MultiRpt(const MultiRpt &other);
        virtual ~MultiRpt();

/* include <multiRpt> */

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
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        NumberedMixIn    m_Numbered;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(MultiRpt);
};

/** \brief (ossia layer) – A layer that contains an alternative to material in another
 *  layer.
 */
class MEI_EXPORT OLayer : public MeiElement {
    public:
        OLayer();
        OLayer(const OLayer &other);
        virtual ~OLayer();

/* include <oLayer> */

        BasicMixIn    m_Basic;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        MetadataPointingMixIn    m_MetadataPointing;
        NIntegerMixIn    m_NInteger;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        LayerLogMixIn    m_LayerLog;
        CueMixIn    m_Cue;
        MeterConformanceMixIn    m_MeterConformance;
        VisibilityMixIn    m_Visibility;

    private:
        REGISTER_DECLARATION(OLayer);
};

/** \brief (ossia staff) – A staff that holds an alternative passage which may be played
 *  instead of the original material.
 */
class MEI_EXPORT OStaff : public MeiElement {
    public:
        OStaff();
        OStaff(const OStaff &other);
        virtual ~OStaff();

/* include <oStaff> */

        BasicMixIn    m_Basic;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        MetadataPointingMixIn    m_MetadataPointing;
        NIntegerMixIn    m_NInteger;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        StaffLogMixIn    m_StaffLog;
        MeterConformanceMixIn    m_MeterConformance;
        VisibilityMixIn    m_Visibility;

    private:
        REGISTER_DECLARATION(OStaff);
};

/** \brief An indication that a passage should be performed one or more octaves above or
 *  below its written pitch.
 */
class MEI_EXPORT Octave : public MeiElement {
    public:
        Octave();
        Octave(const Octave &other);
        virtual ~Octave();

/* include <octave> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        OctaveLogMixIn    m_OctaveLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        OctaveDisplacementMixIn    m_OctaveDisplacement;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        ColorMixIn    m_Color;
        ExtenderMixIn    m_Extender;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Octave);
};

/** \brief Captures original notation and a differently notated version *present in the
 *  source being transcribed*.
 */
class MEI_EXPORT Ossia : public MeiElement {
    public:
        Ossia();
        Ossia(const Ossia &other);
        virtual ~Ossia();

/* include <ossia> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Ossia);
};

/** \brief Piano pedal mark.
 */
class MEI_EXPORT Pedal : public MeiElement {
    public:
        Pedal();
        Pedal(const Pedal &other);
        virtual ~Pedal();

/* include <pedal> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        PedalLogMixIn    m_PedalLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        PedalVisMixIn    m_PedalVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VerticalGroupMixIn    m_VerticalGroup;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Pedal);
};

/** \brief (rehearsal mark) – In an orchestral score and its corresponding parts, a mark
 *  indicating a convenient point from which to resume rehearsal after a break.
 */
class MEI_EXPORT Reh : public MeiElement {
    public:
        Reh();
        Reh(const Reh &other);
        virtual ~Reh();

/* include <reh> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        AlignmentMixIn    m_Alignment;
        PartIdentMixIn    m_PartIdent;
        StaffIdentMixIn    m_StaffIdent;
        StartIdMixIn    m_StartId;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        ColorMixIn    m_Color;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Reh);
};

/** \brief Indication of 1) a "unified melodic idea" or 2) performance technique.
 */
class MEI_EXPORT Slur : public MeiElement {
    public:
        Slur();
        Slur(const Slur &other);
        virtual ~Slur();

/* include <slur> */

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
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        ColorMixIn    m_Color;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurveRendMixIn    m_CurveRend;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
        JoinedMixIn    m_Joined;

    private:
        REGISTER_DECLARATION(Slur);
};

/** \brief An indication that two notes of the same pitch form a single note with their
 *  combined rhythmic values.
 */
class MEI_EXPORT Tie : public MeiElement {
    public:
        Tie();
        Tie(const Tie &other);
        virtual ~Tie();

/* include <tie> */

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
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        ColorMixIn    m_Color;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurveRendMixIn    m_CurveRend;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Tie);
};

/** \brief A group of notes with "irregular" (sometimes called "irrational") rhythmic
 *  values, for example, three notes in the time normally occupied by two or nine in
 *  the time of five.
 */
class MEI_EXPORT Tuplet : public MeiElement {
    public:
        Tuplet();
        Tuplet(const Tuplet &other);
        virtual ~Tuplet();

/* include <tuplet> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        BeamedWithMixIn    m_BeamedWith;
        DurationAdditiveMixIn    m_DurationAdditive;
        DurationRatioMixIn    m_DurationRatio;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        TupletVisMixIn    m_TupletVis;
        ColorMixIn    m_Color;
        NumberPlacementMixIn    m_NumberPlacement;
        DurationGesturalMixIn    m_DurationGestural;

    private:
        REGISTER_DECLARATION(Tuplet);
};

/** \brief (tuplet span) – Alternative element for encoding tuplets, especially useful for
 *  tuplets that extend across bar lines.
 */
class MEI_EXPORT TupletSpan : public MeiElement {
    public:
        TupletSpan();
        TupletSpan(const TupletSpan &other);
        virtual ~TupletSpan();

/* include <tupletSpan> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        BeamedWithMixIn    m_BeamedWith;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        DurationRatioMixIn    m_DurationRatio;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        TupletVisMixIn    m_TupletVis;
        ColorMixIn    m_Color;
        NumberPlacementMixIn    m_NumberPlacement;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
        DurationGesturalMixIn    m_DurationGestural;

    private:
        REGISTER_DECLARATION(TupletSpan);
};
} // namespace mei
#endif // CMN_H_
