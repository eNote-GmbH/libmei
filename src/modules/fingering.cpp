#include "fingering.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Fing::Fing() :
    MeiElement("fing"),
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
    m_AltSym(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Fing, "fing");
mei::Fing::~Fing() {}
mei::Fing::Fing(const Fing &other) :
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
    m_AltSym(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <fing> */

mei::FingGrp::FingGrp() :
    MeiElement("fingGrp"),
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
    m_FingGrpLog(this),
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
    m_FingGrpVis(this),
    m_AltSym(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::FingGrp, "fingGrp");
mei::FingGrp::~FingGrp() {}
mei::FingGrp::FingGrp(const FingGrp &other) :
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
    m_FingGrpLog(this),
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
    m_FingGrpVis(this),
    m_AltSym(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <fingGrp> */



