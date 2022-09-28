#include "cmn.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Arpeg::Arpeg() :
    MeiElement("arpeg"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_ArpegLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_StartId(this),
    m_ArpegVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Arpeg, "arpeg");
mei::Arpeg::~Arpeg() {}
mei::Arpeg::Arpeg(const Arpeg &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_ArpegLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_StartId(this),
    m_ArpegVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <arpeg> */

mei::Attacca::Attacca() :
    MeiElement("attacca"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_AttaccaLog(this),
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
    m_Timestamp2Logical(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Attacca, "attacca");
mei::Attacca::~Attacca() {}
mei::Attacca::Attacca(const Attacca &other) :
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
    m_AttaccaLog(this),
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
    m_Timestamp2Logical(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_Timestamp2Gestural(this)
{
}

/* include <attacca> */

mei::BTrem::BTrem() :
    MeiElement("bTrem"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BTremLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AugmentDots(this),
    m_DurationLogical(this),
    m_Numbered(this),
    m_NumberPlacement(this),
    m_TremMeasured(this)
{
}
REGISTER_DEFINITION(mei::BTrem, "bTrem");
mei::BTrem::~BTrem() {}
mei::BTrem::BTrem(const BTrem &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BTremLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AugmentDots(this),
    m_DurationLogical(this),
    m_Numbered(this),
    m_NumberPlacement(this),
    m_TremMeasured(this)
{
}

/* include <bTrem> */

mei::Beam::Beam() :
    MeiElement("beam"),
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_BeamedWith(this),
    m_Color(this),
    m_Cue(this),
    m_BeamRend(this),
    m_Visibility(this)
{
}
REGISTER_DEFINITION(mei::Beam, "beam");
mei::Beam::~Beam() {}
mei::Beam::Beam(const Beam &other) :
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_BeamedWith(this),
    m_Color(this),
    m_Cue(this),
    m_BeamRend(this),
    m_Visibility(this)
{
}

/* include <beam> */

mei::BeamSpan::BeamSpan() :
    MeiElement("beamSpan"),
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
    m_BeamedWith(this),
    m_DurationAdditive(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_Cue(this),
    m_BeamRend(this),
    m_Visibility(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::BeamSpan, "beamSpan");
mei::BeamSpan::~BeamSpan() {}
mei::BeamSpan::BeamSpan(const BeamSpan &other) :
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
    m_BeamedWith(this),
    m_DurationAdditive(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_Cue(this),
    m_BeamRend(this),
    m_Visibility(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}

/* include <beamSpan> */

mei::BeatRpt::BeatRpt() :
    MeiElement("beatRpt"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BeatRptLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_BeatRptVis(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this),
    m_Plist(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::BeatRpt, "beatRpt");
mei::BeatRpt::~BeatRpt() {}
mei::BeatRpt::BeatRpt(const BeatRpt &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BeatRptLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_BeatRptVis(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this),
    m_Plist(this),
    m_TargetEval(this)
{
}

/* include <beatRpt> */

mei::Bend::Bend() :
    MeiElement("bend"),
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_BendGes(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Bend, "bend");
mei::Bend::~Bend() {}
mei::Bend::Bend(const Bend &other) :
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_BendGes(this),
    m_Timestamp2Gestural(this)
{
}

/* include <bend> */

mei::BracketSpan::BracketSpan() :
    MeiElement("bracketSpan"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_BracketSpanLog(this),
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
    m_Color(this),
    m_ExtSym(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::BracketSpan, "bracketSpan");
mei::BracketSpan::~BracketSpan() {}
mei::BracketSpan::BracketSpan(const BracketSpan &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_BracketSpanLog(this),
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
    m_Color(this),
    m_ExtSym(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_Facsimile(this)
{
}

/* include <bracketSpan> */

mei::Breath::Breath() :
    MeiElement("breath"),
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
    m_StaffIdent(this),
    m_StartId(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_TimestampGestural(this)
{
}
REGISTER_DEFINITION(mei::Breath, "breath");
mei::Breath::~Breath() {}
mei::Breath::Breath(const Breath &other) :
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
    m_StaffIdent(this),
    m_StartId(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_TimestampGestural(this)
{
}

/* include <breath> */

mei::FTrem::FTrem() :
    MeiElement("fTrem"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_FTremLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AugmentDots(this),
    m_DurationLogical(this),
    m_FTremVis(this),
    m_TremMeasured(this)
{
}
REGISTER_DEFINITION(mei::FTrem, "fTrem");
mei::FTrem::~FTrem() {}
mei::FTrem::FTrem(const FTrem &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_FTremLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AugmentDots(this),
    m_DurationLogical(this),
    m_FTremVis(this),
    m_TremMeasured(this)
{
}

/* include <fTrem> */

mei::Fermata::Fermata() :
    MeiElement("fermata"),
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
    m_StartEndId(this),
    m_StartId(this),
    m_FermataVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_DurationGestural(this)
{
}
REGISTER_DEFINITION(mei::Fermata, "fermata");
mei::Fermata::~Fermata() {}
mei::Fermata::Fermata(const Fermata &other) :
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
    m_StartEndId(this),
    m_StartId(this),
    m_FermataVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_DurationGestural(this)
{
}

/* include <fermata> */

mei::Gliss::Gliss() :
    MeiElement("gliss"),
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Gliss, "gliss");
mei::Gliss::~Gliss() {}
mei::Gliss::Gliss(const Gliss &other) :
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}

/* include <gliss> */

mei::GraceGrp::GraceGrp() :
    MeiElement("graceGrp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_GraceGrpLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Graced(this),
    m_Color(this)
{
}
REGISTER_DEFINITION(mei::GraceGrp, "graceGrp");
mei::GraceGrp::~GraceGrp() {}
mei::GraceGrp::GraceGrp(const GraceGrp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_GraceGrpLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Graced(this),
    m_Color(this)
{
}

/* include <graceGrp> */

mei::Hairpin::Hairpin() :
    MeiElement("hairpin"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HairpinLog(this),
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
    m_HairpinVis(this),
    m_Color(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationGestural(this),
    m_MidiValue(this),
    m_MidiValue2(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Hairpin, "hairpin");
mei::Hairpin::~Hairpin() {}
mei::Hairpin::Hairpin(const Hairpin &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HairpinLog(this),
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
    m_HairpinVis(this),
    m_Color(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationGestural(this),
    m_MidiValue(this),
    m_MidiValue2(this),
    m_Timestamp2Gestural(this)
{
}

/* include <hairpin> */

mei::HalfmRpt::HalfmRpt() :
    MeiElement("halfmRpt"),
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_DurationLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_DurationGestural(this)
{
}
REGISTER_DEFINITION(mei::HalfmRpt, "halfmRpt");
mei::HalfmRpt::~HalfmRpt() {}
mei::HalfmRpt::HalfmRpt(const HalfmRpt &other) :
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_DurationLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_DurationGestural(this)
{
}

/* include <halfmRpt> */

mei::HarpPedal::HarpPedal() :
    MeiElement("harpPedal"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HarpPedalLog(this),
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
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_DurationGestural(this)
{
}
REGISTER_DEFINITION(mei::HarpPedal, "harpPedal");
mei::HarpPedal::~HarpPedal() {}
mei::HarpPedal::HarpPedal(const HarpPedal &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HarpPedalLog(this),
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
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_DurationGestural(this)
{
}

/* include <harpPedal> */

mei::Lv::Lv() :
    MeiElement("lv"),
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Lv, "lv");
mei::Lv::~Lv() {}
mei::Lv::Lv(const Lv &other) :
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_Timestamp2Gestural(this)
{
}

/* include <lv> */

mei::MNum::MNum() :
    MeiElement("mNum"),
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
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::MNum, "mNum");
mei::MNum::~MNum() {}
mei::MNum::MNum(const MNum &other) :
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
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <mNum> */

mei::MRest::MRest() :
    MeiElement("mRest"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Cue(this),
    m_DurationAdditive(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_Cutout(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Visibility(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_FermataPresent(this)
{
}
REGISTER_DEFINITION(mei::MRest, "mRest");
mei::MRest::~MRest() {}
mei::MRest::MRest(const MRest &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Cue(this),
    m_DurationAdditive(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_Cutout(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Visibility(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_FermataPresent(this)
{
}

/* include <mRest> */

mei::MRpt::MRpt() :
    MeiElement("mRpt"),
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Numbered(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_NumberPlacement(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::MRpt, "mRpt");
mei::MRpt::~MRpt() {}
mei::MRpt::MRpt(const MRpt &other) :
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Numbered(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_NumberPlacement(this),
    m_Typography(this)
{
}

/* include <mRpt> */

mei::MRpt2::MRpt2() :
    MeiElement("mRpt2"),
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::MRpt2, "mRpt2");
mei::MRpt2::~MRpt2() {}
mei::MRpt2::MRpt2(const MRpt2 &other) :
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this)
{
}

/* include <mRpt2> */

mei::MSpace::MSpace() :
    MeiElement("mSpace"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationAdditive(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Cutout(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_FermataPresent(this)
{
}
REGISTER_DEFINITION(mei::MSpace, "mSpace");
mei::MSpace::~MSpace() {}
mei::MSpace::MSpace(const MSpace &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationAdditive(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Cutout(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_FermataPresent(this)
{
}

/* include <mSpace> */

mei::Measure::Measure() :
    MeiElement("measure"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_Joined(this),
    m_TimestampGestural(this),
    m_MeasureLog(this),
    m_Alignment(this),
    m_MeterConformanceBar(this),
    m_Barring(this),
    m_Width(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Measure, "measure");
mei::Measure::~Measure() {}
mei::Measure::Measure(const Measure &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_Joined(this),
    m_TimestampGestural(this),
    m_MeasureLog(this),
    m_Alignment(this),
    m_MeterConformanceBar(this),
    m_Barring(this),
    m_Width(this),
    m_TargetEval(this)
{
}

/* include <measure> */

mei::MeterSig::MeterSig() :
    MeiElement("meterSig"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MeterSigLog(this),
    m_MeterSigVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::MeterSig, "meterSig");
mei::MeterSig::~MeterSig() {}
mei::MeterSig::MeterSig(const MeterSig &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MeterSigLog(this),
    m_MeterSigVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Typography(this)
{
}

/* include <meterSig> */

mei::MeterSigGrp::MeterSigGrp() :
    MeiElement("meterSigGrp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MeterSigGrpLog(this)
{
}
REGISTER_DEFINITION(mei::MeterSigGrp, "meterSigGrp");
mei::MeterSigGrp::~MeterSigGrp() {}
mei::MeterSigGrp::MeterSigGrp(const MeterSigGrp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MeterSigGrpLog(this)
{
}

/* include <meterSigGrp> */

mei::MultiRest::MultiRest() :
    MeiElement("multiRest"),
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Numbered(this),
    m_MultiRestVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_NumberPlacement(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_Width(this),
    m_DurationGestural(this)
{
}
REGISTER_DEFINITION(mei::MultiRest, "multiRest");
mei::MultiRest::~MultiRest() {}
mei::MultiRest::MultiRest(const MultiRest &other) :
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Numbered(this),
    m_MultiRestVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_NumberPlacement(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_Width(this),
    m_DurationGestural(this)
{
}

/* include <multiRest> */

mei::MultiRpt::MultiRpt() :
    MeiElement("multiRpt"),
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Numbered(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::MultiRpt, "multiRpt");
mei::MultiRpt::~MultiRpt() {}
mei::MultiRpt::MultiRpt(const MultiRpt &other) :
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
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Numbered(this),
    m_AltSym(this),
    m_Color(this),
    m_Expandable(this),
    m_ExtSym(this),
    m_Typography(this)
{
}

/* include <multiRpt> */

mei::OLayer::OLayer() :
    MeiElement("oLayer"),
    m_Basic(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_LayerLog(this),
    m_Cue(this),
    m_MeterConformance(this),
    m_Visibility(this)
{
}
REGISTER_DEFINITION(mei::OLayer, "oLayer");
mei::OLayer::~OLayer() {}
mei::OLayer::OLayer(const OLayer &other) :
    MeiElement(other),
    m_Basic(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_LayerLog(this),
    m_Cue(this),
    m_MeterConformance(this),
    m_Visibility(this)
{
}

/* include <oLayer> */

mei::OStaff::OStaff() :
    MeiElement("oStaff"),
    m_Basic(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StaffLog(this),
    m_MeterConformance(this),
    m_Visibility(this)
{
}
REGISTER_DEFINITION(mei::OStaff, "oStaff");
mei::OStaff::~OStaff() {}
mei::OStaff::OStaff(const OStaff &other) :
    MeiElement(other),
    m_Basic(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StaffLog(this),
    m_MeterConformance(this),
    m_Visibility(this)
{
}

/* include <oStaff> */

mei::Octave::Octave() :
    MeiElement("octave"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_OctaveLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_OctaveDisplacement(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
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
REGISTER_DEFINITION(mei::Octave, "octave");
mei::Octave::~Octave() {}
mei::Octave::Octave(const Octave &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_OctaveLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_OctaveDisplacement(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
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

/* include <octave> */

mei::Ossia::Ossia() :
    MeiElement("ossia"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Ossia, "ossia");
mei::Ossia::~Ossia() {}
mei::Ossia::Ossia(const Ossia &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this)
{
}

/* include <ossia> */

mei::Pedal::Pedal() :
    MeiElement("pedal"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_PedalLog(this),
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
    m_Timestamp2Logical(this),
    m_PedalVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Pedal, "pedal");
mei::Pedal::~Pedal() {}
mei::Pedal::Pedal(const Pedal &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_PedalLog(this),
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
    m_Timestamp2Logical(this),
    m_PedalVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_Timestamp2Gestural(this)
{
}

/* include <pedal> */

mei::Reh::Reh() :
    MeiElement("reh"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Alignment(this),
    m_PartIdent(this),
    m_StaffIdent(this),
    m_StartId(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Reh, "reh");
mei::Reh::~Reh() {}
mei::Reh::Reh(const Reh &other) :
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
    m_Alignment(this),
    m_PartIdent(this),
    m_StaffIdent(this),
    m_StartId(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_Color(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <reh> */

mei::Slur::Slur() :
    MeiElement("slur"),
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_Joined(this)
{
}
REGISTER_DEFINITION(mei::Slur, "slur");
mei::Slur::~Slur() {}
mei::Slur::Slur(const Slur &other) :
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_Joined(this)
{
}

/* include <slur> */

mei::Tie::Tie() :
    MeiElement("tie"),
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Tie, "tie");
mei::Tie::~Tie() {}
mei::Tie::Tie(const Tie &other) :
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Color(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_VisualOffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_CurveRend(this),
    m_Timestamp2Gestural(this)
{
}

/* include <tie> */

mei::Tuplet::Tuplet() :
    MeiElement("tuplet"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BeamedWith(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_StartEndId(this),
    m_StartId(this),
    m_TupletVis(this),
    m_Color(this),
    m_NumberPlacement(this),
    m_DurationGestural(this)
{
}
REGISTER_DEFINITION(mei::Tuplet, "tuplet");
mei::Tuplet::~Tuplet() {}
mei::Tuplet::Tuplet(const Tuplet &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BeamedWith(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_StartEndId(this),
    m_StartId(this),
    m_TupletVis(this),
    m_Color(this),
    m_NumberPlacement(this),
    m_DurationGestural(this)
{
}

/* include <tuplet> */

mei::TupletSpan::TupletSpan() :
    MeiElement("tupletSpan"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BeamedWith(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_TupletVis(this),
    m_Color(this),
    m_NumberPlacement(this),
    m_Timestamp2Gestural(this),
    m_DurationGestural(this)
{
}
REGISTER_DEFINITION(mei::TupletSpan, "tupletSpan");
mei::TupletSpan::~TupletSpan() {}
mei::TupletSpan::TupletSpan(const TupletSpan &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_BeamedWith(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_TupletVis(this),
    m_Color(this),
    m_NumberPlacement(this),
    m_Timestamp2Gestural(this),
    m_DurationGestural(this)
{
}

/* include <tupletSpan> */



