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

#ifndef MSDESC_H_
#define MSDESC_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "facsimilemixins.h"
#include "sharedmixins.h"
#include <string>


namespace mei {
/** \brief Holds a description of any additional material bound with an item, such as non-
 *  contemporaneous documents or fragments.
 */
class MEI_EXPORT AccMat : public MeiElement {
    public:
        AccMat();
        AccMat(const AccMat &other);
        virtual ~AccMat();

/* include <accMat> */

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
        REGISTER_DECLARATION(AccMat);
};

/** \brief (addition description) – Provides a description of significant additions found
 *  within an item, such as marginalia or other annotations.
 */
class MEI_EXPORT AddDesc : public MeiElement {
    public:
        AddDesc();
        AddDesc(const AddDesc &other);
        virtual ~AddDesc();

/* include <addDesc> */

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
        REGISTER_DECLARATION(AddDesc);
};

/** \brief (binding) – Contains a description of one binding, i.e., type of covering,
 *  boards, etc.
 * 
 *  applied to an item.
 */
class MEI_EXPORT Binding : public MeiElement {
    public:
        Binding();
        Binding(const Binding &other);
        virtual ~Binding();
        /** \brief 
         */
        MeiAttribute* getContemporary();
        void setContemporary(std::string _contemporary);
        bool hasContemporary();
        void removeContemporary();

/* include <binding> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Binding);
};

/** \brief (binding description) – Describes the present and former bindings of an item.
 */
class MEI_EXPORT BindingDesc : public MeiElement {
    public:
        BindingDesc();
        BindingDesc(const BindingDesc &other);
        virtual ~BindingDesc();

/* include <bindingDesc> */

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
        REGISTER_DECLARATION(BindingDesc);
};

/** \brief Describes the system used to ensure correct ordering of the quires making up an
 *  item, typically by means of annotations at the foot of the page.
 */
class MEI_EXPORT Catchwords : public MeiElement {
    public:
        Catchwords();
        Catchwords(const Catchwords &other);
        virtual ~Catchwords();

/* include <catchwords> */

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
        REGISTER_DECLARATION(Catchwords);
};

/** \brief Records a description of how the leaves or bifolia of an item are physically
 *  arranged.
 */
class MEI_EXPORT Collation : public MeiElement {
    public:
        Collation();
        Collation(const Collation &other);
        virtual ~Collation();

/* include <collation> */

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
        REGISTER_DECLARATION(Collation);
};

/** \brief Contains a statement providing information regarding the date, place, agency, or
 *  reason for production of the item.
 */
class MEI_EXPORT Colophon : public MeiElement {
    public:
        Colophon();
        Colophon(const Colophon &other);
        virtual ~Colophon();

/* include <colophon> */

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
        REGISTER_DECLARATION(Colophon);
};

/** \brief (decoration description) – Contains a description of the decoration of an item.
 */
class MEI_EXPORT DecoDesc : public MeiElement {
    public:
        DecoDesc();
        DecoDesc(const DecoDesc &other);
        virtual ~DecoDesc();

/* include <decoDesc> */

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
        REGISTER_DECLARATION(DecoDesc);
};

/** \brief (decoration note) – Contains a description of one or more decorative features of
 *  an item.
 */
class MEI_EXPORT DecoNote : public MeiElement {
    public:
        DecoNote();
        DecoNote(const DecoNote &other);
        virtual ~DecoNote();

/* include <decoNote> */

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
        REGISTER_DECLARATION(DecoNote);
};

/** \brief Contains the explicit of a manuscript item; that is, the closing words of the
 *  text proper, exclusive of any rubric or colophon which might follow it.
 */
class MEI_EXPORT Explicit : public MeiElement {
    public:
        Explicit();
        Explicit(const Explicit &other);
        virtual ~Explicit();

/* include <explicit> */

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
        REGISTER_DECLARATION(Explicit);
};

/** \brief Describes the numbering system or systems used to count the leaves or pages in a
 *  codex.
 */
class MEI_EXPORT Foliation : public MeiElement {
    public:
        Foliation();
        Foliation(const Foliation &other);
        virtual ~Foliation();

/* include <foliation> */

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
        REGISTER_DECLARATION(Foliation);
};

/** \brief Contains a heraldic formula or phrase, typically found as part of a blazon, coat
 *  of arms, etc.
 */
class MEI_EXPORT Heraldry : public MeiElement {
    public:
        Heraldry();
        Heraldry(const Heraldry &other);
        virtual ~Heraldry();

/* include <heraldry> */

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
        REGISTER_DECLARATION(Heraldry);
};

/** \brief Describes how text is laid out on the page, including information about any
 *  ruling, pricking, or other evidence of page-preparation techniques.
 */
class MEI_EXPORT Layout : public MeiElement {
    public:
        Layout();
        Layout(const Layout &other);
        virtual ~Layout();
        /** \brief Specifies the number of columns per page.
         */
        MeiAttribute* getCols();
        void setCols(std::string _cols);
        bool hasCols();
        void removeCols();
        /** \brief Specifies the number of ruled text lines per column.
         */
        MeiAttribute* getRuledlines();
        void setRuledlines(std::string _ruledlines);
        bool hasRuledlines();
        void removeRuledlines();
        /** \brief Specifies the number of written text lines per column.
         */
        MeiAttribute* getWrittenlines();
        void setWrittenlines(std::string _writtenlines);
        bool hasWrittenlines();
        void removeWrittenlines();
        /** \brief Specifies the number of ruled staves per column.
         */
        MeiAttribute* getRuledstaves();
        void setRuledstaves(std::string _ruledstaves);
        bool hasRuledstaves();
        void removeRuledstaves();
        /** \brief Specifies the number of written staves per column.
         */
        MeiAttribute* getWrittenstaves();
        void setWrittenstaves(std::string _writtenstaves);
        bool hasWrittenstaves();
        void removeWrittenstaves();

/* include <layout> */

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
        REGISTER_DECLARATION(Layout);
};

/** \brief (layout description) – Collects layout descriptions.
 */
class MEI_EXPORT LayoutDesc : public MeiElement {
    public:
        LayoutDesc();
        LayoutDesc(const LayoutDesc &other);
        virtual ~LayoutDesc();

/* include <layoutDesc> */

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
        REGISTER_DECLARATION(LayoutDesc);
};

/** \brief Defines a location within a manuscript or manuscript component, usually as a
 *  (possibly discontinuous) sequence of folio references.
 */
class MEI_EXPORT Locus : public MeiElement {
    public:
        Locus();
        Locus(const Locus &other);
        virtual ~Locus();
        /** \brief Identifies the foliation scheme in terms of which the location is being
         *  specified by pointing to some foliation element defining it, or to some other
         *  equivalent resource.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();
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

/* include <locus> */

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
        REGISTER_DECLARATION(Locus);
};

/** \brief (locus group) – Groups locations which together form a distinct but
 *  discontinuous item within a manuscript or manuscript part, according to a
 *  specific foliation.
 */
class MEI_EXPORT LocusGrp : public MeiElement {
    public:
        LocusGrp();
        LocusGrp(const LocusGrp &other);
        virtual ~LocusGrp();
        /** \brief Identifies the foliation scheme in terms of which the location is being
         *  specified by pointing to some foliation element defining it, or to some other
         *  equivalent resource.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <locusGrp> */

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
        REGISTER_DECLARATION(LocusGrp);
};

/** \brief Contains a string of words through which a manuscript signals the beginning or
 *  end of a text division, often with an assertion as to its author and title,
 *  which is in some way set off from the text itself, usually in red ink, or by use
 *  of different size or type of script, or some other such visual device.
 */
class MEI_EXPORT Rubric : public MeiElement {
    public:
        Rubric();
        Rubric(const Rubric &other);
        virtual ~Rubric();
        /** \brief Describes the function of the bracketed event sequence.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <rubric> */

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
        REGISTER_DECLARATION(Rubric);
};

/** \brief (script description) – Contains a description of the letters or characters used
 *  in an autographic item.
 */
class MEI_EXPORT ScriptDesc : public MeiElement {
    public:
        ScriptDesc();
        ScriptDesc(const ScriptDesc &other);
        virtual ~ScriptDesc();

/* include <scriptDesc> */

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
        REGISTER_DECLARATION(ScriptDesc);
};

/** \brief (script note) – Describes a particular script distinguished within the
 *  description of an autographic item.
 */
class MEI_EXPORT ScriptNote : public MeiElement {
    public:
        ScriptNote();
        ScriptNote(const ScriptNote &other);
        virtual ~ScriptNote();

/* include <scriptNote> */

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
        REGISTER_DECLARATION(ScriptNote);
};

/** \brief A single seal or similar attachment.
 */
class MEI_EXPORT Seal : public MeiElement {
    public:
        Seal();
        Seal(const Seal &other);
        virtual ~Seal();
        /** \brief 
         */
        MeiAttribute* getContemporary();
        void setContemporary(std::string _contemporary);
        bool hasContemporary();
        void removeContemporary();

/* include <seal> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Seal);
};

/** \brief (seal description) – Describes the seals or similar external attachments applied
 *  to an item.
 */
class MEI_EXPORT SealDesc : public MeiElement {
    public:
        SealDesc();
        SealDesc(const SealDesc &other);
        virtual ~SealDesc();

/* include <sealDesc> */

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
        REGISTER_DECLARATION(SealDesc);
};

/** \brief (second folio) – Marks the word or words taken from a fixed point in a codex
 *  (typically the beginning of the second leaf) in order to provide a unique
 *  identifier for the item.
 */
class MEI_EXPORT SecFolio : public MeiElement {
    public:
        SecFolio();
        SecFolio(const SecFolio &other);
        virtual ~SecFolio();

/* include <secFolio> */

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
        REGISTER_DECLARATION(SecFolio);
};

/** \brief Provides a description of the leaf or quire signatures found within a codex.
 */
class MEI_EXPORT Signatures : public MeiElement {
    public:
        Signatures();
        Signatures(const Signatures &other);
        virtual ~Signatures();

/* include <signatures> */

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
        REGISTER_DECLARATION(Signatures);
};

/** \brief Contains a word or phrase describing an official mark indicating ownership,
 *  genuineness, validity, etc.
 */
class MEI_EXPORT Stamp : public MeiElement {
    public:
        Stamp();
        Stamp(const Stamp &other);
        virtual ~Stamp();

/* include <stamp> */

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
        REGISTER_DECLARATION(Stamp);
};

/** \brief Provides a description of the physical support material of a written item.
 */
class MEI_EXPORT Support : public MeiElement {
    public:
        Support();
        Support(const Support &other);
        virtual ~Support();

/* include <support> */

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
        REGISTER_DECLARATION(Support);
};

/** \brief (support description) – Groups elements describing the physical support material
 *  of an item.
 */
class MEI_EXPORT SupportDesc : public MeiElement {
    public:
        SupportDesc();
        SupportDesc(const SupportDesc &other);
        virtual ~SupportDesc();
        /** \brief Short, project-defined name for the material composing the majority of the
         *  support.
         */
        MeiAttribute* getMaterial();
        void setMaterial(std::string _material);
        bool hasMaterial();
        void removeMaterial();

/* include <supportDesc> */

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
        REGISTER_DECLARATION(SupportDesc);
};

/** \brief (type description) – Contains a description of the typefaces or other aspects of
 *  the printing of a printed source.
 */
class MEI_EXPORT TypeDesc : public MeiElement {
    public:
        TypeDesc();
        TypeDesc(const TypeDesc &other);
        virtual ~TypeDesc();

/* include <typeDesc> */

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
        REGISTER_DECLARATION(TypeDesc);
};

/** \brief (type note) – Describes a particular font or other significant typographic
 *  feature of a printed resource.
 */
class MEI_EXPORT TypeNote : public MeiElement {
    public:
        TypeNote();
        TypeNote(const TypeNote &other);
        virtual ~TypeNote();

/* include <typeNote> */

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
        REGISTER_DECLARATION(TypeNote);
};
} // namespace mei
#endif // MSDESC_H_
