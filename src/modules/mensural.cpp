#include "mensural.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Ligature::Ligature() :
    MeiElement("ligature"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_LigatureVis(this),
    m_Color(this)
{
}
REGISTER_DEFINITION(mei::Ligature, "ligature");
mei::Ligature::~Ligature() {}
mei::Ligature::Ligature(const Ligature &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_LigatureVis(this),
    m_Color(this)
{
}

/* include <ligature> */

mei::Mensur::Mensur() :
    MeiElement("mensur"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationRatio(this),
    m_MensuralShared(this),
    m_MensurVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_SlashCount(this)
{
}
REGISTER_DEFINITION(mei::Mensur, "mensur");
mei::Mensur::~Mensur() {}
mei::Mensur::Mensur(const Mensur &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationRatio(this),
    m_MensuralShared(this),
    m_MensurVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_SlashCount(this)
{
}

/* include <mensur> */

mei::Plica::Plica() :
    MeiElement("plica"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_PlicaVis(this)
{
}
REGISTER_DEFINITION(mei::Plica, "plica");
mei::Plica::~Plica() {}
mei::Plica::Plica(const Plica &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_PlicaVis(this)
{
}

/* include <plica> */

mei::Proport::Proport() :
    MeiElement("proport"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationRatio(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::Proport, "proport");
mei::Proport::~Proport() {}
mei::Proport::Proport(const Proport &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationRatio(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this)
{
}

/* include <proport> */

mei::Stem::Stem() :
    MeiElement("stem"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_StemVis(this),
    m_Xy(this),
    m_Color(this)
{
}
REGISTER_DEFINITION(mei::Stem, "stem");
mei::Stem::~Stem() {}
mei::Stem::Stem(const Stem &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_StemVis(this),
    m_Xy(this),
    m_Color(this)
{
}

/* include <stem> */



