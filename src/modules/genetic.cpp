#include "genetic.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::GenDesc::GenDesc() :
    MeiElement("genDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::GenDesc, "genDesc");
mei::GenDesc::~GenDesc() {}
mei::GenDesc::GenDesc(const GenDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MetadataPointing(this)
{
}

MeiAttribute* mei::GenDesc::getOrdered() {
    if (!hasAttribute("ordered")) {
        return NULL;
    }
    return getAttribute("ordered");
};

void mei::GenDesc::setOrdered(std::string _ordered) {
    MeiAttribute *a = new MeiAttribute("ordered", _ordered);
    addAttribute(a);
};

bool mei::GenDesc::hasOrdered() {
    return hasAttribute("ordered");
};

void mei::GenDesc::removeOrdered() {
    removeAttribute("ordered");
};
/* include <genDesc> */

mei::GenState::GenState() :
    MeiElement("genState"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_DataPointing(this),
    m_MetadataPointing(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::GenState, "genState");
mei::GenState::~GenState() {}
mei::GenState::GenState(const GenState &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_DataPointing(this),
    m_MetadataPointing(this),
    m_Pointing(this)
{
}

/* include <genState> */



