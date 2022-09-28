#include "usersymbols.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AnchoredText::AnchoredText() :
    MeiElement("anchoredText"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_AnchoredTextLog(this),
    m_StartId(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::AnchoredText, "anchoredText");
mei::AnchoredText::~AnchoredText() {}
mei::AnchoredText::AnchoredText(const AnchoredText &other) :
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
    m_AnchoredTextLog(this),
    m_StartId(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <anchoredText> */

mei::Curve::Curve() :
    MeiElement("curve"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_CurveLog(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Color(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Curve, "curve");
mei::Curve::~Curve() {}
mei::Curve::Curve(const Curve &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_CurveLog(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Color(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Facsimile(this)
{
}

/* include <curve> */

mei::Line::Line() :
    MeiElement("line"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_LineLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_LineVis(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this)
{
}
REGISTER_DEFINITION(mei::Line, "line");
mei::Line::~Line() {}
mei::Line::Line(const Line &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_LineLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_LineVis(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this)
{
}

/* include <line> */

mei::Mapping::Mapping() :
    MeiElement("mapping"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::Mapping, "mapping");
mei::Mapping::~Mapping() {}
mei::Mapping::Mapping(const Mapping &other) :
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

/* include <mapping> */

mei::PropName::PropName() :
    MeiElement("propName"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::PropName, "propName");
mei::PropName::~PropName() {}
mei::PropName::PropName(const PropName &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::PropName::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::PropName::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::PropName::hasType() {
    return hasAttribute("type");
};

void mei::PropName::removeType() {
    removeAttribute("type");
};
/* include <propName> */

mei::PropValue::PropValue() :
    MeiElement("propValue"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::PropValue, "propValue");
mei::PropValue::~PropValue() {}
mei::PropValue::PropValue(const PropValue &other) :
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

/* include <propValue> */

mei::SymName::SymName() :
    MeiElement("symName"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::SymName, "symName");
mei::SymName::~SymName() {}
mei::SymName::SymName(const SymName &other) :
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

/* include <symName> */

mei::SymProp::SymProp() :
    MeiElement("symProp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::SymProp, "symProp");
mei::SymProp::~SymProp() {}
mei::SymProp::SymProp(const SymProp &other) :
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

/* include <symProp> */

mei::SymbolDef::SymbolDef() :
    MeiElement("symbolDef"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Coordinated(this)
{
}
REGISTER_DEFINITION(mei::SymbolDef, "symbolDef");
mei::SymbolDef::~SymbolDef() {}
mei::SymbolDef::SymbolDef(const SymbolDef &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Coordinated(this)
{
}

/* include <symbolDef> */

mei::SymbolTable::SymbolTable() :
    MeiElement("symbolTable"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::SymbolTable, "symbolTable");
mei::SymbolTable::~SymbolTable() {}
mei::SymbolTable::SymbolTable(const SymbolTable &other) :
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

/* include <symbolTable> */



