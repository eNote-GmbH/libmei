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

#ifndef HEADER_H_
#define HEADER_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "externalsymbolsmixins.h"
#include "facsimilemixins.h"
#include "geneticmixins.h"
#include "headermixins.h"
#include "mensuralmixins.h"
#include "msdescmixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"
#include <string>


namespace mei {
/** \brief (access restriction) – Describes the conditions that affect the accessibility of
 *  material.
 */
class MEI_EXPORT AccessRestrict : public MeiElement {
    public:
        AccessRestrict();
        AccessRestrict(const AccessRestrict &other);
        virtual ~AccessRestrict();

/* include <accessRestrict> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(AccessRestrict);
};

/** \brief Records information concerning the process by which an item was acquired by the
 *  holding institution.
 */
class MEI_EXPORT Acquisition : public MeiElement {
    public:
        Acquisition();
        Acquisition(const Acquisition &other);
        virtual ~Acquisition();

/* include <acquisition> */

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
        REGISTER_DECLARATION(Acquisition);
};

/** \brief (alternative identifier) – May contain a bibliographic identifier that does not
 *  fit within the meiHead element’s id attribute, for example because the
 *  identifier does not fit the definition of an XML id or because multiple
 *  identifiers are needed.
 */
class MEI_EXPORT AltId : public MeiElement {
    public:
        AltId();
        AltId(const AltId &other);
        virtual ~AltId();

/* include <altId> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(AltId);
};

/** \brief (application information) – Groups information about applications which have
 *  acted upon the MEI file.
 */
class MEI_EXPORT AppInfo : public MeiElement {
    public:
        AppInfo();
        AppInfo(const AppInfo &other);
        virtual ~AppInfo();

/* include <appInfo> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(AppInfo);
};

/** \brief Provides information about an application which has acted upon the current
 *  document.
 */
class MEI_EXPORT Application : public MeiElement {
    public:
        Application();
        Application(const Application &other);
        virtual ~Application();
        /** \brief Supplies a version number for an application, independent of its identifier or
         *  display name.
         */
        MeiAttribute* getVersion();
        void setVersion(std::string _version);
        bool hasVersion();
        void removeVersion();

/* include <application> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        DatableMixIn    m_Datable;

    private:
        REGISTER_DECLARATION(Application);
};

/** \brief Documents the usage of a specific attribute of the element.
 */
class MEI_EXPORT AttUsage : public MeiElement {
    public:
        AttUsage();
        AttUsage(const AttUsage &other);
        virtual ~AttUsage();
        /** \brief Name of the attribute.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief Circumstances in which the element appears, an XPath expression.
         */
        MeiAttribute* getContext();
        void setContext(std::string _context);
        bool hasContext();
        void removeContext();

/* include <attUsage> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(AttUsage);
};

/** \brief Defines the class of user for which the work is intended, as defined by age
 *  group (e.g., children, young adults, adults, etc.), educational level (e.g.,
 *  primary, secondary, etc.), or other categorization.
 */
class MEI_EXPORT Audience : public MeiElement {
    public:
        Audience();
        Audience(const Audience &other);
        virtual ~Audience();

/* include <audience> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Audience);
};

/** \brief Groups elements that describe the availability of and access to a bibliographic
 *  item, including an MEI-encoded document.
 */
class MEI_EXPORT Availability : public MeiElement {
    public:
        Availability();
        Availability(const Availability &other);
        virtual ~Availability();

/* include <availability> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;

    private:
        REGISTER_DECLARATION(Availability);
};

/** \brief Describes a folded sheet of paper.
 */
class MEI_EXPORT Bifolium : public MeiElement {
    public:
        Bifolium();
        Bifolium(const Bifolium &other);
        virtual ~Bifolium();

/* include <bifolium> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        HeightMixIn    m_Height;
        WidthMixIn    m_Width;
        MeasurementMixIn    m_Measurement;
        BifoliumSurfacesMixIn    m_BifoliumSurfaces;

    private:
        REGISTER_DECLARATION(Bifolium);
};

/** \brief Contains the primary statement of responsibility given for a work on its title
 *  page.
 */
class MEI_EXPORT Byline : public MeiElement {
    public:
        Byline();
        Byline(const Byline &other);
        virtual ~Byline();

/* include <byline> */

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
        REGISTER_DECLARATION(Byline);
};

/** \brief (capture mode) – The means used to record notation, sound, or images in the
 *  production of a source/manifestation (e.g., analogue, acoustic, electric,
 *  digital, optical etc.).
 */
class MEI_EXPORT CaptureMode : public MeiElement {
    public:
        CaptureMode();
        CaptureMode(const CaptureMode &other);
        virtual ~CaptureMode();

/* include <captureMode> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CaptureMode);
};

/** \brief (carrier form) – The specific class of material to which the physical carrier of
 *  the source/manifestation belongs (e.g., sound cassette, videodisc, microfilm
 *  cartridge, transparency, etc.).
 * 
 *  The carrier for a manifestation comprising multiple physical components may
 *  include more than one form (e.g., a filmstrip with an accompanying booklet, a
 *  separate sound disc carrying the sound track for a film, etc.).
 */
class MEI_EXPORT CarrierForm : public MeiElement {
    public:
        CarrierForm();
        CarrierForm(const CarrierForm &other);
        virtual ~CarrierForm();

/* include <carrierForm> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CarrierForm);
};

/** \brief (category relationship) – Contains the name of a related category.
 */
class MEI_EXPORT CatRel : public MeiElement {
    public:
        CatRel();
        CatRel(const CatRel &other);
        virtual ~CatRel();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <catRel> */

        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        BasicMixIn    m_Basic;
        BiblMixIn    m_Bibl;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(CatRel);
};

/** \brief Contains an individual descriptive category in a user-defined taxonomy, possibly
 *  nested within a superordinate category.
 */
class MEI_EXPORT Category : public MeiElement {
    public:
        Category();
        Category(const Category &other);
        virtual ~Category();

/* include <category> */

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
        DataPointingMixIn    m_DataPointing;

    private:
        REGISTER_DECLARATION(Category);
};

/** \brief Individual change within the revision description.
 */
class MEI_EXPORT Change : public MeiElement {
    public:
        Change();
        Change(const Change &other);
        virtual ~Change();

/* include <change> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;

    private:
        REGISTER_DECLARATION(Change);
};

/** \brief (change description) – Description of a revision of the MEI file.
 */
class MEI_EXPORT ChangeDesc : public MeiElement {
    public:
        ChangeDesc();
        ChangeDesc(const ChangeDesc &other);
        virtual ~ChangeDesc();

/* include <changeDesc> */

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
        REGISTER_DECLARATION(ChangeDesc);
};

/** \brief Groups information which describes the nature or topic of an entity.
 */
class MEI_EXPORT ClassDecls : public MeiElement {
    public:
        ClassDecls();
        ClassDecls(const ClassDecls &other);
        virtual ~ClassDecls();

/* include <classDecls> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(ClassDecls);
};

/** \brief Groups information which describes the nature or topic of an entity.
 */
class MEI_EXPORT Classification : public MeiElement {
    public:
        Classification();
        Classification(const Classification &other);
        virtual ~Classification();

/* include <classification> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;

    private:
        REGISTER_DECLARATION(Classification);
};

/** \brief Container for intellectual or physical component parts of a bibliographic
 *  entity.
 */
class MEI_EXPORT ComponentList : public MeiElement {
    public:
        ComponentList();
        ComponentList(const ComponentList &other);
        virtual ~ComponentList();

/* include <componentList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(ComponentList);
};

/** \brief The physical condition of an item, particularly any variances between the
 *  physical make-up of the item and that of other copies of the same item (e.g.,
 *  missing pages or plates, brittleness, faded images, etc.).
 */
class MEI_EXPORT Condition : public MeiElement {
    public:
        Condition();
        Condition(const Condition &other);
        virtual ~Condition();

/* include <condition> */

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
        REGISTER_DECLARATION(Condition);
};

/** \brief Contains a single entry within a content description element.
 */
class MEI_EXPORT ContentItem : public MeiElement {
    public:
        ContentItem();
        ContentItem(const ContentItem &other);
        virtual ~ContentItem();

/* include <contentItem> */

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
        REGISTER_DECLARATION(ContentItem);
};

/** \brief List of the material contained within a resource.
 */
class MEI_EXPORT Contents : public MeiElement {
    public:
        Contents();
        Contents(const Contents &other);
        virtual ~Contents();

/* include <contents> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Contents);
};

/** \brief The historical, social, intellectual, artistic, or other context within which
 *  the work was originally conceived (e.g., the 17th century restoration of the
 *  monarchy in England, the aesthetic movement of the late 19th century, etc.) or
 *  the historical, social, intellectual, artistic, or other context within which
 *  the expression was realized.
 */
class MEI_EXPORT Context : public MeiElement {
    public:
        Context();
        Context(const Context &other);
        virtual ~Context();

/* include <context> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Context);
};

/** \brief States how and under what circumstances corrections have been made in the text.
 */
class MEI_EXPORT Correction : public MeiElement {
    public:
        Correction();
        Correction(const Correction &other);
        virtual ~Correction();
        /** \brief Indicates the degree of correction applied to the text.
         */
        MeiAttribute* getCorrlevel();
        void setCorrlevel(std::string _corrlevel);
        bool hasCorrlevel();
        void removeCorrlevel();

/* include <correction> */

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
        RegularMethodMixIn    m_RegularMethod;

    private:
        REGISTER_DECLARATION(Correction);
};

/** \brief A cutout is a section of a document sheet that has been removed and is now
 *  missing.
 */
class MEI_EXPORT Cutout : public MeiElement {
    public:
        Cutout();
        Cutout(const Cutout &other);
        virtual ~Cutout();
        /** \brief Describes the position of the cutout on the parent folium / bifolium.
         */
        MeiAttribute* getRemovedFrom();
        void setRemovedFrom(std::string _removedfrom);
        bool hasRemovedFrom();
        void removeRemovedFrom();
        /** \brief Describes the method of removing the cutout.
         */
        MeiAttribute* getRemovedBy();
        void setRemovedBy(std::string _removedby);
        bool hasRemovedBy();
        void removeRemovedBy();

/* include <cutout> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        HeightMixIn    m_Height;
        WidthMixIn    m_Width;
        EvidenceMixIn    m_Evidence;
        MeasurementMixIn    m_Measurement;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Cutout);
};

/** \brief Contains a dedicatory statement.
 */
class MEI_EXPORT Dedication : public MeiElement {
    public:
        Dedication();
        Dedication(const Dedication &other);
        virtual ~Dedication();

/* include <dedication> */

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
        REGISTER_DECLARATION(Dedication);
};

/** \brief (domains declaration) – Indicates which domains are included in the encoding.
 */
class MEI_EXPORT DomainsDecl : public MeiElement {
    public:
        DomainsDecl();
        DomainsDecl(const DomainsDecl &other);
        virtual ~DomainsDecl();
        /** \brief 
         */
        MeiAttribute* getAnl();
        void setAnl(std::string _anl);
        bool hasAnl();
        void removeAnl();
        /** \brief 
         */
        MeiAttribute* getGes();
        void setGes(std::string _ges);
        bool hasGes();
        void removeGes();
        /** \brief 
         */
        MeiAttribute* getVis();
        void setVis(std::string _vis);
        bool hasVis();
        void removeVis();

/* include <domainsDecl> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(DomainsDecl);
};

/** \brief (edition statement) – Container for meta-data pertaining to a particular edition
 *  of the material being described.
 */
class MEI_EXPORT EditionStmt : public MeiElement {
    public:
        EditionStmt();
        EditionStmt(const EditionStmt &other);
        virtual ~EditionStmt();

/* include <editionStmt> */

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
        REGISTER_DECLARATION(EditionStmt);
};

/** \brief (editorial declaration) – Used to provide details of editorial principles and
 *  practices applied during the encoding of musical text.
 */
class MEI_EXPORT EditorialDecl : public MeiElement {
    public:
        EditorialDecl();
        EditorialDecl(const EditorialDecl &other);
        virtual ~EditorialDecl();

/* include <editorialDecl> */

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
        REGISTER_DECLARATION(EditorialDecl);
};

/** \brief (encoding description) – Documents the relationship between an electronic file
 *  and the source or sources from which it was derived as well as applications used
 *  in the encoding/editing process.
 */
class MEI_EXPORT EncodingDesc : public MeiElement {
    public:
        EncodingDesc();
        EncodingDesc(const EncodingDesc &other);
        virtual ~EncodingDesc();

/* include <encodingDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(EncodingDesc);
};

/** \brief (exhibition history) – A record of public exhibitions, including dates, venues,
 *  etc.
 */
class MEI_EXPORT ExhibHist : public MeiElement {
    public:
        ExhibHist();
        ExhibHist(const ExhibHist &other);
        virtual ~ExhibHist();

/* include <exhibHist> */

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
        REGISTER_DECLARATION(ExhibHist);
};

/** \brief (extended metadata) – Provides a container element for non-MEI metadata formats.
 */
class MEI_EXPORT ExtMeta : public MeiElement {
    public:
        ExtMeta();
        ExtMeta(const ExtMeta &other);
        virtual ~ExtMeta();

/* include <extMeta> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        WhitespaceMixIn    m_Whitespace;

    private:
        REGISTER_DECLARATION(ExtMeta);
};

/** \brief (file characteristics) – Standards or schemes used to encode the file (e.g.,
 *  ASCII, SGML, etc.), physical characteristics of the file (e.g., recording
 *  density, parity, blocking, etc.), and other characteristics that have a bearing
 *  on how the file can be processed.
 */
class MEI_EXPORT FileChar : public MeiElement {
    public:
        FileChar();
        FileChar(const FileChar &other);
        virtual ~FileChar();

/* include <fileChar> */

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
        REGISTER_DECLARATION(FileChar);
};

/** \brief (file description) – Contains a full bibliographic description of the MEI file.
 */
class MEI_EXPORT FileDesc : public MeiElement {
    public:
        FileDesc();
        FileDesc(const FileDesc &other);
        virtual ~FileDesc();

/* include <fileDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(FileDesc);
};

/** \brief Describes the order of folia and bifolia making up the text block of a
 *  manuscript or print.
 */
class MEI_EXPORT FoliaDesc : public MeiElement {
    public:
        FoliaDesc();
        FoliaDesc(const FoliaDesc &other);
        virtual ~FoliaDesc();

/* include <foliaDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(FoliaDesc);
};

/** \brief Describes a single leaf of paper.
 */
class MEI_EXPORT Folium : public MeiElement {
    public:
        Folium();
        Folium(const Folium &other);
        virtual ~Folium();

/* include <folium> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        HeightMixIn    m_Height;
        WidthMixIn    m_Width;
        MeasurementMixIn    m_Measurement;
        FoliumSurfacesMixIn    m_FoliumSurfaces;

    private:
        REGISTER_DECLARATION(Folium);
};

/** \brief Defines a distinct scribe or handwriting style.
 */
class MEI_EXPORT Hand : public MeiElement {
    public:
        Hand();
        Hand(const Hand &other);
        virtual ~Hand();
        /** \brief Marks this hand as the first one of the document.
         */
        MeiAttribute* getInitial();
        void setInitial(std::string _initial);
        bool hasInitial();
        void removeInitial();

/* include <hand> */

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
        MediumMixIn    m_Medium;

    private:
        REGISTER_DECLARATION(Hand);
};

/** \brief Container for one or more hand elements.
 */
class MEI_EXPORT HandList : public MeiElement {
    public:
        HandList();
        HandList(const HandList &other);
        virtual ~HandList();

/* include <handList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(HandList);
};

/** \brief Provides a container for information about the history of a resource other than
 *  the circumstances of its creation.
 */
class MEI_EXPORT History : public MeiElement {
    public:
        History();
        History(const History &other);
        virtual ~History();

/* include <history> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(History);
};

/** \brief Incipit coded in a non-XML, plain text format, such as Plaine & Easie Code.
 */
class MEI_EXPORT IncipCode : public MeiElement {
    public:
        IncipCode();
        IncipCode(const IncipCode &other);
        virtual ~IncipCode();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <incipCode> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        InternetMediaMixIn    m_InternetMedia;
        PointingMixIn    m_Pointing;
        WhitespaceMixIn    m_Whitespace;

    private:
        REGISTER_DECLARATION(IncipCode);
};

/** \brief Opening words of a musical composition.
 */
class MEI_EXPORT IncipText : public MeiElement {
    public:
        IncipText();
        IncipText(const IncipText &other);
        virtual ~IncipText();

/* include <incipText> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;
        InternetMediaMixIn    m_InternetMedia;

    private:
        REGISTER_DECLARATION(IncipText);
};

/** \brief An inscription added to an item, such as a bookplate, a note designating the
 *  item as a gift, and/or the author’s signature.
 */
class MEI_EXPORT Inscription : public MeiElement {
    public:
        Inscription();
        Inscription(const Inscription &other);
        virtual ~Inscription();

/* include <inscription> */

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
        REGISTER_DECLARATION(Inscription);
};

/** \brief Describes the scope of any analytic or interpretive information added to the
 *  transcription of the music.
 */
class MEI_EXPORT Interpretation : public MeiElement {
    public:
        Interpretation();
        Interpretation(const Interpretation &other);
        virtual ~Interpretation();

/* include <interpretation> */

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
        REGISTER_DECLARATION(Interpretation);
};

/** \brief Key captures information about tonal center and mode.
 */
class MEI_EXPORT Key : public MeiElement {
    public:
        Key();
        Key(const Key &other);
        virtual ~Key();
        /** \brief Indicates major, minor, or other tonality.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <key> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        AccidentalMixIn    m_Accidental;
        BiblMixIn    m_Bibl;
        PitchMixIn    m_Pitch;

    private:
        REGISTER_DECLARATION(Key);
};

/** \brief (language usage) – Groups elements describing the languages, sub-languages,
 *  dialects, etc., represented within the encoded resource.
 */
class MEI_EXPORT LangUsage : public MeiElement {
    public:
        LangUsage();
        LangUsage(const LangUsage &other);
        virtual ~LangUsage();

/* include <langUsage> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DataPointingMixIn    m_DataPointing;

    private:
        REGISTER_DECLARATION(LangUsage);
};

/** \brief Description of a language used in the document.
 */
class MEI_EXPORT Language : public MeiElement {
    public:
        Language();
        Language(const Language &other);
        virtual ~Language();

/* include <language> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Language);
};

/** \brief (MEI header) – Supplies the descriptive and declarative metadata prefixed to
 *  every MEI-conformant text.
 */
class MEI_EXPORT MeiHead : public MeiElement {
    public:
        MeiHead();
        MeiHead(const MeiHead &other);
        virtual ~MeiHead();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <meiHead> */

        BasicMixIn    m_Basic;
        BiblMixIn    m_Bibl;
        LabelledMixIn    m_Labelled;
        LangMixIn    m_Lang;
        MeiVersionMixIn    m_MeiVersion;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(MeiHead);
};

/** \brief Captures information about mensuration within bibliographic descriptions.
 */
class MEI_EXPORT Mensuration : public MeiElement {
    public:
        Mensuration();
        Mensuration(const Mensuration &other);
        virtual ~Mensuration();

/* include <mensuration> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
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
        REGISTER_DECLARATION(Mensuration);
};

/** \brief Captures information about the time signature within bibliographic descriptions.
 */
class MEI_EXPORT Meter : public MeiElement {
    public:
        Meter();
        Meter(const Meter &other);
        virtual ~Meter();

/* include <meter> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        MeterSigLogMixIn    m_MeterSigLog;

    private:
        REGISTER_DECLARATION(Meter);
};

/** \brief Supplies the formal name of the namespace to which the elements documented by
 *  its children belong.
 */
class MEI_EXPORT Namespace : public MeiElement {
    public:
        Namespace();
        Namespace(const Namespace &other);
        virtual ~Namespace();
        /** \brief Name of the attribute.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief Prefix associated with the formal identifier.
         */
        MeiAttribute* getPrefix();
        void setPrefix(std::string _prefix);
        bool hasPrefix();
        void removePrefix();

/* include <namespace> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Namespace);
};

/** \brief Indicates the extent of normalization or regularization of the original source
 *  carried out in converting it to electronic form.
 */
class MEI_EXPORT Normalization : public MeiElement {
    public:
        Normalization();
        Normalization(const Normalization &other);
        virtual ~Normalization();

/* include <normalization> */

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
        RegularMethodMixIn    m_RegularMethod;

    private:
        REGISTER_DECLARATION(Normalization);
};

/** \brief (notes statement)– Collects any notes providing information about a text
 *  additional to that recorded in other parts of the bibliographic description.
 */
class MEI_EXPORT NotesStmt : public MeiElement {
    public:
        NotesStmt();
        NotesStmt(const NotesStmt &other);
        virtual ~NotesStmt();

/* include <notesStmt> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(NotesStmt);
};

/** \brief (other distinguishing characteristic) – Any characteristic that serves to
 *  differentiate a work or expression from another.
 */
class MEI_EXPORT OtherChar : public MeiElement {
    public:
        OtherChar();
        OtherChar(const OtherChar &other);
        virtual ~OtherChar();

/* include <otherChar> */

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
        REGISTER_DECLARATION(OtherChar);
};

/** \brief Describes a physical writing surface attached to the original document.
 */
class MEI_EXPORT Patch : public MeiElement {
    public:
        Patch();
        Patch(const Patch &other);
        virtual ~Patch();
        /** \brief Describes the position of the patch on the parent folium / bifolium.
         */
        MeiAttribute* getAttachedTo();
        void setAttachedTo(std::string _attachedto);
        bool hasAttachedTo();
        void removeAttachedTo();
        /** \brief Describes the method of attachment of the patch.
         */
        MeiAttribute* getAttachedBy();
        void setAttachedBy(std::string _attachedby);
        bool hasAttachedBy();
        void removeAttachedBy();

/* include <patch> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        EvidenceMixIn    m_Evidence;
        MeasurementMixIn    m_Measurement;
        GeneticStateMixIn    m_GeneticState;
        HandIdentMixIn    m_HandIdent;
        MetadataPointingMixIn    m_MetadataPointing;
        SequenceMixIn    m_Sequence;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Patch);
};

/** \brief (performance duration) – Used to express the duration of performance of printed
 *  or manuscript music or the playing time for a sound recording, videorecording,
 *  etc.
 */
class MEI_EXPORT PerfDuration : public MeiElement {
    public:
        PerfDuration();
        PerfDuration(const PerfDuration &other);
        virtual ~PerfDuration();
        /** \brief Holds a W3C duration value, e.g., "PT2H34M45.67S".
         */
        MeiAttribute* getIsodur();
        void setIsodur(std::string _isodur);
        bool hasIsodur();
        void removeIsodur();

/* include <perfDuration> */

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
        REGISTER_DECLARATION(PerfDuration);
};

/** \brief (performance medium) – Indicates the number and character of the performing
 *  forces used in a musical composition.
 */
class MEI_EXPORT PerfMedium : public MeiElement {
    public:
        PerfMedium();
        PerfMedium(const PerfMedium &other);
        virtual ~PerfMedium();

/* include <perfMedium> */

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

    private:
        REGISTER_DECLARATION(PerfMedium);
};

/** \brief (performance resource) – Name of an instrument on which a performer plays, a
 *  performer's voice range, or a standard performing ensemble designation.
 */
class MEI_EXPORT PerfRes : public MeiElement {
    public:
        PerfRes();
        PerfRes(const PerfRes &other);
        virtual ~PerfRes();
        /** \brief Indicates the number of performers.
         */
        MeiAttribute* getCount();
        void setCount(std::string _count);
        bool hasCount();
        void removeCount();
        /** \brief Marks this instrument or vocal part as a soloist.
         * 
         *  Do not use this attribute for a solo instrument which is not accompanied.
         */
        MeiAttribute* getSolo();
        void setSolo(std::string _solo);
        bool hasSolo();
        void removeSolo();

/* include <perfRes> */

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
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PerfRes);
};

/** \brief Several instrumental or vocal resources treated as a group.
 */
class MEI_EXPORT PerfResList : public MeiElement {
    public:
        PerfResList();
        PerfResList(const PerfResList &other);
        virtual ~PerfResList();
        /** \brief Indicates the number of performers.
         */
        MeiAttribute* getCount();
        void setCount(std::string _count);
        bool hasCount();
        void removeCount();

/* include <perfResList> */

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
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PerfResList);
};

/** \brief (physical description) – Container for information about the appearance,
 *  construction, or handling of physical materials, such as their dimension,
 *  quantity, color, style, and technique of creation.
 */
class MEI_EXPORT PhysDesc : public MeiElement {
    public:
        PhysDesc();
        PhysDesc(const PhysDesc &other);
        virtual ~PhysDesc();

/* include <physDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(PhysDesc);
};

/** \brief (physical medium) – Records the physical materials used in the source, such as
 *  ink and paper.
 */
class MEI_EXPORT PhysMedium : public MeiElement {
    public:
        PhysMedium();
        PhysMedium(const PhysMedium &other);
        virtual ~PhysMedium();

/* include <physMedium> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PhysMedium);
};

/** \brief (plate number) – Designation assigned to a resource by a music publisher,
 *  usually printed at the bottom of each page, and sometimes appearing also on the
 *  title page.
 */
class MEI_EXPORT PlateNum : public MeiElement {
    public:
        PlateNum();
        PlateNum(const PlateNum &other);
        virtual ~PlateNum();

/* include <plateNum> */

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
        REGISTER_DECLARATION(PlateNum);
};

/** \brief Playing speed for a sound recording is the speed at which the carrier must be
 *  operated to produce the sound intended (e.g., 33 1/3 rpm, 19 cm/s, etc.).
 */
class MEI_EXPORT PlayingSpeed : public MeiElement {
    public:
        PlayingSpeed();
        PlayingSpeed(const PlayingSpeed &other);
        virtual ~PlayingSpeed();

/* include <playingSpeed> */

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
        REGISTER_DECLARATION(PlayingSpeed);
};

/** \brief The cost of access to a bibliographic item.
 */
class MEI_EXPORT Price : public MeiElement {
    public:
        Price();
        Price(const Price &other);
        virtual ~Price();
        /** \brief Records the amount of detuning.
         * 
         *  The decimal values should be rendered as a fraction (or an integer plus a
         *  fraction) along with the bend symbol.
         */
        MeiAttribute* getAmount();
        void setAmount(std::string _amount);
        bool hasAmount();
        void removeAmount();
        /** \brief Monetary unit.
         */
        MeiAttribute* getCurrency();
        void setCurrency(std::string _currency);
        bool hasCurrency();
        void removeCurrency();

/* include <price> */

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
        REGISTER_DECLARATION(Price);
};

/** \brief (project description) – Project-level meta-data describing the aim or purpose
 *  for which the electronic file was encoded, funding agencies, etc.
 * 
 *  together with any other relevant information concerning the process by which it
 *  was assembled or collected.
 */
class MEI_EXPORT ProjectDesc : public MeiElement {
    public:
        ProjectDesc();
        ProjectDesc(const ProjectDesc &other);
        virtual ~ProjectDesc();

/* include <projectDesc> */

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
        REGISTER_DECLARATION(ProjectDesc);
};

/** \brief The record of ownership or custodianship of an item.
 */
class MEI_EXPORT Provenance : public MeiElement {
    public:
        Provenance();
        Provenance(const Provenance &other);
        virtual ~Provenance();

/* include <provenance> */

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
        REGISTER_DECLARATION(Provenance);
};

/** \brief (publication statement) – Container for information regarding the publication or
 *  distribution of a bibliographic item, including the publisher’s name and
 *  address, the date of publication, and other relevant details.
 */
class MEI_EXPORT PubStmt : public MeiElement {
    public:
        PubStmt();
        PubStmt(const PubStmt &other);
        virtual ~PubStmt();

/* include <pubStmt> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(PubStmt);
};

/** \brief (revision description) – Container for information about alterations that have
 *  been made to an MEI file.
 */
class MEI_EXPORT RevisionDesc : public MeiElement {
    public:
        RevisionDesc();
        RevisionDesc(const RevisionDesc &other);
        virtual ~RevisionDesc();

/* include <revisionDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(RevisionDesc);
};

/** \brief (sampling declaration) – Contains a prose description of the rationale and
 *  methods used in sampling texts in the creation of a corpus or collection.
 */
class MEI_EXPORT SamplingDecl : public MeiElement {
    public:
        SamplingDecl();
        SamplingDecl(const SamplingDecl &other);
        virtual ~SamplingDecl();

/* include <samplingDecl> */

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
        REGISTER_DECLARATION(SamplingDecl);
};

/** \brief Describes the type of score used to represent a musical composition (e.g., short
 *  score, full score, condensed score, close score, etc.).
 */
class MEI_EXPORT ScoreFormat : public MeiElement {
    public:
        ScoreFormat();
        ScoreFormat(const ScoreFormat &other);
        virtual ~ScoreFormat();

/* include <scoreFormat> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ScoreFormat);
};

/** \brief Describes the principles according to which the musical text has been segmented,
 *  for example into movements, sections, etc.
 */
class MEI_EXPORT Segmentation : public MeiElement {
    public:
        Segmentation();
        Segmentation(const Segmentation &other);
        virtual ~Segmentation();

/* include <segmentation> */

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
        REGISTER_DECLARATION(Segmentation);
};

/** \brief (series statement) – Groups information about the series, if any, to which a
 *  publication belongs.
 */
class MEI_EXPORT SeriesStmt : public MeiElement {
    public:
        SeriesStmt();
        SeriesStmt(const SeriesStmt &other);
        virtual ~SeriesStmt();

/* include <seriesStmt> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(SeriesStmt);
};

/** \brief (sound channels) – Reflects the number of apparent sound channels in the
 *  playback of a recording (monaural, stereophonic, quadraphonic, etc.).
 */
class MEI_EXPORT SoundChan : public MeiElement {
    public:
        SoundChan();
        SoundChan(const SoundChan &other);
        virtual ~SoundChan();
        /** \brief Records a number or count accompanying a notational feature.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <soundChan> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SoundChan);
};

/** \brief A bibliographic description of a source used in the creation of the electronic
 *  file.
 */
class MEI_EXPORT Source : public MeiElement {
    public:
        Source();
        Source(const Source &other);
        virtual ~Source();

/* include <source> */

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
        ComponentTypeMixIn    m_ComponentType;
        DataPointingMixIn    m_DataPointing;
        PointingMixIn    m_Pointing;
        RecordTypeMixIn    m_RecordType;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Source);
};

/** \brief (source description) – A container for the descriptions of the source(s) used in
 *  the creation of the electronic file.
 */
class MEI_EXPORT SourceDesc : public MeiElement {
    public:
        SourceDesc();
        SourceDesc(const SourceDesc &other);
        virtual ~SourceDesc();

/* include <sourceDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(SourceDesc);
};

/** \brief (special reproduction characteristic) – The equalization system, noise reduction
 *  system, etc.
 * 
 *  used in making the recording (e.g., NAB, DBX, Dolby, etc.).
 */
class MEI_EXPORT SpecRepro : public MeiElement {
    public:
        SpecRepro();
        SpecRepro(const SpecRepro &other);
        virtual ~SpecRepro();

/* include <specRepro> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SpecRepro);
};

/** \brief (standard values) – Specifies the format used when standardized date or number
 *  values are supplied.
 */
class MEI_EXPORT StdVals : public MeiElement {
    public:
        StdVals();
        StdVals(const StdVals &other);
        virtual ~StdVals();

/* include <stdVals> */

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
        REGISTER_DECLARATION(StdVals);
};

/** \brief (system requirements) – System requirements for using the electronic item.
 */
class MEI_EXPORT SysReq : public MeiElement {
    public:
        SysReq();
        SysReq(const SysReq &other);
        virtual ~SysReq();

/* include <sysReq> */

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
        REGISTER_DECLARATION(SysReq);
};

/** \brief Documents the usage of a specific element within the document.
 */
class MEI_EXPORT TagUsage : public MeiElement {
    public:
        TagUsage();
        TagUsage(const TagUsage &other);
        virtual ~TagUsage();
        /** \brief Name of the attribute.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief Circumstances in which the element appears, an XPath expression.
         */
        MeiAttribute* getContext();
        void setContext(std::string _context);
        bool hasContext();
        void removeContext();
        /** \brief Number of occurrences in the defined context.
         */
        MeiAttribute* getOccurs();
        void setOccurs(std::string _occurs);
        bool hasOccurs();
        void removeOccurs();
        /** \brief Number of occurrences in the defined context that have an xml:id attribute.
         */
        MeiAttribute* getWithid();
        void setWithid(std::string _withid);
        bool hasWithid();
        void removeWithid();

/* include <tagUsage> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(TagUsage);
};

/** \brief (tagging declaration) – Provides detailed information about the tagging applied
 *  to a document.
 */
class MEI_EXPORT TagsDecl : public MeiElement {
    public:
        TagsDecl();
        TagsDecl(const TagsDecl &other);
        virtual ~TagsDecl();

/* include <tagsDecl> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(TagsDecl);
};

/** \brief Defines a typology either implicitly, by means of a bibliographic citation, or
 *  explicitly by a structured taxonomy.
 */
class MEI_EXPORT Taxonomy : public MeiElement {
    public:
        Taxonomy();
        Taxonomy(const Taxonomy &other);
        virtual ~Taxonomy();

/* include <taxonomy> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Taxonomy);
};

/** \brief Collection of text phrases which describe a resource.
 */
class MEI_EXPORT TermList : public MeiElement {
    public:
        TermList();
        TermList(const TermList &other);
        virtual ~TermList();

/* include <termList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(TermList);
};

/** \brief (title statement) – Container for title and responsibility meta-data.
 */
class MEI_EXPORT TitleStmt : public MeiElement {
    public:
        TitleStmt();
        TitleStmt(const TitleStmt &other);
        virtual ~TitleStmt();

/* include <titleStmt> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(TitleStmt);
};

/** \brief (track configuration) – Number of physical/input tracks on a sound medium (e.g.,
 *  eight track, twelve track).
 */
class MEI_EXPORT TrackConfig : public MeiElement {
    public:
        TrackConfig();
        TrackConfig(const TrackConfig &other);
        virtual ~TrackConfig();
        /** \brief Records a number or count accompanying a notational feature.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <trackConfig> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(TrackConfig);
};

/** \brief (treatment history) – A record of the treatment the item has undergone (e.g.,
 *  de-acidification, restoration, etc.).
 */
class MEI_EXPORT TreatHist : public MeiElement {
    public:
        TreatHist();
        TreatHist(const TreatHist &other);
        virtual ~TreatHist();

/* include <treatHist> */

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
        REGISTER_DECLARATION(TreatHist);
};

/** \brief (treatment scheduled) – Scheduled treatment, e.g., de-acidification,
 *  restoration, etc., for an item.
 */
class MEI_EXPORT TreatSched : public MeiElement {
    public:
        TreatSched();
        TreatSched(const TreatSched &other);
        virtual ~TreatSched();

/* include <treatSched> */

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
        REGISTER_DECLARATION(TreatSched);
};

/** \brief (unpublished) – Used to explicitly indicate that a bibliographic resource is
 *  unpublished.
 */
class MEI_EXPORT Unpub : public MeiElement {
    public:
        Unpub();
        Unpub(const Unpub &other);
        virtual ~Unpub();

/* include <unpub> */

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
        REGISTER_DECLARATION(Unpub);
};

/** \brief (usage restrictions) – Container for information about the conditions that
 *  affect use of a bibliographic item after access has been granted.
 */
class MEI_EXPORT UseRestrict : public MeiElement {
    public:
        UseRestrict();
        UseRestrict(const UseRestrict &other);
        virtual ~UseRestrict();

/* include <useRestrict> */

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
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(UseRestrict);
};

/** \brief Contains a description of a watermark or similar device.
 */
class MEI_EXPORT Watermark : public MeiElement {
    public:
        Watermark();
        Watermark(const Watermark &other);
        virtual ~Watermark();

/* include <watermark> */

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
        REGISTER_DECLARATION(Watermark);
};

/** \brief Provides a detailed description of a work — a distinct intellectual or artistic
 *  creation — specifically its history, language use, and high-level musical
 *  attributes (e.g., key, tempo, meter, medium of performance, and intended
 *  duration).
 */
class MEI_EXPORT Work : public MeiElement {
    public:
        Work();
        Work(const Work &other);
        virtual ~Work();

/* include <work> */

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
        DataPointingMixIn    m_DataPointing;
        PointingMixIn    m_Pointing;
        TargetEvalMixIn    m_TargetEval;

    private:
        REGISTER_DECLARATION(Work);
};

/** \brief (work list) – Grouping mechanism for information describing non-bibliographic
 *  aspects of a text.
 */
class MEI_EXPORT WorkList : public MeiElement {
    public:
        WorkList();
        WorkList(const WorkList &other);
        virtual ~WorkList();

/* include <workList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(WorkList);
};
} // namespace mei
#endif // HEADER_H_
