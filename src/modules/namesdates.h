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

#ifndef NAMESDATES_H_
#define NAMESDATES_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "facsimilemixins.h"
#include "sharedmixins.h"


namespace mei {
/** \brief (additional name) – Contains an additional name component, such as a nickname,
 *  epithet, or alias, or any other descriptive phrase used within a personal name.
 */
class MEI_EXPORT AddName : public MeiElement {
    public:
        AddName();
        AddName(const AddName &other);
        virtual ~AddName();

/* include <addName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(AddName);
};

/** \brief Contains the name of a geopolitical unit consisting of two or more nation states
 *  or countries.
 */
class MEI_EXPORT Bloc : public MeiElement {
    public:
        Bloc();
        Bloc(const Bloc &other);
        virtual ~Bloc();

/* include <bloc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(Bloc);
};

/** \brief (corporate name) – Identifies an organization or group of people that acts as a
 *  single entity.
 */
class MEI_EXPORT CorpName : public MeiElement {
    public:
        CorpName();
        CorpName(const CorpName &other);
        virtual ~CorpName();

/* include <corpName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(CorpName);
};

/** \brief Contains the name of a geopolitical unit, such as a nation, country, colony, or
 *  commonwealth, larger than or administratively superior to a region and smaller
 *  than a bloc.
 */
class MEI_EXPORT Country : public MeiElement {
    public:
        Country();
        Country(const Country &other);
        virtual ~Country();

/* include <country> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(Country);
};

/** \brief Contains the name of any kind of subdivision of a settlement, such as a parish,
 *  ward, or other administrative or geographic unit.
 */
class MEI_EXPORT District : public MeiElement {
    public:
        District();
        District(const District &other);
        virtual ~District();

/* include <district> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(District);
};

/** \brief (family name) – Contains a family (inherited) name, as opposed to a given,
 *  baptismal, or nick name.
 */
class MEI_EXPORT FamName : public MeiElement {
    public:
        FamName();
        FamName(const FamName &other);
        virtual ~FamName();

/* include <famName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(FamName);
};

/** \brief Contains a forename, given or baptismal name.
 */
class MEI_EXPORT ForeName : public MeiElement {
    public:
        ForeName();
        ForeName(const ForeName &other);
        virtual ~ForeName();

/* include <foreName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(ForeName);
};

/** \brief (generational name component) – Contains a name component used to distinguish
 *  otherwise similar names on the basis of the relative ages or generations of the
 *  persons named.
 */
class MEI_EXPORT GenName : public MeiElement {
    public:
        GenName();
        GenName(const GenName &other);
        virtual ~GenName();

/* include <genName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(GenName);
};

/** \brief (geographical feature name) – Contains a common noun identifying a geographical
 *  feature.
 */
class MEI_EXPORT GeogFeat : public MeiElement {
    public:
        GeogFeat();
        GeogFeat(const GeogFeat &other);
        virtual ~GeogFeat();

/* include <geogFeat> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(GeogFeat);
};

/** \brief (geographic name) – The proper noun designation for a place, natural feature, or
 *  political jurisdiction.
 */
class MEI_EXPORT GeogName : public MeiElement {
    public:
        GeogName();
        GeogName(const GeogName &other);
        virtual ~GeogName();

/* include <geogName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(GeogName);
};

/** \brief (name link) – Contains a connecting phrase or link used within a name but not
 *  regarded as part of it, such as "van der" or "of", "from", etc.
 */
class MEI_EXPORT NameLink : public MeiElement {
    public:
        NameLink();
        NameLink(const NameLink &other);
        virtual ~NameLink();

/* include <nameLink> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(NameLink);
};

/** \brief (period name) – A label that describes a period of time, such as 'Baroque' or
 *  '3rd Style period'.
 */
class MEI_EXPORT PeriodName : public MeiElement {
    public:
        PeriodName();
        PeriodName(const PeriodName &other);
        virtual ~PeriodName();

/* include <periodName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(PeriodName);
};

/** \brief (personal name) – Designation for an individual, including any or all of that
 *  individual's forenames, surnames, honorific titles, and added names.
 */
class MEI_EXPORT PersName : public MeiElement {
    public:
        PersName();
        PersName(const PersName &other);
        virtual ~PersName();

/* include <persName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(PersName);
};

/** \brief (postal box or post office box) contains a number or other identifier for some
 *  postal delivery point other than a street address.
 */
class MEI_EXPORT PostBox : public MeiElement {
    public:
        PostBox();
        PostBox(const PostBox &other);
        virtual ~PostBox();

/* include <postBox> */

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
        REGISTER_DECLARATION(PostBox);
};

/** \brief (postal code) contains a numerical or alphanumeric code used as part of a postal
 *  address to simplify sorting or delivery of mail.
 */
class MEI_EXPORT PostCode : public MeiElement {
    public:
        PostCode();
        PostCode(const PostCode &other);
        virtual ~PostCode();

/* include <postCode> */

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
        REGISTER_DECLARATION(PostCode);
};

/** \brief Contains the name of an administrative unit such as a state, province, or
 *  county, larger than a settlement, but smaller than a country.
 */
class MEI_EXPORT Region : public MeiElement {
    public:
        Region();
        Region(const Region &other);
        virtual ~Region();

/* include <region> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(Region);
};

/** \brief (role name) – Contains a name component which indicates that the referent has a
 *  particular role or position in society, such as an official title or rank.
 */
class MEI_EXPORT RoleName : public MeiElement {
    public:
        RoleName();
        RoleName(const RoleName &other);
        virtual ~RoleName();

/* include <roleName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(RoleName);
};

/** \brief Contains the name of a settlement such as a city, town, or village identified as
 *  a single geopolitical or administrative unit.
 */
class MEI_EXPORT Settlement : public MeiElement {
    public:
        Settlement();
        Settlement(const Settlement &other);
        virtual ~Settlement();

/* include <settlement> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(Settlement);
};

/** \brief full street address including any name or number identifying a building as well
 *  as the name of the street or route on which it is located.
 */
class MEI_EXPORT Street : public MeiElement {
    public:
        Street();
        Street(const Street &other);
        virtual ~Street();

/* include <street> */

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
        REGISTER_DECLARATION(Street);
};

/** \brief (style name) – A label for a characteristic style of writing or performance,
 *  such as 'bebop' or 'rock-n-roll'.
 */
class MEI_EXPORT StyleName : public MeiElement {
    public:
        StyleName();
        StyleName(const StyleName &other);
        virtual ~StyleName();

/* include <styleName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        NameMixIn    m_Name;
        AuthorizedMixIn    m_Authorized;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        FilingMixIn    m_Filing;

    private:
        REGISTER_DECLARATION(StyleName);
};
} // namespace mei
#endif // NAMESDATES_H_
