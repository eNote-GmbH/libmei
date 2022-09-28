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

#ifndef HARMONY_H_
#define HARMONY_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "analyticalmixins.h"
#include "facsimilemixins.h"
#include "gesturalmixins.h"
#include "harmonymixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "stringtabmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"


namespace mei {
/** \brief (chord definition) – Chord tablature definition.
 */
class MEI_EXPORT ChordDef : public MeiElement {
    public:
        ChordDef();
        ChordDef(const ChordDef &other);
        virtual ~ChordDef();

/* include <chordDef> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        StringtabPositionMixIn    m_StringtabPosition;
        StringtabTuningMixIn    m_StringtabTuning;

    private:
        REGISTER_DECLARATION(ChordDef);
};

/** \brief An individual pitch in a chord defined by a chordDef element.
 */
class MEI_EXPORT ChordMember : public MeiElement {
    public:
        ChordMember();
        ChordMember(const ChordMember &other);
        virtual ~ChordMember();

/* include <chordMember> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        IntervalHarmonicMixIn    m_IntervalHarmonic;
        AccidentalGesturalMixIn    m_AccidentalGestural;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;
        StringtabMixIn    m_Stringtab;

    private:
        REGISTER_DECLARATION(ChordMember);
};

/** \brief Chord/tablature look-up table.
 */
class MEI_EXPORT ChordTable : public MeiElement {
    public:
        ChordTable();
        ChordTable(const ChordTable &other);
        virtual ~ChordTable();

/* include <chordTable> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(ChordTable);
};

/** \brief (figure) – Single element of a figured bass indication.
 */
class MEI_EXPORT F : public MeiElement {
    public:
        F();
        F(const F &other);
        virtual ~F();

/* include <f> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
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
        ExtenderMixIn    m_Extender;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(F);
};

/** \brief (figured bass) – Symbols added to a bass line that indicate harmony.
 * 
 *  Used to improvise a chordal accompaniment. Sometimes called Generalbass,
 *  thoroughbass, or basso continuo.
 */
class MEI_EXPORT Fb : public MeiElement {
    public:
        Fb();
        Fb(const Fb &other);
        virtual ~Fb();

/* include <fb> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Fb);
};

/** \brief (harmony) – An indication of harmony, e.g., chord names, tablature grids,
 *  harmonic analysis, figured bass.
 */
class MEI_EXPORT Harm : public MeiElement {
    public:
        Harm();
        Harm(const Harm &other);
        virtual ~Harm();

/* include <harm> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        HarmLogMixIn    m_HarmLog;
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
        HarmVisMixIn    m_HarmVis;
        ExtenderMixIn    m_Extender;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
        HarmAnlMixIn    m_HarmAnl;
        IntervalHarmonicMixIn    m_IntervalHarmonic;

    private:
        REGISTER_DECLARATION(Harm);
};
} // namespace mei
#endif // HARMONY_H_
