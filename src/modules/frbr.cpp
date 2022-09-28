#include "frbr.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Expression::Expression() :
    MeiElement("expression"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_DataPointing(this)
{
}
REGISTER_DEFINITION(mei::Expression, "expression");
mei::Expression::~Expression() {}
mei::Expression::Expression(const Expression &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_DataPointing(this)
{
}

/* include <expression> */

mei::ExpressionList::ExpressionList() :
    MeiElement("expressionList"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::ExpressionList, "expressionList");
mei::ExpressionList::~ExpressionList() {}
mei::ExpressionList::ExpressionList(const ExpressionList &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}

/* include <expressionList> */

mei::Item::Item() :
    MeiElement("item"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Item, "item");
mei::Item::~Item() {}
mei::Item::Item(const Item &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

/* include <item> */

mei::ItemList::ItemList() :
    MeiElement("itemList"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::ItemList, "itemList");
mei::ItemList::~ItemList() {}
mei::ItemList::ItemList(const ItemList &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}

/* include <itemList> */

mei::Manifestation::Manifestation() :
    MeiElement("manifestation"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_ComponentType(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Manifestation, "manifestation");
mei::Manifestation::~Manifestation() {}
mei::Manifestation::Manifestation(const Manifestation &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_ComponentType(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}

MeiAttribute* mei::Manifestation::getSingleton() {
    if (!hasAttribute("singleton")) {
        return NULL;
    }
    return getAttribute("singleton");
};

void mei::Manifestation::setSingleton(std::string _singleton) {
    MeiAttribute *a = new MeiAttribute("singleton", _singleton);
    addAttribute(a);
};

bool mei::Manifestation::hasSingleton() {
    return hasAttribute("singleton");
};

void mei::Manifestation::removeSingleton() {
    removeAttribute("singleton");
};
/* include <manifestation> */

mei::ManifestationList::ManifestationList() :
    MeiElement("manifestationList"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::ManifestationList, "manifestationList");
mei::ManifestationList::~ManifestationList() {}
mei::ManifestationList::ManifestationList(const ManifestationList &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}

/* include <manifestationList> */



