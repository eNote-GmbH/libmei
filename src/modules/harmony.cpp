#include "harmony.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ChordDef::ChordDef() :
    MeiElement("chordDef"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StringtabPosition(this),
    m_StringtabTuning(this)
{
}
REGISTER_DEFINITION(mei::ChordDef, "chordDef");
mei::ChordDef::~ChordDef() {}
mei::ChordDef::ChordDef(const ChordDef &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StringtabPosition(this),
    m_StringtabTuning(this)
{
}

/* include <chordDef> */

mei::ChordMember::ChordMember() :
    MeiElement("chordMember"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_IntervalHarmonic(this),
    m_AccidentalGestural(this),
    m_Pitch(this),
    m_Octave(this),
    m_Stringtab(this)
{
}
REGISTER_DEFINITION(mei::ChordMember, "chordMember");
mei::ChordMember::~ChordMember() {}
mei::ChordMember::ChordMember(const ChordMember &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_IntervalHarmonic(this),
    m_AccidentalGestural(this),
    m_Pitch(this),
    m_Octave(this),
    m_Stringtab(this)
{
}

/* include <chordMember> */

mei::ChordTable::ChordTable() :
    MeiElement("chordTable"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::ChordTable, "chordTable");
mei::ChordTable::~ChordTable() {}
mei::ChordTable::ChordTable(const ChordTable &other) :
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

/* include <chordTable> */

mei::F::F() :
    MeiElement("f"),
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
REGISTER_DEFINITION(mei::F, "f");
mei::F::~F() {}
mei::F::F(const F &other) :
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

/* include <f> */

mei::Fb::Fb() :
    MeiElement("fb"),
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
REGISTER_DEFINITION(mei::Fb, "fb");
mei::Fb::~Fb() {}
mei::Fb::Fb(const Fb &other) :
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

/* include <fb> */

mei::Harm::Harm() :
    MeiElement("harm"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HarmLog(this),
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
    m_HarmVis(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_HarmAnl(this),
    m_IntervalHarmonic(this)
{
}
REGISTER_DEFINITION(mei::Harm, "harm");
mei::Harm::~Harm() {}
mei::Harm::Harm(const Harm &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_HarmLog(this),
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
    m_HarmVis(this),
    m_Extender(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_PlacementRelStaff(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_Timestamp2Gestural(this),
    m_HarmAnl(this),
    m_IntervalHarmonic(this)
{
}

/* include <harm> */



