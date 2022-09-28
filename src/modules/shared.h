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

#ifndef SHARED_H_
#define SHARED_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "meimixins.h"
#include "analyticalmixins.h"
#include "cmnmixins.h"
#include "cmnornamentsmixins.h"
#include "externalsymbolsmixins.h"
#include "facsimilemixins.h"
#include "gesturalmixins.h"
#include "headermixins.h"
#include "mensuralmixins.h"
#include "midimixins.h"
#include "msdescmixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "stringtabmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"
#include <string>


namespace mei {
/** \brief (accidental) – Records a temporary alteration to the pitch of a note.
 */
class MEI_EXPORT Accid : public MeiElement {
    public:
        Accid();
        Accid(const Accid &other);
        virtual ~Accid();

/* include <accid> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AccidLogMixIn    m_AccidLog;
        AccidentalMixIn    m_Accidental;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        PlacementOnStaffMixIn    m_PlacementOnStaff;
        PlacementRelEventMixIn    m_PlacementRelEvent;
        StaffLocMixIn    m_StaffLoc;
        StaffLocPitchedMixIn    m_StaffLocPitched;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        AccidentalGesturalMixIn    m_AccidentalGestural;

    private:
        REGISTER_DECLARATION(Accid);
};

/** \brief Name of an actor appearing within a cast list.
 */
class MEI_EXPORT Actor : public MeiElement {
    public:
        Actor();
        Actor(const Actor &other);
        virtual ~Actor();

/* include <actor> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Actor);
};

/** \brief (address line) – Single line of a postal address.
 */
class MEI_EXPORT AddrLine : public MeiElement {
    public:
        AddrLine();
        AddrLine(const AddrLine &other);
        virtual ~AddrLine();

/* include <addrLine> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(AddrLine);
};

/** \brief Contains a postal address, for example of a publisher, an organization, or an
 *  individual.
 */
class MEI_EXPORT Address : public MeiElement {
    public:
        Address();
        Address(const Address &other);
        virtual ~Address();

/* include <address> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Address);
};

/** \brief Highest or lowest pitch in a score, staff, or layer.
 */
class MEI_EXPORT AmbNote : public MeiElement {
    public:
        AmbNote();
        AmbNote(const AmbNote &other);
        virtual ~AmbNote();

/* include <ambNote> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AccidentalMixIn    m_Accidental;
        ColorationMixIn    m_Coloration;
        DurationLogicalMixIn    m_DurationLogical;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        NoteHeadsMixIn    m_NoteHeads;
        StaffLocMixIn    m_StaffLoc;
        StemsMixIn    m_Stems;
        StemsCmnMixIn    m_StemsCmn;
        StemsMensuralMixIn    m_StemsMensural;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(AmbNote);
};

/** \brief Range of a voice, instrument or piece.
 */
class MEI_EXPORT Ambitus : public MeiElement {
    public:
        Ambitus();
        Ambitus(const Ambitus &other);
        virtual ~Ambitus();

/* include <ambitus> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        IntervalHarmonicMixIn    m_IntervalHarmonic;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Ambitus);
};

/** \brief (analytic level) – Contains bibliographic elements describing an item (e.g., an
 *  article or poem) published within a monograph or journal and not as an
 *  independent publication.
 */
class MEI_EXPORT Analytic : public MeiElement {
    public:
        Analytic();
        Analytic(const Analytic &other);
        virtual ~Analytic();

/* include <analytic> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        ComponentTypeMixIn    m_ComponentType;
        DataPointingMixIn    m_DataPointing;
        PointingMixIn    m_Pointing;
        RecordTypeMixIn    m_RecordType;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Analytic);
};

/** \brief (annotation) – Provides a statement explaining the text or indicating the basis
 *  for an assertion.
 */
class MEI_EXPORT Annot : public MeiElement {
    public:
        Annot();
        Annot(const Annot &other);
        virtual ~Annot();

/* include <annot> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AlignmentMixIn    m_Alignment;
        DurationAdditiveMixIn    m_DurationAdditive;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        StaffIdentMixIn    m_StaffIdent;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        TimestampLogicalMixIn    m_TimestampLogical;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        AnnotVisMixIn    m_AnnotVis;
        DurationGesturalMixIn    m_DurationGestural;
        TimestampGesturalMixIn    m_TimestampGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
        AudienceMixIn    m_Audience;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        PlistMixIn    m_Plist;
        SourceMixIn    m_Source;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Annot);
};

/** \brief A person or organization who transcribes a musical composition, usually for a
 *  different medium from that of the original; in an arrangement the musical
 *  substance remains essentially unchanged.
 */
class MEI_EXPORT Arranger : public MeiElement {
    public:
        Arranger();
        Arranger(const Arranger &other);
        virtual ~Arranger();

/* include <arranger> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Arranger);
};

/** \brief (articulation) – An indication of how to play a note or chord.
 */
class MEI_EXPORT Artic : public MeiElement {
    public:
        Artic();
        Artic(const Artic &other);
        virtual ~Artic();

/* include <artic> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        ArticulationMixIn    m_Articulation;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        PlacementOnStaffMixIn    m_PlacementOnStaff;
        PlacementRelEventMixIn    m_PlacementRelEvent;
        StaffLocMixIn    m_StaffLoc;
        StaffLocPitchedMixIn    m_StaffLocPitched;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        ArticulationGesturalMixIn    m_ArticulationGestural;

    private:
        REGISTER_DECLARATION(Artic);
};

/** \brief The name of the creator of the intellectual content of a non-musical, literary
 *  work.
 */
class MEI_EXPORT Author : public MeiElement {
    public:
        Author();
        Author(const Author &other);
        virtual ~Author();

/* include <author> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Author);
};

/** \brief Vertical line drawn through one or more staves that divides musical notation
 *  into metrical units.
 */
class MEI_EXPORT BarLine : public MeiElement {
    public:
        BarLine();
        BarLine(const BarLine &other);
        virtual ~BarLine();

/* include <barLine> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        TargetEvalMixIn    m_TargetEval;
        BarLineLogMixIn    m_BarLineLog;
        MeterConformanceBarMixIn    m_MeterConformanceBar;
        BarLineVisMixIn    m_BarLineVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        VisibilityMixIn    m_Visibility;
        WidthMixIn    m_Width;

    private:
        REGISTER_DECLARATION(BarLine);
};

/** \brief (bibliographic reference) – Provides a loosely-structured bibliographic citation
 *  in which the sub-components may or may not be explicitly marked.
 */
class MEI_EXPORT Bibl : public MeiElement {
    public:
        Bibl();
        Bibl(const Bibl &other);
        virtual ~Bibl();

/* include <bibl> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Bibl);
};

/** \brief List of bibliographic references.
 */
class MEI_EXPORT BiblList : public MeiElement {
    public:
        BiblList();
        BiblList(const BiblList &other);
        virtual ~BiblList();

/* include <biblList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(BiblList);
};

/** \brief (scope of citation) – Defines the scope of a bibliographic reference, for
 *  example as a list of page numbers, or a named subdivision of a larger work.
 */
class MEI_EXPORT BiblScope : public MeiElement {
    public:
        BiblScope();
        BiblScope(const BiblScope &other);
        virtual ~BiblScope();
        /** \brief Specifies the starting point of the location in a normalized form.
         */
        MeiAttribute* getFrom();
        void setFrom(std::string _from);
        bool hasFrom();
        void removeFrom();
        /** \brief Specifies the end-point of the location in a normalized form.
         */
        MeiAttribute* getTo();
        void setTo(std::string _to);
        bool hasTo();
        void removeTo();

/* include <biblScope> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(BiblScope);
};

/** \brief (structured bibliographic citation) – Contains a bibliographic citation in which
 *  bibliographic sub-elements must appear in a specified order.
 */
class MEI_EXPORT BiblStruct : public MeiElement {
    public:
        BiblStruct();
        BiblStruct(const BiblStruct &other);
        virtual ~BiblStruct();

/* include <biblStruct> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;
        RecordTypeMixIn    m_RecordType;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(BiblStruct);
};

/** \brief Contains the whole of a single musical text, excluding any front or back matter.
 */
class MEI_EXPORT Body : public MeiElement {
    public:
        Body();
        Body(const Body &other);
        virtual ~Body();

/* include <body> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Body);
};

/** \brief Break, pause, or interruption in the normal tempo of a composition.
 * 
 *  Typically indicated by "railroad tracks", i.e., two diagonal slashes.
 */
class MEI_EXPORT Caesura : public MeiElement {
    public:
        Caesura();
        Caesura(const Caesura &other);
        virtual ~Caesura();

/* include <caesura> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DurationGesturalMixIn    m_DurationGestural;
        TimestampGesturalMixIn    m_TimestampGestural;
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

    private:
        REGISTER_DECLARATION(Caesura);
};

/** \brief A label which accompanies an illustration or a table.
 */
class MEI_EXPORT Caption : public MeiElement {
    public:
        Caption();
        Caption(const Caption &other);
        virtual ~Caption();

/* include <caption> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Caption);
};

/** \brief (cast group) – Groups one or more individual castItem elements within a cast
 *  list.
 */
class MEI_EXPORT CastGrp : public MeiElement {
    public:
        CastGrp();
        CastGrp(const CastGrp &other);
        virtual ~CastGrp();

/* include <castGrp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CastGrp);
};

/** \brief Contains a single entry within a cast list, describing either a single role or a
 *  list of non-speaking roles.
 */
class MEI_EXPORT CastItem : public MeiElement {
    public:
        CastItem();
        CastItem(const CastItem &other);
        virtual ~CastItem();

/* include <castItem> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CastItem);
};

/** \brief Contains a single cast list or dramatis personae.
 */
class MEI_EXPORT CastList : public MeiElement {
    public:
        CastList();
        CastList(const CastList &other);
        virtual ~CastList();

/* include <castList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CastList);
};

/** \brief (column beginning) – An empty formatting element that forces text to begin in a
 *  new column.
 */
class MEI_EXPORT Cb : public MeiElement {
    public:
        Cb();
        Cb(const Cb &other);
        virtual ~Cb();
        /** \brief Provides a numeric designation that indicates an element’s position in a
         *  sequence of similar elements.
         * 
         *  Its value must be a non-negative integer.
         */
        MeiAttribute* getN();
        void setN(std::string _n);
        bool hasN();
        void removeN();

/* include <cb> */

        BasicMixIn    m_Basic;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(Cb);
};

/** \brief A simultaneous sounding of two or more notes in the same layer *with the same
 *  duration*.
 */
class MEI_EXPORT Chord : public MeiElement {
    public:
        Chord();
        Chord(const Chord &other);
        virtual ~Chord();

/* include <chord> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        ArticulationMixIn    m_Articulation;
        AugmentDotsMixIn    m_AugmentDots;
        GracedMixIn    m_Graced;
        CueMixIn    m_Cue;
        DurationLogicalMixIn    m_DurationLogical;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        SylTextMixIn    m_SylText;
        ChordVisMixIn    m_ChordVis;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StemsMixIn    m_Stems;
        StemsCmnMixIn    m_StemsCmn;
        StemsMensuralMixIn    m_StemsMensural;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        XyMixIn    m_Xy;
        BeamSecondaryMixIn    m_BeamSecondary;
        ArticulationGesturalMixIn    m_ArticulationGestural;
        DurationGesturalMixIn    m_DurationGestural;
        InstrumentIdentMixIn    m_InstrumentIdent;
        BeamPresentMixIn    m_BeamPresent;
        FermataPresentMixIn    m_FermataPresent;
        LvPresentMixIn    m_LvPresent;
        OrnamPresentMixIn    m_OrnamPresent;
        SlurPresentMixIn    m_SlurPresent;
        TiePresentMixIn    m_TiePresent;
        TupletPresentMixIn    m_TupletPresent;

    private:
        REGISTER_DECLARATION(Chord);
};

/** \brief Indication of the exact location of a particular note on the staff and,
 *  therefore, the other notes as well.
 */
class MEI_EXPORT Clef : public MeiElement {
    public:
        Clef();
        Clef(const Clef &other);
        virtual ~Clef();

/* include <clef> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        FacsimileMixIn    m_Facsimile;
        ClefLogMixIn    m_ClefLog;
        ClefShapeMixIn    m_ClefShape;
        LineLocMixIn    m_LineLoc;
        OctaveMixIn    m_Octave;
        OctaveDisplacementMixIn    m_OctaveDisplacement;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;

    private:
        REGISTER_DECLARATION(Clef);
};

/** \brief (clef group) – A set of simultaneously-occurring clefs.
 */
class MEI_EXPORT ClefGrp : public MeiElement {
    public:
        ClefGrp();
        ClefGrp(const ClefGrp &other);
        virtual ~ClefGrp();

/* include <clefGrp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(ClefGrp);
};

/** \brief (column layout) – An empty formatting element that signals the start of columnar
 *  layout.
 */
class MEI_EXPORT ColLayout : public MeiElement {
    public:
        ColLayout();
        ColLayout(const ColLayout &other);
        virtual ~ColLayout();
        /** \brief Specifies the number of columns per page.
         */
        MeiAttribute* getCols();
        void setCols(std::string _cols);
        bool hasCols();
        void removeCols();

/* include <colLayout> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(ColLayout);
};

/** \brief The name of the creator of the intellectual content of a musical work.
 */
class MEI_EXPORT Composer : public MeiElement {
    public:
        Composer();
        Composer(const Composer &other);
        virtual ~Composer();

/* include <composer> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Composer);
};

/** \brief Names of individuals, institutions, or organizations responsible for
 *  contributions to the intellectual content of a work, where the specialized
 *  elements for authors, editors, etc.
 * 
 *  do not suffice or do not apply.
 */
class MEI_EXPORT Contributor : public MeiElement {
    public:
        Contributor();
        Contributor(const Contributor &other);
        virtual ~Contributor();
        /** \brief Used to specify further information about the entity referenced by this name,
         *  for example, the occupation of a person or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();

/* include <contributor> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Contributor);
};

/** \brief Non-bibliographic details of the creation of an intellectual entity, in
 *  narrative form, such as the date, place, and circumstances of its composition.
 * 
 *  More detailed information may be captured within the history element.
 */
class MEI_EXPORT Creation : public MeiElement {
    public:
        Creation();
        Creation(const Creation &other);
        virtual ~Creation();

/* include <creation> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Creation);
};

/** \brief Symbol placed at the end of a line of music to indicate the first note of the
 *  next line.
 * 
 *  Sometimes called a "direct".
 */
class MEI_EXPORT Custos : public MeiElement {
    public:
        Custos();
        Custos(const Custos &other);
        virtual ~Custos();

/* include <custos> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;
        CustosLogMixIn    m_CustosLog;
        AccidentalMixIn    m_Accidental;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(Custos);
};

/** \brief A string identifying a point in time or the time period between two such points.
 */
class MEI_EXPORT Date : public MeiElement {
    public:
        Date();
        Date(const Date &other);
        virtual ~Date();

/* include <date> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        CalendaredMixIn    m_Calendared;
        DatableMixIn    m_Datable;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Date);
};

/** \brief Entity to whom a creative work is formally offered.
 */
class MEI_EXPORT Dedicatee : public MeiElement {
    public:
        Dedicatee();
        Dedicatee(const Dedicatee &other);
        virtual ~Dedicatee();

/* include <dedicatee> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Dedicatee);
};

/** \brief Description of a measurement taken through a three-dimensional object.
 */
class MEI_EXPORT Depth : public MeiElement {
    public:
        Depth();
        Depth(const Depth &other);
        virtual ~Depth();

/* include <depth> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        QuantityMixIn    m_Quantity;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Depth);
};

/** \brief (description) – Container for text that briefly describes the feature to which
 *  it is attached, including its intended usage, purpose, or application as
 *  appropriate.
 */
class MEI_EXPORT Desc : public MeiElement {
    public:
        Desc();
        Desc(const Desc &other);
        virtual ~Desc();

/* include <desc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(Desc);
};

/** \brief (dimension) – Any single dimensional specification.
 */
class MEI_EXPORT Dim : public MeiElement {
    public:
        Dim();
        Dim(const Dim &other);
        virtual ~Dim();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <dim> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        QuantityMixIn    m_Quantity;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Dim);
};

/** \brief Information about the physical size of an entity; usually includes numerical
 *  data.
 */
class MEI_EXPORT Dimensions : public MeiElement {
    public:
        Dimensions();
        Dimensions(const Dimensions &other);
        virtual ~Dimensions();

/* include <dimensions> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        LangMixIn    m_Lang;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Dimensions);
};

/** \brief (directive) – An instruction expressed as a combination of text and symbols —
 *  such as segno and coda symbols, fermatas over a bar line, etc., typically above,
 *  below, or between staves, but not on the staff — that is not encoded elsewhere
 *  in more specific elements, like tempo or dynam.
 */
class MEI_EXPORT Dir : public MeiElement {
    public:
        Dir();
        Dir(const Dir &other);
        virtual ~Dir();

/* include <dir> */

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
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Dir);
};

/** \brief Person or agency, other than a publisher, from which access (including
 *  electronic access) to a bibliographic entity may be obtained.
 */
class MEI_EXPORT Distributor : public MeiElement {
    public:
        Distributor();
        Distributor(const Distributor &other);
        virtual ~Distributor();

/* include <distributor> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Distributor);
};

/** \brief (division) – Major structural division of text, such as a preface, chapter or
 *  section.
 */
class MEI_EXPORT Div : public MeiElement {
    public:
        Div();
        Div(const Div &other);
        virtual ~Div();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <div> */

        BasicMixIn    m_Basic;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LangMixIn    m_Lang;
        LinkingMixIn    m_Linking;
        MetadataPointingMixIn    m_MetadataPointing;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Div);
};

/** \brief Dot of augmentation or division.
 */
class MEI_EXPORT Dot : public MeiElement {
    public:
        Dot();
        Dot(const Dot &other);
        virtual ~Dot();

/* include <dot> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DotLogMixIn    m_DotLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        StaffLocPitchedMixIn    m_StaffLocPitched;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Dot);
};

/** \brief (dynamic) – Indication of the volume of a note, phrase, or section of music.
 */
class MEI_EXPORT Dynam : public MeiElement {
    public:
        Dynam();
        Dynam(const Dynam &other);
        virtual ~Dynam();

/* include <dynam> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
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
        DurationGesturalMixIn    m_DurationGestural;
        MidiValueMixIn    m_MidiValue;
        MidiValue2MixIn    m_MidiValue2;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Dynam);
};

/** \brief (edition designation) – A word or text phrase that indicates a difference in
 *  either content or form between the item being described and a related item
 *  previously issued by the same publisher/distributor (e.g., 2nd edition, version
 *  2.0, etc.), or simultaneously issued by either the same publisher/distributor or
 *  another publisher/distributor (e.g., large print edition, British edition,
 *  etc.).
 */
class MEI_EXPORT Edition : public MeiElement {
    public:
        Edition();
        Edition(const Edition &other);
        virtual ~Edition();

/* include <edition> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Edition);
};

/** \brief The name of the individual(s), institution(s) or organization(s) acting in an
 *  editorial capacity.
 */
class MEI_EXPORT Editor : public MeiElement {
    public:
        Editor();
        Editor(const Editor &other);
        virtual ~Editor();

/* include <editor> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Editor);
};

/** \brief Alternative ending for a repeated passage of music; i.e., prima volta, seconda
 *  volta, etc.
 */
class MEI_EXPORT Ending : public MeiElement {
    public:
        Ending();
        Ending(const Ending &other);
        virtual ~Ending();

/* include <ending> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AlignmentMixIn    m_Alignment;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Ending);
};

/** \brief Contains a free-text event description.
 */
class MEI_EXPORT Event : public MeiElement {
    public:
        Event();
        Event(const Event &other);
        virtual ~Event();

/* include <event> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        CalendaredMixIn    m_Calendared;
        DatableMixIn    m_Datable;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Event);
};

/** \brief Contains historical information given as a sequence of significant past events.
 */
class MEI_EXPORT EventList : public MeiElement {
    public:
        EventList();
        EventList(const EventList &other);
        virtual ~EventList();

/* include <eventList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(EventList);
};

/** \brief Indicates how a section may be programmatically expanded into its 'through-
 *  composed' form.
 */
class MEI_EXPORT Expansion : public MeiElement {
    public:
        Expansion();
        Expansion(const Expansion &other);
        virtual ~Expansion();

/* include <expansion> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        PlistMixIn    m_Plist;
        SourceMixIn    m_Source;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Expansion);
};

/** \brief Used to express size in terms other than physical dimensions, such as number of
 *  pages, records, bytes, physical components, etc.
 */
class MEI_EXPORT Extent : public MeiElement {
    public:
        Extent();
        Extent(const Extent &other);
        virtual ~Extent();

/* include <extent> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        QuantityMixIn    m_Quantity;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Extent);
};

/** \brief Names of individuals, institutions, or organizations responsible for funding.
 * 
 *  Funders provide financial support for a project; they are distinct from
 *  sponsors, who provide intellectual support and authority.
 */
class MEI_EXPORT Funder : public MeiElement {
    public:
        Funder();
        Funder(const Funder &other);
        virtual ~Funder();

/* include <funder> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Funder);
};

/** \brief Term or terms that designate a category characterizing a particular style, form,
 *  or content.
 */
class MEI_EXPORT Genre : public MeiElement {
    public:
        Genre();
        Genre(const Genre &other);
        virtual ~Genre();

/* include <genre> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Genre);
};

/** \brief Contains a composite musical text, grouping together a sequence of distinct
 *  musical texts (or groups of such musical texts) which are regarded as a unit for
 *  some purpose, for example, the collected works of a composer.
 */
class MEI_EXPORT Group : public MeiElement {
    public:
        Group();
        Group(const Group &other);
        virtual ~Group();

/* include <group> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Group);
};

/** \brief (group symbol) – A brace or bracket used to group two or more staves of a score
 *  or part.
 */
class MEI_EXPORT GrpSym : public MeiElement {
    public:
        GrpSym();
        GrpSym(const GrpSym &other);
        virtual ~GrpSym();

/* include <grpSym> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        GrpSymLogMixIn    m_GrpSymLog;
        StaffGroupingSymMixIn    m_StaffGroupingSym;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(GrpSym);
};

/** \brief (heading) – Contains any heading, for example, the title of a section of text,
 *  or the heading of a list.
 */
class MEI_EXPORT Head : public MeiElement {
    public:
        Head();
        Head(const Head &other);
        virtual ~Head();

/* include <head> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Head);
};

/** \brief Description of the vertical size of an object.
 */
class MEI_EXPORT Height : public MeiElement {
    public:
        Height();
        Height(const Height &other);
        virtual ~Height();

/* include <height> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        QuantityMixIn    m_Quantity;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Height);
};

/** \brief An alpha-numeric string that establishes the identity of the described material.
 */
class MEI_EXPORT Identifier : public MeiElement {
    public:
        Identifier();
        Identifier(const Identifier &other);
        virtual ~Identifier();

/* include <identifier> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Identifier);
};

/** \brief Information relating to the publication or distribution of a bibliographic item.
 */
class MEI_EXPORT Imprint : public MeiElement {
    public:
        Imprint();
        Imprint(const Imprint &other);
        virtual ~Imprint();

/* include <imprint> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Imprint);
};

/** \brief (incipit) – The opening music and/or words of a musical or textual work.
 */
class MEI_EXPORT Incip : public MeiElement {
    public:
        Incip();
        Incip(const Incip &other);
        virtual ~Incip();

/* include <incip> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Incip);
};

/** \brief (key accidental) – Accidental in a key signature.
 */
class MEI_EXPORT KeyAccid : public MeiElement {
    public:
        KeyAccid();
        KeyAccid(const KeyAccid &other);
        virtual ~KeyAccid();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <keyAccid> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AccidentalMixIn    m_Accidental;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        StaffLocMixIn    m_StaffLoc;
        TypographyMixIn    m_Typography;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(KeyAccid);
};

/** \brief (key signature) – Written key signature.
 */
class MEI_EXPORT KeySig : public MeiElement {
    public:
        KeySig();
        KeySig(const KeySig &other);
        virtual ~KeySig();

/* include <keySig> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        KeySigAnlMixIn    m_KeySigAnl;
        AccidentalMixIn    m_Accidental;
        PitchMixIn    m_Pitch;
        KeySigLogMixIn    m_KeySigLog;
        KeySigVisMixIn    m_KeySigVis;
        ColorMixIn    m_Color;
        VisibilityMixIn    m_Visibility;

    private:
        REGISTER_DECLARATION(KeySig);
};

/** \brief A container for document text that identifies the feature to which it is
 *  attached.
 * 
 *  For a "tool tip" or other generated label, use the label attribute.
 */
class MEI_EXPORT Label : public MeiElement {
    public:
        Label();
        Label(const Label &other);
        virtual ~Label();

/* include <label> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(Label);
};

/** \brief A label on the pages following the first.
 */
class MEI_EXPORT LabelAbbr : public MeiElement {
    public:
        LabelAbbr();
        LabelAbbr(const LabelAbbr &other);
        virtual ~LabelAbbr();

/* include <labelAbbr> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(LabelAbbr);
};

/** \brief An independent stream of events on a staff.
 */
class MEI_EXPORT Layer : public MeiElement {
    public:
        Layer();
        Layer(const Layer &other);
        virtual ~Layer();

/* include <layer> */

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
        REGISTER_DECLARATION(Layer);
};

/** \brief (layer definition) – Container for layer meta-information.
 */
class MEI_EXPORT LayerDef : public MeiElement {
    public:
        LayerDef();
        LayerDef(const LayerDef &other);
        virtual ~LayerDef();

/* include <layerDef> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        MetadataPointingMixIn    m_MetadataPointing;
        NIntegerMixIn    m_NInteger;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        DurationDefaultMixIn    m_DurationDefault;
        BeamingLogMixIn    m_BeamingLog;
        OctaveDefaultMixIn    m_OctaveDefault;
        TranspositionMixIn    m_Transposition;
        BeamingVisMixIn    m_BeamingVis;
        TextStyleMixIn    m_TextStyle;
        VisibilityMixIn    m_Visibility;
        InstrumentIdentMixIn    m_InstrumentIdent;

    private:
        REGISTER_DECLARATION(LayerDef);
};

/** \brief (line beginning) – An empty formatting element that forces text to begin on a
 *  new line.
 */
class MEI_EXPORT Lb : public MeiElement {
    public:
        Lb();
        Lb(const Lb &other);
        virtual ~Lb();

/* include <lb> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(Lb);
};

/** \brief (line group) – May be used for any section of text that is organized as a group
 *  of lines; however, it is most often used for a group of verse lines functioning
 *  as a formal unit, e.g., a stanza, refrain, verse paragraph, etc.
 */
class MEI_EXPORT Lg : public MeiElement {
    public:
        Lg();
        Lg(const Lg &other);
        virtual ~Lg();

/* include <lg> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        StaffIdentMixIn    m_StaffIdent;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        MetadataPointingMixIn    m_MetadataPointing;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Lg);
};

/** \brief Person or organization who is a writer of the text of an opera, oratorio, etc.
 */
class MEI_EXPORT Librettist : public MeiElement {
    public:
        Librettist();
        Librettist(const Librettist &other);
        virtual ~Librettist();

/* include <librettist> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Librettist);
};

/** \brief Person or organization who is a writer of the text of a song.
 */
class MEI_EXPORT Lyricist : public MeiElement {
    public:
        Lyricist();
        Lyricist(const Lyricist &other);
        virtual ~Lyricist();

/* include <lyricist> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Lyricist);
};

/** \brief (musical division) – Contains a subdivision of the body of a musical text.
 */
class MEI_EXPORT Mdiv : public MeiElement {
    public:
        Mdiv();
        Mdiv(const Mdiv &other);
        virtual ~Mdiv();

/* include <mdiv> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        MetadataPointingMixIn    m_MetadataPointing;
        MdivGesMixIn    m_MdivGes;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Mdiv);
};

/** \brief Contains a single MEI-conformant document, consisting of an MEI header and a
 *  musical text, either in isolation or as part of an meiCorpus element.
 */
class MEI_EXPORT Mei : public MeiElement {
    public:
        Mei();
        Mei(const Mei &other);
        virtual ~Mei();

/* include <mei> */

        MeiVersionMixIn    m_MeiVersion;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Mei);
};

/** \brief (monograph level) – Contains bibliographic elements describing an item, for
 *  example, a published book or journal, score, recording, or an unpublished
 *  manuscript.
 */
class MEI_EXPORT Monogr : public MeiElement {
    public:
        Monogr();
        Monogr(const Monogr &other);
        virtual ~Monogr();

/* include <monogr> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;
        PointingMixIn    m_Pointing;
        RecordTypeMixIn    m_RecordType;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Monogr);
};

/** \brief Contains a single musical text of any kind, whether unitary or composite, for
 *  example, an etude, opera, song cycle, symphony, or anthology of piano solos.
 */
class MEI_EXPORT Music : public MeiElement {
    public:
        Music();
        Music(const Music &other);
        virtual ~Music();

/* include <music> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        MeiVersionMixIn    m_MeiVersion;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Music);
};

/** \brief Proper noun or noun phrase.
 */
class MEI_EXPORT Name : public MeiElement {
    public:
        Name();
        Name(const Name &other);
        virtual ~Name();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <name> */

        BasicMixIn    m_Basic;
        BiblMixIn    m_Bibl;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LangMixIn    m_Lang;
        LinkingMixIn    m_Linking;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Name);
};

/** \brief A single pitched event.
 */
class MEI_EXPORT Note : public MeiElement {
    public:
        Note();
        Note(const Note &other);
        virtual ~Note();

/* include <note> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AugmentDotsMixIn    m_AugmentDots;
        ColorationMixIn    m_Coloration;
        CueMixIn    m_Cue;
        DurationLogicalMixIn    m_DurationLogical;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        GracedMixIn    m_Graced;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;
        DurationQualityMixIn    m_DurationQuality;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        NoteHeadsMixIn    m_NoteHeads;
        StaffLocMixIn    m_StaffLoc;
        StemsMixIn    m_Stems;
        StemsCmnMixIn    m_StemsCmn;
        StemsMensuralMixIn    m_StemsMensural;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        XyMixIn    m_Xy;
        BeamSecondaryMixIn    m_BeamSecondary;
        NoteVisMensuralMixIn    m_NoteVisMensural;
        NoteGesMixIn    m_NoteGes;
        AccidentalGesturalMixIn    m_AccidentalGestural;
        ArticulationGesturalMixIn    m_ArticulationGestural;
        DurationGesturalMixIn    m_DurationGestural;
        InstrumentIdentMixIn    m_InstrumentIdent;
        MidiVelocityMixIn    m_MidiVelocity;
        DurationRatioMixIn    m_DurationRatio;
        StringtabMixIn    m_Stringtab;
        AccidentalMixIn    m_Accidental;
        ArticulationMixIn    m_Articulation;
        HarmonicFunctionMixIn    m_HarmonicFunction;
        IntervalMelodicMixIn    m_IntervalMelodic;
        MelodicFunctionMixIn    m_MelodicFunction;
        BeamPresentMixIn    m_BeamPresent;
        GlissPresentMixIn    m_GlissPresent;
        LvPresentMixIn    m_LvPresent;
        OrnamPresentMixIn    m_OrnamPresent;
        SlurPresentMixIn    m_SlurPresent;
        SylTextMixIn    m_SylText;
        TiePresentMixIn    m_TiePresent;
        TupletPresentMixIn    m_TupletPresent;
        FermataPresentMixIn    m_FermataPresent;
        PitchClassMixIn    m_PitchClass;
        SolfaMixIn    m_Solfa;

    private:
        REGISTER_DECLARATION(Note);
};

/** \brief (number) – Numeric information in any form.
 */
class MEI_EXPORT Num : public MeiElement {
    public:
        Num();
        Num(const Num &other);
        virtual ~Num();
        /** \brief Numeric value capturing a measurement or count.
         * 
         *  Can only be interpreted in combination with the unit attribute.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <num> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Num);
};

/** \brief An element indicating an ornament that is not a mordent, turn, or trill.
 */
class MEI_EXPORT Ornam : public MeiElement {
    public:
        Ornam();
        Ornam(const Ornam &other);
        virtual ~Ornam();

/* include <ornam> */

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
        OrnamentAccidMixIn    m_OrnamentAccid;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Ornam);
};

/** \brief (paragraph) – One or more text phrases that form a logical prose passage.
 */
class MEI_EXPORT P : public MeiElement {
    public:
        P();
        P(const P &other);
        virtual ~P();

/* include <p> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MetadataPointingMixIn    m_MetadataPointing;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(P);
};

/** \brief (padding) – An indication of extra visual space between notational elements.
 */
class MEI_EXPORT Pad : public MeiElement {
    public:
        Pad();
        Pad(const Pad &other);
        virtual ~Pad();

/* include <pad> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        WidthMixIn    m_Width;

    private:
        REGISTER_DECLARATION(Pad);
};

/** \brief An alternative visual rendition of the score from the point of view of a
 *  particular performer (or group of performers).
 */
class MEI_EXPORT Part : public MeiElement {
    public:
        Part();
        Part(const Part &other);
        virtual ~Part();

/* include <part> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Part);
};

/** \brief Provides a container for performers' parts.
 */
class MEI_EXPORT Parts : public MeiElement {
    public:
        Parts();
        Parts(const Parts &other);
        virtual ~Parts();

/* include <parts> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Parts);
};

/** \brief (page beginning) – An empty formatting element that forces text to begin on a
 *  new page.
 */
class MEI_EXPORT Pb : public MeiElement {
    public:
        Pb();
        Pb(const Pb &other);
        virtual ~Pb();

/* include <pb> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        SourceMixIn    m_Source;
        AlignmentMixIn    m_Alignment;
        PbVisMixIn    m_PbVis;

    private:
        REGISTER_DECLARATION(Pb);
};

/** \brief (page description) – Contains a brief prose description of the appearance or
 *  description of the content of a physical page.
 */
class MEI_EXPORT PgDesc : public MeiElement {
    public:
        PgDesc();
        PgDesc(const PgDesc &other);
        virtual ~PgDesc();

/* include <pgDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgDesc);
};

/** \brief (page footer) – A running footer on the first page.
 * 
 *  Also, used to temporarily override a running footer on individual pages.
 */
class MEI_EXPORT PgFoot : public MeiElement {
    public:
        PgFoot();
        PgFoot(const PgFoot &other);
        virtual ~PgFoot();
        /** \brief Records horizontal alignment.
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

/* include <pgFoot> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgFoot);
};

/** \brief (page footer 2) – A running footer on the pages following the first.
 */
class MEI_EXPORT PgFoot2 : public MeiElement {
    public:
        PgFoot2();
        PgFoot2(const PgFoot2 &other);
        virtual ~PgFoot2();
        /** \brief Records horizontal alignment.
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

/* include <pgFoot2> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgFoot2);
};

/** \brief (page header) – A running header on the first page.
 * 
 *  Also, used to temporarily override a running header on individual pages.
 */
class MEI_EXPORT PgHead : public MeiElement {
    public:
        PgHead();
        PgHead(const PgHead &other);
        virtual ~PgHead();
        /** \brief Records horizontal alignment.
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

/* include <pgHead> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgHead);
};

/** \brief (page header 2) – A running header on the pages following the first.
 */
class MEI_EXPORT PgHead2 : public MeiElement {
    public:
        PgHead2();
        PgHead2(const PgHead2 &other);
        virtual ~PgHead2();
        /** \brief Records horizontal alignment.
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

/* include <pgHead2> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PgHead2);
};

/** \brief Indication of 1) a "unified melodic idea" or 2) performance technique.
 */
class MEI_EXPORT Phrase : public MeiElement {
    public:
        Phrase();
        Phrase(const Phrase &other);
        virtual ~Phrase();

/* include <phrase> */

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
        REGISTER_DECLARATION(Phrase);
};

/** \brief (physical location) – Groups information about the current physical location of
 *  a bibliographic item, such as the repository in which it is located and its
 *  shelf mark(s), and its previous locations.
 */
class MEI_EXPORT PhysLoc : public MeiElement {
    public:
        PhysLoc();
        PhysLoc(const PhysLoc &other);
        virtual ~PhysLoc();

/* include <physLoc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(PhysLoc);
};

/** \brief (publication place) – Name of the place where a bibliographic item was
 *  published.
 */
class MEI_EXPORT PubPlace : public MeiElement {
    public:
        PubPlace();
        PubPlace(const PubPlace &other);
        virtual ~PubPlace();

/* include <pubPlace> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PubPlace);
};

/** \brief Name of the organization responsible for the publication of a bibliographic
 *  item.
 */
class MEI_EXPORT Publisher : public MeiElement {
    public:
        Publisher();
        Publisher(const Publisher &other);
        virtual ~Publisher();

/* include <publisher> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Publisher);
};

/** \brief The name of the individual(s), institution(s) or organization(s) receiving
 *  correspondence.
 */
class MEI_EXPORT Recipient : public MeiElement {
    public:
        Recipient();
        Recipient(const Recipient &other);
        virtual ~Recipient();

/* include <recipient> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Recipient);
};

/** \brief (related item) – Contains or references another bibliographic item which is
 *  related to the present one.
 */
class MEI_EXPORT RelatedItem : public MeiElement {
    public:
        RelatedItem();
        RelatedItem(const RelatedItem &other);
        virtual ~RelatedItem();
        /** \brief Describes the relationship between the entity identified by the relatedItem
         *  element and the resource described in the parent element, i.e., bibl, source or
         *  relatedItem.
         */
        MeiAttribute* getRel();
        void setRel(std::string _rel);
        bool hasRel();
        void removeRel();

/* include <relatedItem> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(RelatedItem);
};

/** \brief Describes a relationship or linkage amongst entities.
 */
class MEI_EXPORT Relation : public MeiElement {
    public:
        Relation();
        Relation(const Relation &other);
        virtual ~Relation();
        /** \brief Describes the relationship between the entity identified by the relatedItem
         *  element and the resource described in the parent element, i.e., bibl, source or
         *  relatedItem.
         */
        MeiAttribute* getRel();
        void setRel(std::string _rel);
        bool hasRel();
        void removeRel();

/* include <relation> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;
        EvidenceMixIn    m_Evidence;
        PlistMixIn    m_Plist;
        PointingMixIn    m_Pointing;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Relation);
};

/** \brief Gathers relation elements.
 */
class MEI_EXPORT RelationList : public MeiElement {
    public:
        RelationList();
        RelationList(const RelationList &other);
        virtual ~RelationList();

/* include <relationList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(RelationList);
};

/** \brief (render) – A formatting element indicating special visual rendering, e.g., bold
 *  or italicized, of a text word or phrase.
 */
class MEI_EXPORT Rend : public MeiElement {
    public:
        Rend();
        Rend(const Rend &other);
        virtual ~Rend();
        /** \brief A positive value for rotation rotates the text in a counter-clockwise fashion,
         *  while negative values produce clockwise rotation.
         */
        MeiAttribute* getRotation();
        void setRotation(std::string _rotation);
        bool hasRotation();
        void removeRotation();

/* include <rend> */

        ColorMixIn    m_Color;
        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        HorizontalAlignMixIn    m_HorizontalAlign;
        LangMixIn    m_Lang;
        TextRenditionMixIn    m_TextRendition;
        TypographyMixIn    m_Typography;
        VerticalAlignMixIn    m_VerticalAlign;
        WhitespaceMixIn    m_Whitespace;

    private:
        REGISTER_DECLARATION(Rend);
};

/** \brief Institution, agency, or individual which holds a bibliographic item.
 */
class MEI_EXPORT Repository : public MeiElement {
    public:
        Repository();
        Repository(const Repository &other);
        virtual ~Repository();

/* include <repository> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(Repository);
};

/** \brief (responsibility) – A phrase describing the nature of intellectual
 *  responsibility.
 */
class MEI_EXPORT Resp : public MeiElement {
    public:
        Resp();
        Resp(const Resp &other);
        virtual ~Resp();

/* include <resp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Resp);
};

/** \brief (responsibility statement) – Transcription of text that names one or more
 *  individuals, groups, or in rare cases, mechanical processes, responsible for
 *  creation, realization, production, funding, or distribution of the intellectual
 *  or artistic content.
 */
class MEI_EXPORT RespStmt : public MeiElement {
    public:
        RespStmt();
        RespStmt(const RespStmt &other);
        virtual ~RespStmt();

/* include <respStmt> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(RespStmt);
};

/** \brief A non-sounding event found in the source being transcribed.
 */
class MEI_EXPORT Rest : public MeiElement {
    public:
        Rest();
        Rest(const Rest &other);
        virtual ~Rest();

/* include <rest> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AugmentDotsMixIn    m_AugmentDots;
        CueMixIn    m_Cue;
        RestdurationLogicalMixIn    m_RestdurationLogical;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        BeamSecondaryMixIn    m_BeamSecondary;
        RestVisMensuralMixIn    m_RestVisMensural;
        StaffLocMixIn    m_StaffLoc;
        StaffLocPitchedMixIn    m_StaffLocPitched;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;
        DurationRatioMixIn    m_DurationRatio;
        BeamPresentMixIn    m_BeamPresent;
        FermataPresentMixIn    m_FermataPresent;
        TupletPresentMixIn    m_TupletPresent;

    private:
        REGISTER_DECLARATION(Rest);
};

/** \brief Name of a dramatic role, as given in a cast list.
 */
class MEI_EXPORT Role : public MeiElement {
    public:
        Role();
        Role(const Role &other);
        virtual ~Role();

/* include <role> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Role);
};

/** \brief (role description) – Describes a character’s role in a drama.
 */
class MEI_EXPORT RoleDesc : public MeiElement {
    public:
        RoleDesc();
        RoleDesc(const RoleDesc &other);
        virtual ~RoleDesc();

/* include <roleDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(RoleDesc);
};

/** \brief (system beginning) – An empty formatting element that forces musical notation to
 *  begin on a new line.
 */
class MEI_EXPORT Sb : public MeiElement {
    public:
        Sb();
        Sb(const Sb &other);
        virtual ~Sb();

/* include <sb> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;
        AlignmentMixIn    m_Alignment;
        SbVisMixIn    m_SbVis;
        AltSymMixIn    m_AltSym;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(Sb);
};

/** \brief Full score view of the musical content.
 */
class MEI_EXPORT Score : public MeiElement {
    public:
        Score();
        Score(const Score &other);
        virtual ~Score();

/* include <score> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Score);
};

/** \brief (score definition) – Container for score meta-information.
 */
class MEI_EXPORT ScoreDef : public MeiElement {
    public:
        ScoreDef();
        ScoreDef(const ScoreDef &other);
        virtual ~ScoreDef();

/* include <scoreDef> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        CleffingLogMixIn    m_CleffingLog;
        DurationDefaultMixIn    m_DurationDefault;
        KeySigDefaultLogMixIn    m_KeySigDefaultLog;
        MeterSigDefaultLogMixIn    m_MeterSigDefaultLog;
        OctaveDefaultMixIn    m_OctaveDefault;
        TranspositionMixIn    m_Transposition;
        BeamingLogMixIn    m_BeamingLog;
        MensuralLogMixIn    m_MensuralLog;
        MensuralSharedMixIn    m_MensuralShared;
        ScoreDefVisMixIn    m_ScoreDefVis;
        BarringMixIn    m_Barring;
        CleffingVisMixIn    m_CleffingVis;
        DistancesMixIn    m_Distances;
        EndingsMixIn    m_Endings;
        KeySigDefaultVisMixIn    m_KeySigDefaultVis;
        LyricStyleMixIn    m_LyricStyle;
        MeasureNumbersMixIn    m_MeasureNumbers;
        MeterSigDefaultVisMixIn    m_MeterSigDefaultVis;
        MultinumMeasuresMixIn    m_MultinumMeasures;
        NotationStyleMixIn    m_NotationStyle;
        OneLineStaffMixIn    m_OneLineStaff;
        OptimizationMixIn    m_Optimization;
        PagesMixIn    m_Pages;
        SpacingMixIn    m_Spacing;
        StaffItemsMixIn    m_StaffItems;
        SystemsMixIn    m_Systems;
        TextStyleMixIn    m_TextStyle;
        ScoreDefVisCmnMixIn    m_ScoreDefVisCmn;
        BeamingVisMixIn    m_BeamingVis;
        PianoPedalsMixIn    m_PianoPedals;
        RehearsalMixIn    m_Rehearsal;
        SlurRendMixIn    m_SlurRend;
        TieRendMixIn    m_TieRend;
        MensuralVisMixIn    m_MensuralVis;
        ScoreDefGesMixIn    m_ScoreDefGes;
        ChannelizedMixIn    m_Channelized;
        TimeBaseMixIn    m_TimeBase;
        MidiTempoMixIn    m_MidiTempo;
        MmTempoMixIn    m_MmTempo;
        KeySigDefaultAnlMixIn    m_KeySigDefaultAnl;

    private:
        REGISTER_DECLARATION(ScoreDef);
};

/** \brief Segment of music data.
 */
class MEI_EXPORT Section : public MeiElement {
    public:
        Section();
        Section(const Section &other);
        virtual ~Section();

/* include <section> */

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
        SectionGesMixIn    m_SectionGes;
        AlignmentMixIn    m_Alignment;
        SectionVisMixIn    m_SectionVis;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Section);
};

/** \brief Contains information about the serial publication in which a bibliographic item
 *  has appeared.
 */
class MEI_EXPORT Series : public MeiElement {
    public:
        Series();
        Series(const Series &other);
        virtual ~Series();

/* include <series> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Series);
};

/** \brief A placeholder used to fill an incomplete measure, layer, etc.
 * 
 *  most often so that the combined duration of the events equals the number of
 *  beats in the measure.
 */
class MEI_EXPORT Space : public MeiElement {
    public:
        Space();
        Space(const Space &other);
        virtual ~Space();

/* include <space> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DurationQualityMixIn    m_DurationQuality;
        AugmentDotsMixIn    m_AugmentDots;
        DurationLogicalMixIn    m_DurationLogical;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        StaffIdentMixIn    m_StaffIdent;
        TimestampGesturalMixIn    m_TimestampGestural;
        TimestampLogicalMixIn    m_TimestampLogical;
        SpaceVisMixIn    m_SpaceVis;
        CutoutMixIn    m_Cutout;
        DurationGesturalMixIn    m_DurationGestural;
        BeamPresentMixIn    m_BeamPresent;
        FermataPresentMixIn    m_FermataPresent;
        TupletPresentMixIn    m_TupletPresent;

    private:
        REGISTER_DECLARATION(Space);
};

/** \brief Contains a specialized form of heading or label, giving the name of one or more
 *  speakers in a dramatic text or fragment.
 */
class MEI_EXPORT Speaker : public MeiElement {
    public:
        Speaker();
        Speaker(const Speaker &other);
        virtual ~Speaker();

/* include <speaker> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Speaker);
};

/** \brief Names of sponsoring individuals, organizations or institutions.
 * 
 *  Sponsors give their intellectual authority to a project; they are to be
 *  distinguished from funders, who provide the funding but do not necessarily take
 *  intellectual responsibility.
 */
class MEI_EXPORT Sponsor : public MeiElement {
    public:
        Sponsor();
        Sponsor(const Sponsor &other);
        virtual ~Sponsor();

/* include <sponsor> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Sponsor);
};

/** \brief (stacked text) – An inline table with a single column.
 */
class MEI_EXPORT Stack : public MeiElement {
    public:
        Stack();
        Stack(const Stack &other);
        virtual ~Stack();
        /** \brief Indicates the delimiter used to mark the portions of text that are to be
         *  stacked.
         */
        MeiAttribute* getDelim();
        void setDelim(std::string _delim);
        bool hasDelim();
        void removeDelim();
        /** \brief Specifies how the stacked text components should be aligned.
         */
        MeiAttribute* getAlign();
        void setAlign(std::string _align);
        bool hasAlign();
        void removeAlign();

/* include <stack> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Stack);
};

/** \brief A group of equidistant horizontal lines on which notes are placed in order to
 *  represent pitch or a grouping element for individual 'strands' of notes, rests,
 *  etc.
 * 
 *  that may or may not actually be rendered on staff lines; that is, both
 *  diastematic and non-diastematic signs.
 */
class MEI_EXPORT Staff : public MeiElement {
    public:
        Staff();
        Staff(const Staff &other);
        virtual ~Staff();

/* include <staff> */

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
        REGISTER_DECLARATION(Staff);
};

/** \brief (staff definition) – Container for staff meta-information.
 */
class MEI_EXPORT StaffDef : public MeiElement {
    public:
        StaffDef();
        StaffDef(const StaffDef &other);
        virtual ~StaffDef();

/* include <staffDef> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        MetadataPointingMixIn    m_MetadataPointing;
        NIntegerMixIn    m_NInteger;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        StaffDefLogMixIn    m_StaffDefLog;
        CleffingLogMixIn    m_CleffingLog;
        DurationDefaultMixIn    m_DurationDefault;
        KeySigDefaultLogMixIn    m_KeySigDefaultLog;
        MeterSigDefaultLogMixIn    m_MeterSigDefaultLog;
        NotationTypeMixIn    m_NotationType;
        OctaveDefaultMixIn    m_OctaveDefault;
        TranspositionMixIn    m_Transposition;
        BeamingLogMixIn    m_BeamingLog;
        MensuralLogMixIn    m_MensuralLog;
        MensuralSharedMixIn    m_MensuralShared;
        StaffDefVisMixIn    m_StaffDefVis;
        BarringMixIn    m_Barring;
        CleffingVisMixIn    m_CleffingVis;
        DistancesMixIn    m_Distances;
        KeySigDefaultVisMixIn    m_KeySigDefaultVis;
        LyricStyleMixIn    m_LyricStyle;
        MeterSigDefaultVisMixIn    m_MeterSigDefaultVis;
        MultinumMeasuresMixIn    m_MultinumMeasures;
        NotationStyleMixIn    m_NotationStyle;
        OneLineStaffMixIn    m_OneLineStaff;
        ScalableMixIn    m_Scalable;
        StaffItemsMixIn    m_StaffItems;
        TextStyleMixIn    m_TextStyle;
        VisibilityMixIn    m_Visibility;
        BeamingVisMixIn    m_BeamingVis;
        PianoPedalsMixIn    m_PianoPedals;
        RehearsalMixIn    m_Rehearsal;
        SlurRendMixIn    m_SlurRend;
        TieRendMixIn    m_TieRend;
        MensuralVisMixIn    m_MensuralVis;
        InstrumentIdentMixIn    m_InstrumentIdent;
        StringtabTuningMixIn    m_StringtabTuning;
        TimeBaseMixIn    m_TimeBase;
        KeySigDefaultAnlMixIn    m_KeySigDefaultAnl;

    private:
        REGISTER_DECLARATION(StaffDef);
};

/** \brief (staff group) – A group of bracketed or braced staves.
 */
class MEI_EXPORT StaffGrp : public MeiElement {
    public:
        StaffGrp();
        StaffGrp(const StaffGrp &other);
        virtual ~StaffGrp();

/* include <staffGrp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        MetadataPointingMixIn    m_MetadataPointing;
        StaffGrpVisMixIn    m_StaffGrpVis;
        BarringMixIn    m_Barring;
        StaffGroupingSymMixIn    m_StaffGroupingSym;
        VisibilityMixIn    m_Visibility;
        InstrumentIdentMixIn    m_InstrumentIdent;

    private:
        REGISTER_DECLARATION(StaffGrp);
};

/** \brief (syllable) – Individual lyric syllable.
 */
class MEI_EXPORT Syl : public MeiElement {
    public:
        Syl();
        Syl(const Syl &other);
        virtual ~Syl();

/* include <syl> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        SylLogMixIn    m_SylLog;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;
        HorizontalAlignMixIn    m_HorizontalAlign;

    private:
        REGISTER_DECLARATION(Syl);
};

/** \brief A reference to a previously defined symbol.
 */
class MEI_EXPORT Symbol : public MeiElement {
    public:
        Symbol();
        Symbol(const Symbol &other);
        virtual ~Symbol();

/* include <symbol> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        StartIdMixIn    m_StartId;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        ExtSymMixIn    m_ExtSym;
        ScalableMixIn    m_Scalable;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Symbol);
};

/** \brief Text and symbols descriptive of tempo, mood, or style, e.g., "allarg.", "a
 *  tempo", "cantabile", "Moderato", "♩=60", "Moderato ♩ =60").
 */
class MEI_EXPORT Tempo : public MeiElement {
    public:
        Tempo();
        Tempo(const Tempo &other);
        virtual ~Tempo();

/* include <tempo> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        TempoLogMixIn    m_TempoLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        MmTempoMixIn    m_MmTempo;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VerticalGroupMixIn    m_VerticalGroup;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        XyMixIn    m_Xy;
        MidiTempoMixIn    m_MidiTempo;

    private:
        REGISTER_DECLARATION(Tempo);
};

/** \brief Keyword or phrase which describes a resource.
 */
class MEI_EXPORT Term : public MeiElement {
    public:
        Term();
        Term(const Term &other);
        virtual ~Term();

/* include <term> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Term);
};

/** \brief (text language) – Identifies the languages and writing systems within the work
 *  described by a bibliographic description, not the language of the description.
 */
class MEI_EXPORT TextLang : public MeiElement {
    public:
        TextLang();
        TextLang(const TextLang &other);
        virtual ~TextLang();
        /** \brief (main language) supplies a code which identifies the chief language used in the
         *  bibliographic work.
         */
        MeiAttribute* getLangMain();
        void setLangMain(std::string _langmain);
        bool hasLangMain();
        void removeLangMain();
        /** \brief (other languages) one or more codes identifying any other languages used in the
         *  bibliographic work.
         */
        MeiAttribute* getLangOther();
        void setLangOther(std::string _langother);
        bool hasLangOther();
        void removeLangOther();

/* include <textLang> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(TextLang);
};

/** \brief Title of a bibliographic entity.
 */
class MEI_EXPORT Title : public MeiElement {
    public:
        Title();
        Title(const Title &other);
        virtual ~Title();
        /** \brief Indicates the nesting level of staff grouping symbols.
         */
        MeiAttribute* getLevel();
        void setLevel(std::string _level);
        bool hasLevel();
        void removeLevel();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <title> */

        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        BasicMixIn    m_Basic;
        BiblMixIn    m_Bibl;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        FilingMixIn    m_Filing;
        LabelledMixIn    m_Labelled;
        LangMixIn    m_Lang;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Title);
};

/** \brief Contains a transcription of the title page of a text.
 */
class MEI_EXPORT TitlePage : public MeiElement {
    public:
        TitlePage();
        TitlePage(const TitlePage &other);
        virtual ~TitlePage();

/* include <titlePage> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(TitlePage);
};

/** \brief Contains a subsection or division of the title of a bibliographic entity.
 */
class MEI_EXPORT TitlePart : public MeiElement {
    public:
        TitlePart();
        TitlePart(const TitlePart &other);
        virtual ~TitlePart();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <titlePart> */

        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        BasicMixIn    m_Basic;
        BiblMixIn    m_Bibl;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        FilingMixIn    m_Filing;
        LabelledMixIn    m_Labelled;
        LangMixIn    m_Lang;
        LinkingMixIn    m_Linking;
        NIntegerMixIn    m_NInteger;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(TitlePart);
};

/** \brief Description of the horizontal size of an object.
 */
class MEI_EXPORT Width : public MeiElement {
    public:
        Width();
        Width(const Width &other);
        virtual ~Width();

/* include <width> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        QuantityMixIn    m_Quantity;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Width);
};
} // namespace mei
#endif // SHARED_H_
