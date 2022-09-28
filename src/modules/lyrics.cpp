#include "lyrics.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Refrain::Refrain() :
    MeiElement("refrain"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VoltaGroupingSym(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Refrain, "refrain");
mei::Refrain::~Refrain() {}
mei::Refrain::Refrain(const Refrain &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VoltaGroupingSym(this),
    m_Xy(this)
{
}

/* include <refrain> */

mei::Verse::Verse() :
    MeiElement("verse"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VoltaGroupingSym(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Verse, "verse");
mei::Verse::~Verse() {}
mei::Verse::Verse(const Verse &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VoltaGroupingSym(this),
    m_Xy(this)
{
}

/* include <verse> */

mei::Volta::Volta() :
    MeiElement("volta"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Color(this),
    m_Typography(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Volta, "volta");
mei::Volta::~Volta() {}
mei::Volta::Volta(const Volta &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Color(this),
    m_Typography(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <volta> */



