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

#ifndef EDITTRANS_H_
#define EDITTRANS_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "edittransmixins.h"
#include "externalsymbolsmixins.h"
#include "facsimilemixins.h"
#include "geneticmixins.h"
#include "gesturalmixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"
#include <string>


namespace mei {
/** \brief (abbreviation) – A generic element for 1) a shortened form of a word, including
 *  an acronym or 2) a shorthand notation.
 */
class MEI_EXPORT Abbr : public MeiElement {
    public:
        Abbr();
        Abbr(const Abbr &other);
        virtual ~Abbr();
        /** \brief Records the expansion of a text abbreviation.
         */
        MeiAttribute* getExpan();
        void setExpan(std::string _expan);
        bool hasExpan();
        void removeExpan();

/* include <abbr> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Abbr);
};

/** \brief (addition) – Marks an addition to the text.
 */
class MEI_EXPORT Add : public MeiElement {
    public:
        Add();
        Add(const Add &other);
        virtual ~Add();
        /** \brief Records the placement of the beam relative to the events it affects.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

/* include <add> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        LangMixIn    m_Lang;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Add);
};

/** \brief Groups a number of alternative encodings for the same point in a text.
 */
class MEI_EXPORT Choice : public MeiElement {
    public:
        Choice();
        Choice(const Choice &other);
        virtual ~Choice();

/* include <choice> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(Choice);
};

/** \brief (correction) – Contains the correct form of an apparent erroneous passage.
 */
class MEI_EXPORT Corr : public MeiElement {
    public:
        Corr();
        Corr(const Corr &other);
        virtual ~Corr();

/* include <corr> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        LangMixIn    m_Lang;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Corr);
};

/** \brief (copy/colla parte mark) – A verbal or graphical indication to copy musical
 *  material written elsewhere.
 */
class MEI_EXPORT CpMark : public MeiElement {
    public:
        CpMark();
        CpMark(const CpMark &other);
        virtual ~CpMark();

/* include <cpMark> */

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
        OriginTimestampLogicalMixIn    m_OriginTimestampLogical;
        OriginStaffIdentMixIn    m_OriginStaffIdent;
        OriginLayerIdentMixIn    m_OriginLayerIdent;
        OriginStartEndIdMixIn    m_OriginStartEndId;
        OctaveDisplacementMixIn    m_OctaveDisplacement;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
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
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(CpMark);
};

/** \brief Contains an area of damage to the physical medium.
 */
class MEI_EXPORT Damage : public MeiElement {
    public:
        Damage();
        Damage(const Damage &other);
        virtual ~Damage();
        /** \brief Records the degree of damage.
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();

/* include <damage> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AgentIdentMixIn    m_AgentIdent;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        HandIdentMixIn    m_HandIdent;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Damage);
};

/** \brief (deletion) – Contains information deleted, marked as deleted, or otherwise
 *  indicated as superfluous or spurious in the copy text by an author, scribe,
 *  annotator, or corrector.
 */
class MEI_EXPORT Del : public MeiElement {
    public:
        Del();
        Del(const Del &other);
        virtual ~Del();

/* include <del> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        TextRenditionMixIn    m_TextRendition;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Del);
};

/** \brief (expansion) – Contains the expansion of an abbreviation.
 */
class MEI_EXPORT Expan : public MeiElement {
    public:
        Expan();
        Expan(const Expan &other);
        virtual ~Expan();
        /** \brief Captures the abbreviated form of the text.
         */
        MeiAttribute* getAbbr();
        void setAbbr(std::string _abbr);
        bool hasAbbr();
        void removeAbbr();

/* include <expan> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Expan);
};

/** \brief Indicates a point where material has been omitted in a transcription, whether as
 *  part of sampling practice or for editorial reasons described in the MEI header.
 */
class MEI_EXPORT Gap : public MeiElement {
    public:
        Gap();
        Gap(const Gap &other);
        virtual ~Gap();

/* include <gap> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        HandIdentMixIn    m_HandIdent;
        ReasonIdentMixIn    m_ReasonIdent;

    private:
        REGISTER_DECLARATION(Gap);
};

/** \brief Marks the beginning of a passage written in a new hand, or of a change in the
 *  scribe, writing style, ink or character of the document hand.
 */
class MEI_EXPORT HandShift : public MeiElement {
    public:
        HandShift();
        HandShift(const HandShift &other);
        virtual ~HandShift();
        /** \brief Describes the character of the new hand.
         */
        MeiAttribute* getCharacter();
        void setCharacter(std::string _character);
        bool hasCharacter();
        void removeCharacter();
        /** \brief Identifies the new hand.
         * 
         *  The value must contain the ID of a hand element given elsewhere in the document.
         */
        MeiAttribute* getNew();
        void setNew(std::string _new);
        bool hasNew();
        void removeNew();
        /** \brief Identifies the old hand.
         * 
         *  The value must contain the ID of a hand element given elsewhere in the document.
         */
        MeiAttribute* getOld();
        void setOld(std::string _old);
        bool hasOld();
        void removeOld();

/* include <handShift> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        MediumMixIn    m_Medium;

    private:
        REGISTER_DECLARATION(HandShift);
};

/** \brief A graphical or textual statement with additional / explanatory information about
 *  the musical text.
 * 
 *  The textual consequences of this intervention are encoded independently via
 *  other means; that is, with elements such as <add>, <del>, etc.
 */
class MEI_EXPORT MetaMark : public MeiElement {
    public:
        MetaMark();
        MetaMark(const MetaMark &other);
        virtual ~MetaMark();
        /** \brief Describes the purpose of the metaMark.
         */
        MeiAttribute* getFunction();
        void setFunction(std::string _function);
        bool hasFunction();
        void removeFunction();

/* include <metaMark> */

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
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        DurationGesturalMixIn    m_DurationGestural;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(MetaMark);
};

/** \brief (original) – Contains material which is marked as following the original, rather
 *  than being normalized or corrected.
 */
class MEI_EXPORT Orig : public MeiElement {
    public:
        Orig();
        Orig(const Orig &other);
        virtual ~Orig();

/* include <orig> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Orig);
};

/** \brief (regularization) – Contains material which has been regularized or normalized in
 *  some sense.
 */
class MEI_EXPORT Reg : public MeiElement {
    public:
        Reg();
        Reg(const Reg &other);
        virtual ~Reg();

/* include <reg> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Reg);
};

/** \brief Indicates restoration of material to an earlier state by cancellation of an
 *  editorial or authorial marking or instruction.
 */
class MEI_EXPORT Restore : public MeiElement {
    public:
        Restore();
        Restore(const Restore &other);
        virtual ~Restore();
        /** \brief Provides a description of the means of restoration, stet or strike-down, for
         *  example.
         */
        MeiAttribute* getDesc();
        void setDesc(std::string _desc);
        bool hasDesc();
        void removeDesc();

/* include <restore> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Restore);
};

/** \brief Contains apparently incorrect or inaccurate material.
 */
class MEI_EXPORT Sic : public MeiElement {
    public:
        Sic();
        Sic(const Sic &other);
        virtual ~Sic();

/* include <sic> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Sic);
};

/** \brief (substitution) – Groups transcriptional elements when the combination is to be
 *  regarded as a single intervention in the text.
 */
class MEI_EXPORT Subst : public MeiElement {
    public:
        Subst();
        Subst(const Subst &other);
        virtual ~Subst();

/* include <subst> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;

    private:
        REGISTER_DECLARATION(Subst);
};

/** \brief Contains material supplied by the transcriber or editor for any reason.
 */
class MEI_EXPORT Supplied : public MeiElement {
    public:
        Supplied();
        Supplied(const Supplied &other);
        virtual ~Supplied();

/* include <supplied> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AgentIdentMixIn    m_AgentIdent;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        ReasonIdentMixIn    m_ReasonIdent;

    private:
        REGISTER_DECLARATION(Supplied);
};

/** \brief Contains material that cannot be transcribed with certainty because it is
 *  illegible or inaudible in the source.
 */
class MEI_EXPORT Unclear : public MeiElement {
    public:
        Unclear();
        Unclear(const Unclear &other);
        virtual ~Unclear();

/* include <unclear> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AgentIdentMixIn    m_AgentIdent;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        ExtentMixIn    m_Extent;
        MeasurementMixIn    m_Measurement;
        RangingMixIn    m_Ranging;
        FacsimileMixIn    m_Facsimile;
        HandIdentMixIn    m_HandIdent;
        LangMixIn    m_Lang;
        ReasonIdentMixIn    m_ReasonIdent;

    private:
        REGISTER_DECLARATION(Unclear);
};
} // namespace mei
#endif // EDITTRANS_H_
