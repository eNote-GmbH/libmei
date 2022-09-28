#include "cmnornaments.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Mordent::Mordent() :
    MeiElement("mordent"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MordentLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_StartEndId(this),
    m_StartId(this),
    m_OrnamentAccid(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this)
{
}
REGISTER_DEFINITION(mei::Mordent, "mordent");
mei::Mordent::~Mordent() {}
mei::Mordent::Mordent(const Mordent &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MordentLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_StartEndId(this),
    m_StartId(this),
    m_OrnamentAccid(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this)
{
}

/* include <mordent> */

mei::Trill::Trill() :
    MeiElement("trill"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_OrnamentAccid(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Trill, "trill");
mei::Trill::~Trill() {}
mei::Trill::Trill(const Trill &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_OrnamentAccid(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}

/* include <trill> */

mei::Turn::Turn() :
    MeiElement("turn"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_TurnLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_OrnamentAccid(this),
    m_StartId(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Turn, "turn");
mei::Turn::~Turn() {}
mei::Turn::Turn(const Turn &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_TurnLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_OrnamentAccid(this),
    m_StartId(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <turn> */



