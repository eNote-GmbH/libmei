#include "facsimile.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Facsimile::Facsimile() :
    MeiElement("facsimile"),
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
REGISTER_DEFINITION(mei::Facsimile, "facsimile");
mei::Facsimile::~Facsimile() {}
mei::Facsimile::Facsimile(const Facsimile &other) :
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

/* include <facsimile> */

mei::Surface::Surface() :
    MeiElement("surface"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Coordinated(this),
    m_DataPointing(this),
    m_MetadataPointing(this),
    m_StartId(this)
{
}
REGISTER_DEFINITION(mei::Surface, "surface");
mei::Surface::~Surface() {}
mei::Surface::Surface(const Surface &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Coordinated(this),
    m_DataPointing(this),
    m_MetadataPointing(this),
    m_StartId(this)
{
}

/* include <surface> */

mei::Zone::Zone() :
    MeiElement("zone"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Coordinated(this),
    m_DataPointing(this)
{
}
REGISTER_DEFINITION(mei::Zone, "zone");
mei::Zone::~Zone() {}
mei::Zone::Zone(const Zone &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Coordinated(this),
    m_DataPointing(this)
{
}

/* include <zone> */



