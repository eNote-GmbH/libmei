#include "figtable.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Fig::Fig() :
    MeiElement("fig"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HorizontalAlign(this),
    m_VerticalAlign(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Fig, "fig");
mei::Fig::~Fig() {}
mei::Fig::Fig(const Fig &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HorizontalAlign(this),
    m_VerticalAlign(this),
    m_Xy(this)
{
}

/* include <fig> */

mei::FigDesc::FigDesc() :
    MeiElement("figDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::FigDesc, "figDesc");
mei::FigDesc::~FigDesc() {}
mei::FigDesc::FigDesc(const FigDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Lang(this)
{
}

/* include <figDesc> */

mei::Graphic::Graphic() :
    MeiElement("graphic"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Height(this),
    m_Width(this),
    m_InternetMedia(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_StartId(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this)
{
}
REGISTER_DEFINITION(mei::Graphic, "graphic");
mei::Graphic::~Graphic() {}
mei::Graphic::Graphic(const Graphic &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Height(this),
    m_Width(this),
    m_InternetMedia(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_StartId(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this)
{
}

MeiAttribute* mei::Graphic::getUlx() {
    if (!hasAttribute("ulx")) {
        return NULL;
    }
    return getAttribute("ulx");
};

void mei::Graphic::setUlx(std::string _ulx) {
    MeiAttribute *a = new MeiAttribute("ulx", _ulx);
    addAttribute(a);
};

bool mei::Graphic::hasUlx() {
    return hasAttribute("ulx");
};

void mei::Graphic::removeUlx() {
    removeAttribute("ulx");
};
MeiAttribute* mei::Graphic::getUly() {
    if (!hasAttribute("uly")) {
        return NULL;
    }
    return getAttribute("uly");
};

void mei::Graphic::setUly(std::string _uly) {
    MeiAttribute *a = new MeiAttribute("uly", _uly);
    addAttribute(a);
};

bool mei::Graphic::hasUly() {
    return hasAttribute("uly");
};

void mei::Graphic::removeUly() {
    removeAttribute("uly");
};
/* include <graphic> */

mei::Table::Table() :
    MeiElement("table"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Table, "table");
mei::Table::~Table() {}
mei::Table::Table(const Table &other) :
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
    m_Xy(this)
{
}

/* include <table> */

mei::Td::Td() :
    MeiElement("td"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this),
    m_Tabular(this)
{
}
REGISTER_DEFINITION(mei::Td, "td");
mei::Td::~Td() {}
mei::Td::Td(const Td &other) :
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
    m_Xy(this),
    m_Tabular(this)
{
}

/* include <td> */

mei::Th::Th() :
    MeiElement("th"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this),
    m_Tabular(this)
{
}
REGISTER_DEFINITION(mei::Th, "th");
mei::Th::~Th() {}
mei::Th::Th(const Th &other) :
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
    m_Xy(this),
    m_Tabular(this)
{
}

/* include <th> */

mei::Tr::Tr() :
    MeiElement("tr"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Tr, "tr");
mei::Tr::~Tr() {}
mei::Tr::Tr(const Tr &other) :
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
    m_Xy(this)
{
}

/* include <tr> */



