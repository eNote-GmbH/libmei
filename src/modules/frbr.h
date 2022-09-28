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

#ifndef FRBR_H_
#define FRBR_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "headermixins.h"
#include "msdescmixins.h"
#include "sharedmixins.h"
#include <string>


namespace mei {
/** \brief Intellectual or artistic realization of a work.
 */
class MEI_EXPORT Expression : public MeiElement {
    public:
        Expression();
        Expression(const Expression &other);
        virtual ~Expression();

/* include <expression> */

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
        REGISTER_DECLARATION(Expression);
};

/** \brief Gathers bibliographic expression entities.
 */
class MEI_EXPORT ExpressionList : public MeiElement {
    public:
        ExpressionList();
        ExpressionList(const ExpressionList &other);
        virtual ~ExpressionList();

/* include <expressionList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(ExpressionList);
};

/** \brief Single instance or exemplar of a source/manifestation.
 */
class MEI_EXPORT Item : public MeiElement {
    public:
        Item();
        Item(const Item &other);
        virtual ~Item();

/* include <item> */

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
        REGISTER_DECLARATION(Item);
};

/** \brief Gathers bibliographic item entities.
 */
class MEI_EXPORT ItemList : public MeiElement {
    public:
        ItemList();
        ItemList(const ItemList &other);
        virtual ~ItemList();

/* include <itemList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(ItemList);
};

/** \brief A bibliographic description of a physical embodiment of an expression of a work.
 */
class MEI_EXPORT Manifestation : public MeiElement {
    public:
        Manifestation();
        Manifestation(const Manifestation &other);
        virtual ~Manifestation();
        /** \brief 
         */
        MeiAttribute* getSingleton();
        void setSingleton(std::string _singleton);
        bool hasSingleton();
        void removeSingleton();

/* include <manifestation> */

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
        REGISTER_DECLARATION(Manifestation);
};

/** \brief A container for the descriptions of physical embodiments of an expression of a
 *  work.
 */
class MEI_EXPORT ManifestationList : public MeiElement {
    public:
        ManifestationList();
        ManifestationList(const ManifestationList &other);
        virtual ~ManifestationList();

/* include <manifestationList> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(ManifestationList);
};
} // namespace mei
#endif // FRBR_H_
