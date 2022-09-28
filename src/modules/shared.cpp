#include "shared.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Accid::Accid() :
    MeiElement("accid"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AccidLog(this),
    m_Accidental(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementOnStaff(this),
    m_PlacementRelEvent(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_AccidentalGestural(this)
{
}
REGISTER_DEFINITION(mei::Accid, "accid");
mei::Accid::~Accid() {}
mei::Accid::Accid(const Accid &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AccidLog(this),
    m_Accidental(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementOnStaff(this),
    m_PlacementRelEvent(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_AccidentalGestural(this)
{
}

/* include <accid> */

mei::Actor::Actor() :
    MeiElement("actor"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Actor, "actor");
mei::Actor::~Actor() {}
mei::Actor::Actor(const Actor &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <actor> */

mei::AddrLine::AddrLine() :
    MeiElement("addrLine"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AddrLine, "addrLine");
mei::AddrLine::~AddrLine() {}
mei::AddrLine::AddrLine(const AddrLine &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <addrLine> */

mei::Address::Address() :
    MeiElement("address"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Address, "address");
mei::Address::~Address() {}
mei::Address::Address(const Address &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <address> */

mei::AmbNote::AmbNote() :
    MeiElement("ambNote"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Accidental(this),
    m_Coloration(this),
    m_DurationLogical(this),
    m_Pitch(this),
    m_Octave(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_NoteHeads(this),
    m_StaffLoc(this),
    m_Stems(this),
    m_StemsCmn(this),
    m_StemsMensural(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::AmbNote, "ambNote");
mei::AmbNote::~AmbNote() {}
mei::AmbNote::AmbNote(const AmbNote &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Accidental(this),
    m_Coloration(this),
    m_DurationLogical(this),
    m_Pitch(this),
    m_Octave(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_NoteHeads(this),
    m_StaffLoc(this),
    m_Stems(this),
    m_StemsCmn(this),
    m_StemsMensural(this),
    m_Typography(this)
{
}

/* include <ambNote> */

mei::Ambitus::Ambitus() :
    MeiElement("ambitus"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_IntervalHarmonic(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Ambitus, "ambitus");
mei::Ambitus::~Ambitus() {}
mei::Ambitus::Ambitus(const Ambitus &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_IntervalHarmonic(this),
    m_MetadataPointing(this)
{
}

/* include <ambitus> */

mei::Analytic::Analytic() :
    MeiElement("analytic"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_ComponentType(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Analytic, "analytic");
mei::Analytic::~Analytic() {}
mei::Analytic::Analytic(const Analytic &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_ComponentType(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}

/* include <analytic> */

mei::Annot::Annot() :
    MeiElement("annot"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_DurationAdditive(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_StaffIdent(this),
    m_StartEndId(this),
    m_StartId(this),
    m_TimestampLogical(this),
    m_Timestamp2Logical(this),
    m_AnnotVis(this),
    m_DurationGestural(this),
    m_TimestampGestural(this),
    m_Timestamp2Gestural(this),
    m_Audience(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_Source(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Annot, "annot");
mei::Annot::~Annot() {}
mei::Annot::Annot(const Annot &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_DurationAdditive(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_StaffIdent(this),
    m_StartEndId(this),
    m_StartId(this),
    m_TimestampLogical(this),
    m_Timestamp2Logical(this),
    m_AnnotVis(this),
    m_DurationGestural(this),
    m_TimestampGestural(this),
    m_Timestamp2Gestural(this),
    m_Audience(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_Source(this),
    m_TargetEval(this)
{
}

/* include <annot> */

mei::Arranger::Arranger() :
    MeiElement("arranger"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Arranger, "arranger");
mei::Arranger::~Arranger() {}
mei::Arranger::Arranger(const Arranger &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <arranger> */

mei::Artic::Artic() :
    MeiElement("artic"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Articulation(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementOnStaff(this),
    m_PlacementRelEvent(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_ArticulationGestural(this)
{
}
REGISTER_DEFINITION(mei::Artic, "artic");
mei::Artic::~Artic() {}
mei::Artic::Artic(const Artic &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Articulation(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_PlacementOnStaff(this),
    m_PlacementRelEvent(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_ArticulationGestural(this)
{
}

/* include <artic> */

mei::Author::Author() :
    MeiElement("author"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Author, "author");
mei::Author::~Author() {}
mei::Author::Author(const Author &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <author> */

mei::BarLine::BarLine() :
    MeiElement("barLine"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_TargetEval(this),
    m_BarLineLog(this),
    m_MeterConformanceBar(this),
    m_BarLineVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Visibility(this),
    m_Width(this)
{
}
REGISTER_DEFINITION(mei::BarLine, "barLine");
mei::BarLine::~BarLine() {}
mei::BarLine::BarLine(const BarLine &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_TargetEval(this),
    m_BarLineLog(this),
    m_MeterConformanceBar(this),
    m_BarLineVis(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Visibility(this),
    m_Width(this)
{
}

/* include <barLine> */

mei::Bibl::Bibl() :
    MeiElement("bibl"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Bibl, "bibl");
mei::Bibl::~Bibl() {}
mei::Bibl::Bibl(const Bibl &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Pointing(this)
{
}

/* include <bibl> */

mei::BiblList::BiblList() :
    MeiElement("biblList"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::BiblList, "biblList");
mei::BiblList::~BiblList() {}
mei::BiblList::BiblList(const BiblList &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <biblList> */

mei::BiblScope::BiblScope() :
    MeiElement("biblScope"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::BiblScope, "biblScope");
mei::BiblScope::~BiblScope() {}
mei::BiblScope::BiblScope(const BiblScope &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this)
{
}

MeiAttribute* mei::BiblScope::getFrom() {
    if (!hasAttribute("from")) {
        return NULL;
    }
    return getAttribute("from");
};

void mei::BiblScope::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::BiblScope::hasFrom() {
    return hasAttribute("from");
};

void mei::BiblScope::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::BiblScope::getTo() {
    if (!hasAttribute("to")) {
        return NULL;
    }
    return getAttribute("to");
};

void mei::BiblScope::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::BiblScope::hasTo() {
    return hasAttribute("to");
};

void mei::BiblScope::removeTo() {
    removeAttribute("to");
};
/* include <biblScope> */

mei::BiblStruct::BiblStruct() :
    MeiElement("biblStruct"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Lang(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::BiblStruct, "biblStruct");
mei::BiblStruct::~BiblStruct() {}
mei::BiblStruct::BiblStruct(const BiblStruct &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Lang(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}

/* include <biblStruct> */

mei::Body::Body() :
    MeiElement("body"),
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
REGISTER_DEFINITION(mei::Body, "body");
mei::Body::~Body() {}
mei::Body::Body(const Body &other) :
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

/* include <body> */

mei::Caesura::Caesura() :
    MeiElement("caesura"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationGestural(this),
    m_TimestampGestural(this),
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
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Caesura, "caesura");
mei::Caesura::~Caesura() {}
mei::Caesura::Caesura(const Caesura &other) :
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
    m_TimestampGestural(this),
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
    m_Xy(this)
{
}

/* include <caesura> */

mei::Caption::Caption() :
    MeiElement("caption"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Caption, "caption");
mei::Caption::~Caption() {}
mei::Caption::Caption(const Caption &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <caption> */

mei::CastGrp::CastGrp() :
    MeiElement("castGrp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::CastGrp, "castGrp");
mei::CastGrp::~CastGrp() {}
mei::CastGrp::CastGrp(const CastGrp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <castGrp> */

mei::CastItem::CastItem() :
    MeiElement("castItem"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::CastItem, "castItem");
mei::CastItem::~CastItem() {}
mei::CastItem::CastItem(const CastItem &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <castItem> */

mei::CastList::CastList() :
    MeiElement("castList"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::CastList, "castList");
mei::CastList::~CastList() {}
mei::CastList::CastList(const CastList &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <castList> */

mei::Cb::Cb() :
    MeiElement("cb"),
    m_Basic(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_Responsibility(this),
    m_Source(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::Cb, "cb");
mei::Cb::~Cb() {}
mei::Cb::Cb(const Cb &other) :
    MeiElement(other),
    m_Basic(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_Responsibility(this),
    m_Source(this),
    m_Typed(this),
    m_Classed(this)
{
}

MeiAttribute* mei::Cb::getN() {
    if (!hasAttribute("n")) {
        return NULL;
    }
    return getAttribute("n");
};

void mei::Cb::setN(std::string _n) {
    MeiAttribute *a = new MeiAttribute("n", _n);
    addAttribute(a);
};

bool mei::Cb::hasN() {
    return hasAttribute("n");
};

void mei::Cb::removeN() {
    removeAttribute("n");
};
/* include <cb> */

mei::Chord::Chord() :
    MeiElement("chord"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Articulation(this),
    m_AugmentDots(this),
    m_Graced(this),
    m_Cue(this),
    m_DurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_SylText(this),
    m_ChordVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Stems(this),
    m_StemsCmn(this),
    m_StemsMensural(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_Xy(this),
    m_BeamSecondary(this),
    m_ArticulationGestural(this),
    m_DurationGestural(this),
    m_InstrumentIdent(this),
    m_BeamPresent(this),
    m_FermataPresent(this),
    m_LvPresent(this),
    m_OrnamPresent(this),
    m_SlurPresent(this),
    m_TiePresent(this),
    m_TupletPresent(this)
{
}
REGISTER_DEFINITION(mei::Chord, "chord");
mei::Chord::~Chord() {}
mei::Chord::Chord(const Chord &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Articulation(this),
    m_AugmentDots(this),
    m_Graced(this),
    m_Cue(this),
    m_DurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_SylText(this),
    m_ChordVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Stems(this),
    m_StemsCmn(this),
    m_StemsMensural(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_Xy(this),
    m_BeamSecondary(this),
    m_ArticulationGestural(this),
    m_DurationGestural(this),
    m_InstrumentIdent(this),
    m_BeamPresent(this),
    m_FermataPresent(this),
    m_LvPresent(this),
    m_OrnamPresent(this),
    m_SlurPresent(this),
    m_TiePresent(this),
    m_TupletPresent(this)
{
}

/* include <chord> */

mei::Clef::Clef() :
    MeiElement("clef"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Facsimile(this),
    m_ClefLog(this),
    m_ClefShape(this),
    m_LineLoc(this),
    m_Octave(this),
    m_OctaveDisplacement(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this)
{
}
REGISTER_DEFINITION(mei::Clef, "clef");
mei::Clef::~Clef() {}
mei::Clef::Clef(const Clef &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Facsimile(this),
    m_ClefLog(this),
    m_ClefShape(this),
    m_LineLoc(this),
    m_Octave(this),
    m_OctaveDisplacement(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this)
{
}

/* include <clef> */

mei::ClefGrp::ClefGrp() :
    MeiElement("clefGrp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::ClefGrp, "clefGrp");
mei::ClefGrp::~ClefGrp() {}
mei::ClefGrp::ClefGrp(const ClefGrp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Facsimile(this)
{
}

/* include <clefGrp> */

mei::ColLayout::ColLayout() :
    MeiElement("colLayout"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::ColLayout, "colLayout");
mei::ColLayout::~ColLayout() {}
mei::ColLayout::ColLayout(const ColLayout &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this)
{
}

MeiAttribute* mei::ColLayout::getCols() {
    if (!hasAttribute("cols")) {
        return NULL;
    }
    return getAttribute("cols");
};

void mei::ColLayout::setCols(std::string _cols) {
    MeiAttribute *a = new MeiAttribute("cols", _cols);
    addAttribute(a);
};

bool mei::ColLayout::hasCols() {
    return hasAttribute("cols");
};

void mei::ColLayout::removeCols() {
    removeAttribute("cols");
};
/* include <colLayout> */

mei::Composer::Composer() :
    MeiElement("composer"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Composer, "composer");
mei::Composer::~Composer() {}
mei::Composer::Composer(const Composer &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <composer> */

mei::Contributor::Contributor() :
    MeiElement("contributor"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Contributor, "contributor");
mei::Contributor::~Contributor() {}
mei::Contributor::Contributor(const Contributor &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Contributor::getRole() {
    if (!hasAttribute("role")) {
        return NULL;
    }
    return getAttribute("role");
};

void mei::Contributor::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    addAttribute(a);
};

bool mei::Contributor::hasRole() {
    return hasAttribute("role");
};

void mei::Contributor::removeRole() {
    removeAttribute("role");
};
/* include <contributor> */

mei::Creation::Creation() :
    MeiElement("creation"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Creation, "creation");
mei::Creation::~Creation() {}
mei::Creation::Creation(const Creation &other) :
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
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <creation> */

mei::Custos::Custos() :
    MeiElement("custos"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Source(this),
    m_CustosLog(this),
    m_Accidental(this),
    m_Pitch(this),
    m_Octave(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::Custos, "custos");
mei::Custos::~Custos() {}
mei::Custos::Custos(const Custos &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Source(this),
    m_CustosLog(this),
    m_Accidental(this),
    m_Pitch(this),
    m_Octave(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this)
{
}

/* include <custos> */

mei::Date::Date() :
    MeiElement("date"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Calendared(this),
    m_Datable(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Date, "date");
mei::Date::~Date() {}
mei::Date::Date(const Date &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Calendared(this),
    m_Datable(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <date> */

mei::Dedicatee::Dedicatee() :
    MeiElement("dedicatee"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Dedicatee, "dedicatee");
mei::Dedicatee::~Dedicatee() {}
mei::Dedicatee::Dedicatee(const Dedicatee &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <dedicatee> */

mei::Depth::Depth() :
    MeiElement("depth"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Depth, "depth");
mei::Depth::~Depth() {}
mei::Depth::Depth(const Depth &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}

/* include <depth> */

mei::Desc::Desc() :
    MeiElement("desc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::Desc, "desc");
mei::Desc::~Desc() {}
mei::Desc::Desc(const Desc &other) :
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
    m_Source(this)
{
}

/* include <desc> */

mei::Dim::Dim() :
    MeiElement("dim"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Dim, "dim");
mei::Dim::~Dim() {}
mei::Dim::Dim(const Dim &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}

MeiAttribute* mei::Dim::getForm() {
    if (!hasAttribute("form")) {
        return NULL;
    }
    return getAttribute("form");
};

void mei::Dim::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::Dim::hasForm() {
    return hasAttribute("form");
};

void mei::Dim::removeForm() {
    removeAttribute("form");
};
/* include <dim> */

mei::Dimensions::Dimensions() :
    MeiElement("dimensions"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Lang(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Dimensions, "dimensions");
mei::Dimensions::~Dimensions() {}
mei::Dimensions::Dimensions(const Dimensions &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Lang(this),
    m_Measurement(this)
{
}

/* include <dimensions> */

mei::Dir::Dir() :
    MeiElement("dir"),
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
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::Dir, "dir");
mei::Dir::~Dir() {}
mei::Dir::Dir(const Dir &other) :
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
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}

/* include <dir> */

mei::Distributor::Distributor() :
    MeiElement("distributor"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Distributor, "distributor");
mei::Distributor::~Distributor() {}
mei::Distributor::Distributor(const Distributor &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <distributor> */

mei::Div::Div() :
    MeiElement("div"),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Div, "div");
mei::Div::~Div() {}
mei::Div::Div(const Div &other) :
    MeiElement(other),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Div::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::Div::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Div::hasType() {
    return hasAttribute("type");
};

void mei::Div::removeType() {
    removeAttribute("type");
};
/* include <div> */

mei::Dot::Dot() :
    MeiElement("dot"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DotLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Dot, "dot");
mei::Dot::~Dot() {}
mei::Dot::Dot(const Dot &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DotLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <dot> */

mei::Dynam::Dynam() :
    MeiElement("dynam"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
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
    m_DurationGestural(this),
    m_MidiValue(this),
    m_MidiValue2(this),
    m_Timestamp2Gestural(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Dynam, "dynam");
mei::Dynam::~Dynam() {}
mei::Dynam::Dynam(const Dynam &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
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
    m_DurationGestural(this),
    m_MidiValue(this),
    m_MidiValue2(this),
    m_Timestamp2Gestural(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <dynam> */

mei::Edition::Edition() :
    MeiElement("edition"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Edition, "edition");
mei::Edition::~Edition() {}
mei::Edition::Edition(const Edition &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <edition> */

mei::Editor::Editor() :
    MeiElement("editor"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Editor, "editor");
mei::Editor::~Editor() {}
mei::Editor::Editor(const Editor &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <editor> */

mei::Ending::Ending() :
    MeiElement("ending"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Ending, "ending");
mei::Ending::~Ending() {}
mei::Ending::Ending(const Ending &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LineRend(this),
    m_LineRendBase(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

/* include <ending> */

mei::Event::Event() :
    MeiElement("event"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Calendared(this),
    m_Datable(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Event, "event");
mei::Event::~Event() {}
mei::Event::Event(const Event &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Calendared(this),
    m_Datable(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <event> */

mei::EventList::EventList() :
    MeiElement("eventList"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::EventList, "eventList");
mei::EventList::~EventList() {}
mei::EventList::EventList(const EventList &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <eventList> */

mei::Expansion::Expansion() :
    MeiElement("expansion"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Plist(this),
    m_Source(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Expansion, "expansion");
mei::Expansion::~Expansion() {}
mei::Expansion::Expansion(const Expansion &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Plist(this),
    m_Source(this),
    m_TargetEval(this)
{
}

/* include <expansion> */

mei::Extent::Extent() :
    MeiElement("extent"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Extent, "extent");
mei::Extent::~Extent() {}
mei::Extent::Extent(const Extent &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}

/* include <extent> */

mei::Funder::Funder() :
    MeiElement("funder"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Funder, "funder");
mei::Funder::~Funder() {}
mei::Funder::Funder(const Funder &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <funder> */

mei::Genre::Genre() :
    MeiElement("genre"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Genre, "genre");
mei::Genre::~Genre() {}
mei::Genre::Genre(const Genre &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <genre> */

mei::Group::Group() :
    MeiElement("group"),
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
REGISTER_DEFINITION(mei::Group, "group");
mei::Group::~Group() {}
mei::Group::Group(const Group &other) :
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

/* include <group> */

mei::GrpSym::GrpSym() :
    MeiElement("grpSym"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_GrpSymLog(this),
    m_StaffGroupingSym(this),
    m_StartEndId(this),
    m_StartId(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::GrpSym, "grpSym");
mei::GrpSym::~GrpSym() {}
mei::GrpSym::GrpSym(const GrpSym &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_GrpSymLog(this),
    m_StaffGroupingSym(this),
    m_StartEndId(this),
    m_StartId(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <grpSym> */

mei::Head::Head() :
    MeiElement("head"),
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
REGISTER_DEFINITION(mei::Head, "head");
mei::Head::~Head() {}
mei::Head::Head(const Head &other) :
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

/* include <head> */

mei::Height::Height() :
    MeiElement("height"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Height, "height");
mei::Height::~Height() {}
mei::Height::Height(const Height &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}

/* include <height> */

mei::Identifier::Identifier() :
    MeiElement("identifier"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Identifier, "identifier");
mei::Identifier::~Identifier() {}
mei::Identifier::Identifier(const Identifier &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <identifier> */

mei::Imprint::Imprint() :
    MeiElement("imprint"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Imprint, "imprint");
mei::Imprint::~Imprint() {}
mei::Imprint::Imprint(const Imprint &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <imprint> */

mei::Incip::Incip() :
    MeiElement("incip"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Incip, "incip");
mei::Incip::~Incip() {}
mei::Incip::Incip(const Incip &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this)
{
}

/* include <incip> */

mei::KeyAccid::KeyAccid() :
    MeiElement("keyAccid"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Accidental(this),
    m_Pitch(this),
    m_Octave(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::KeyAccid, "keyAccid");
mei::KeyAccid::~KeyAccid() {}
mei::KeyAccid::KeyAccid(const KeyAccid &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Accidental(this),
    m_Pitch(this),
    m_Octave(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Xy(this)
{
}

MeiAttribute* mei::KeyAccid::getForm() {
    if (!hasAttribute("form")) {
        return NULL;
    }
    return getAttribute("form");
};

void mei::KeyAccid::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::KeyAccid::hasForm() {
    return hasAttribute("form");
};

void mei::KeyAccid::removeForm() {
    removeAttribute("form");
};
/* include <keyAccid> */

mei::KeySig::KeySig() :
    MeiElement("keySig"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_KeySigAnl(this),
    m_Accidental(this),
    m_Pitch(this),
    m_KeySigLog(this),
    m_KeySigVis(this),
    m_Color(this),
    m_Visibility(this)
{
}
REGISTER_DEFINITION(mei::KeySig, "keySig");
mei::KeySig::~KeySig() {}
mei::KeySig::KeySig(const KeySig &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_KeySigAnl(this),
    m_Accidental(this),
    m_Pitch(this),
    m_KeySigLog(this),
    m_KeySigVis(this),
    m_Color(this),
    m_Visibility(this)
{
}

/* include <keySig> */

mei::Label::Label() :
    MeiElement("label"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::Label, "label");
mei::Label::~Label() {}
mei::Label::Label(const Label &other) :
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
    m_Source(this)
{
}

/* include <label> */

mei::LabelAbbr::LabelAbbr() :
    MeiElement("labelAbbr"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::LabelAbbr, "labelAbbr");
mei::LabelAbbr::~LabelAbbr() {}
mei::LabelAbbr::LabelAbbr(const LabelAbbr &other) :
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
    m_Source(this)
{
}

/* include <labelAbbr> */

mei::Layer::Layer() :
    MeiElement("layer"),
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
REGISTER_DEFINITION(mei::Layer, "layer");
mei::Layer::~Layer() {}
mei::Layer::Layer(const Layer &other) :
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

/* include <layer> */

mei::LayerDef::LayerDef() :
    MeiElement("layerDef"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DurationDefault(this),
    m_BeamingLog(this),
    m_OctaveDefault(this),
    m_Transposition(this),
    m_BeamingVis(this),
    m_TextStyle(this),
    m_Visibility(this),
    m_InstrumentIdent(this)
{
}
REGISTER_DEFINITION(mei::LayerDef, "layerDef");
mei::LayerDef::~LayerDef() {}
mei::LayerDef::LayerDef(const LayerDef &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DurationDefault(this),
    m_BeamingLog(this),
    m_OctaveDefault(this),
    m_Transposition(this),
    m_BeamingVis(this),
    m_TextStyle(this),
    m_Visibility(this),
    m_InstrumentIdent(this)
{
}

/* include <layerDef> */

mei::Lb::Lb() :
    MeiElement("lb"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::Lb, "lb");
mei::Lb::~Lb() {}
mei::Lb::Lb(const Lb &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Source(this)
{
}

/* include <lb> */

mei::Lg::Lg() :
    MeiElement("lg"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_StaffIdent(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_MetadataPointing(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Lg, "lg");
mei::Lg::~Lg() {}
mei::Lg::Lg(const Lg &other) :
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
    m_LayerIdent(this),
    m_PartIdent(this),
    m_StaffIdent(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_MetadataPointing(this),
    m_Xy(this)
{
}

/* include <lg> */

mei::Librettist::Librettist() :
    MeiElement("librettist"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Librettist, "librettist");
mei::Librettist::~Librettist() {}
mei::Librettist::Librettist(const Librettist &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <librettist> */

mei::Lyricist::Lyricist() :
    MeiElement("lyricist"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Lyricist, "lyricist");
mei::Lyricist::~Lyricist() {}
mei::Lyricist::Lyricist(const Lyricist &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <lyricist> */

mei::Mdiv::Mdiv() :
    MeiElement("mdiv"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_MdivGes(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Mdiv, "mdiv");
mei::Mdiv::~Mdiv() {}
mei::Mdiv::Mdiv(const Mdiv &other) :
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
    m_MdivGes(this),
    m_Alignment(this)
{
}

/* include <mdiv> */

mei::Mei::Mei() :
    MeiElement("mei"),
    m_MeiVersion(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Mei, "mei");
mei::Mei::~Mei() {}
mei::Mei::Mei(const Mei &other) :
    MeiElement(other),
    m_MeiVersion(this),
    m_Responsibility(this)
{
}

/* include <mei> */

mei::Monogr::Monogr() :
    MeiElement("monogr"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Monogr, "monogr");
mei::Monogr::~Monogr() {}
mei::Monogr::Monogr(const Monogr &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Pointing(this),
    m_RecordType(this),
    m_TargetEval(this)
{
}

/* include <monogr> */

mei::Music::Music() :
    MeiElement("music"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MeiVersion(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Music, "music");
mei::Music::~Music() {}
mei::Music::Music(const Music &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MeiVersion(this),
    m_MetadataPointing(this)
{
}

/* include <music> */

mei::Name::Name() :
    MeiElement("name"),
    m_Basic(this),
    m_Bibl(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Name, "name");
mei::Name::~Name() {}
mei::Name::Name(const Name &other) :
    MeiElement(other),
    m_Basic(this),
    m_Bibl(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Name::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::Name::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Name::hasType() {
    return hasAttribute("type");
};

void mei::Name::removeType() {
    removeAttribute("type");
};
/* include <name> */

mei::Note::Note() :
    MeiElement("note"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AugmentDots(this),
    m_Coloration(this),
    m_Cue(this),
    m_DurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Graced(this),
    m_Pitch(this),
    m_Octave(this),
    m_DurationQuality(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_NoteHeads(this),
    m_StaffLoc(this),
    m_Stems(this),
    m_StemsCmn(this),
    m_StemsMensural(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_Xy(this),
    m_BeamSecondary(this),
    m_NoteVisMensural(this),
    m_NoteGes(this),
    m_AccidentalGestural(this),
    m_ArticulationGestural(this),
    m_DurationGestural(this),
    m_InstrumentIdent(this),
    m_MidiVelocity(this),
    m_DurationRatio(this),
    m_Stringtab(this),
    m_Accidental(this),
    m_Articulation(this),
    m_HarmonicFunction(this),
    m_IntervalMelodic(this),
    m_MelodicFunction(this),
    m_BeamPresent(this),
    m_GlissPresent(this),
    m_LvPresent(this),
    m_OrnamPresent(this),
    m_SlurPresent(this),
    m_SylText(this),
    m_TiePresent(this),
    m_TupletPresent(this),
    m_FermataPresent(this),
    m_PitchClass(this),
    m_Solfa(this)
{
}
REGISTER_DEFINITION(mei::Note, "note");
mei::Note::~Note() {}
mei::Note::Note(const Note &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AugmentDots(this),
    m_Coloration(this),
    m_Cue(this),
    m_DurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Graced(this),
    m_Pitch(this),
    m_Octave(this),
    m_DurationQuality(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_NoteHeads(this),
    m_StaffLoc(this),
    m_Stems(this),
    m_StemsCmn(this),
    m_StemsMensural(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_Xy(this),
    m_BeamSecondary(this),
    m_NoteVisMensural(this),
    m_NoteGes(this),
    m_AccidentalGestural(this),
    m_ArticulationGestural(this),
    m_DurationGestural(this),
    m_InstrumentIdent(this),
    m_MidiVelocity(this),
    m_DurationRatio(this),
    m_Stringtab(this),
    m_Accidental(this),
    m_Articulation(this),
    m_HarmonicFunction(this),
    m_IntervalMelodic(this),
    m_MelodicFunction(this),
    m_BeamPresent(this),
    m_GlissPresent(this),
    m_LvPresent(this),
    m_OrnamPresent(this),
    m_SlurPresent(this),
    m_SylText(this),
    m_TiePresent(this),
    m_TupletPresent(this),
    m_FermataPresent(this),
    m_PitchClass(this),
    m_Solfa(this)
{
}

/* include <note> */

mei::Num::Num() :
    MeiElement("num"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Measurement(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Num, "num");
mei::Num::~Num() {}
mei::Num::Num(const Num &other) :
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
    m_Measurement(this),
    m_Ranging(this)
{
}

MeiAttribute* mei::Num::getValue() {
    if (!hasAttribute("value")) {
        return NULL;
    }
    return getAttribute("value");
};

void mei::Num::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Num::hasValue() {
    return hasAttribute("value");
};

void mei::Num::removeValue() {
    removeAttribute("value");
};
/* include <num> */

mei::Ornam::Ornam() :
    MeiElement("ornam"),
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
    m_PlacementRelStaff(this),
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
REGISTER_DEFINITION(mei::Ornam, "ornam");
mei::Ornam::~Ornam() {}
mei::Ornam::Ornam(const Ornam &other) :
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
    m_PlacementRelStaff(this),
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

/* include <ornam> */

mei::P::P() :
    MeiElement("p"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::P, "p");
mei::P::~P() {}
mei::P::P(const P &other) :
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
    m_MetadataPointing(this),
    m_Xy(this)
{
}

/* include <p> */

mei::Pad::Pad() :
    MeiElement("pad"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Width(this)
{
}
REGISTER_DEFINITION(mei::Pad, "pad");
mei::Pad::~Pad() {}
mei::Pad::Pad(const Pad &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_Width(this)
{
}

/* include <pad> */

mei::Part::Part() :
    MeiElement("part"),
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
REGISTER_DEFINITION(mei::Part, "part");
mei::Part::~Part() {}
mei::Part::Part(const Part &other) :
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

/* include <part> */

mei::Parts::Parts() :
    MeiElement("parts"),
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
REGISTER_DEFINITION(mei::Parts, "parts");
mei::Parts::~Parts() {}
mei::Parts::Parts(const Parts &other) :
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

/* include <parts> */

mei::Pb::Pb() :
    MeiElement("pb"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Source(this),
    m_Alignment(this),
    m_PbVis(this)
{
}
REGISTER_DEFINITION(mei::Pb, "pb");
mei::Pb::~Pb() {}
mei::Pb::Pb(const Pb &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Source(this),
    m_Alignment(this),
    m_PbVis(this)
{
}

/* include <pb> */

mei::PgDesc::PgDesc() :
    MeiElement("pgDesc"),
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
REGISTER_DEFINITION(mei::PgDesc, "pgDesc");
mei::PgDesc::~PgDesc() {}
mei::PgDesc::PgDesc(const PgDesc &other) :
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

/* include <pgDesc> */

mei::PgFoot::PgFoot() :
    MeiElement("pgFoot"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgFoot, "pgFoot");
mei::PgFoot::~PgFoot() {}
mei::PgFoot::PgFoot(const PgFoot &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::PgFoot::getHalign() {
    if (!hasAttribute("halign")) {
        return NULL;
    }
    return getAttribute("halign");
};

void mei::PgFoot::setHalign(std::string _halign) {
    MeiAttribute *a = new MeiAttribute("halign", _halign);
    addAttribute(a);
};

bool mei::PgFoot::hasHalign() {
    return hasAttribute("halign");
};

void mei::PgFoot::removeHalign() {
    removeAttribute("halign");
};
/* include <pgFoot> */

mei::PgFoot2::PgFoot2() :
    MeiElement("pgFoot2"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgFoot2, "pgFoot2");
mei::PgFoot2::~PgFoot2() {}
mei::PgFoot2::PgFoot2(const PgFoot2 &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::PgFoot2::getHalign() {
    if (!hasAttribute("halign")) {
        return NULL;
    }
    return getAttribute("halign");
};

void mei::PgFoot2::setHalign(std::string _halign) {
    MeiAttribute *a = new MeiAttribute("halign", _halign);
    addAttribute(a);
};

bool mei::PgFoot2::hasHalign() {
    return hasAttribute("halign");
};

void mei::PgFoot2::removeHalign() {
    removeAttribute("halign");
};
/* include <pgFoot2> */

mei::PgHead::PgHead() :
    MeiElement("pgHead"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgHead, "pgHead");
mei::PgHead::~PgHead() {}
mei::PgHead::PgHead(const PgHead &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::PgHead::getHalign() {
    if (!hasAttribute("halign")) {
        return NULL;
    }
    return getAttribute("halign");
};

void mei::PgHead::setHalign(std::string _halign) {
    MeiAttribute *a = new MeiAttribute("halign", _halign);
    addAttribute(a);
};

bool mei::PgHead::hasHalign() {
    return hasAttribute("halign");
};

void mei::PgHead::removeHalign() {
    removeAttribute("halign");
};
/* include <pgHead> */

mei::PgHead2::PgHead2() :
    MeiElement("pgHead2"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PgHead2, "pgHead2");
mei::PgHead2::~PgHead2() {}
mei::PgHead2::PgHead2(const PgHead2 &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::PgHead2::getHalign() {
    if (!hasAttribute("halign")) {
        return NULL;
    }
    return getAttribute("halign");
};

void mei::PgHead2::setHalign(std::string _halign) {
    MeiAttribute *a = new MeiAttribute("halign", _halign);
    addAttribute(a);
};

bool mei::PgHead2::hasHalign() {
    return hasAttribute("halign");
};

void mei::PgHead2::removeHalign() {
    removeAttribute("halign");
};
/* include <pgHead2> */

mei::Phrase::Phrase() :
    MeiElement("phrase"),
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
REGISTER_DEFINITION(mei::Phrase, "phrase");
mei::Phrase::~Phrase() {}
mei::Phrase::Phrase(const Phrase &other) :
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

/* include <phrase> */

mei::PhysLoc::PhysLoc() :
    MeiElement("physLoc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::PhysLoc, "physLoc");
mei::PhysLoc::~PhysLoc() {}
mei::PhysLoc::PhysLoc(const PhysLoc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <physLoc> */

mei::PubPlace::PubPlace() :
    MeiElement("pubPlace"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PubPlace, "pubPlace");
mei::PubPlace::~PubPlace() {}
mei::PubPlace::PubPlace(const PubPlace &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <pubPlace> */

mei::Publisher::Publisher() :
    MeiElement("publisher"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Publisher, "publisher");
mei::Publisher::~Publisher() {}
mei::Publisher::Publisher(const Publisher &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <publisher> */

mei::Recipient::Recipient() :
    MeiElement("recipient"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Recipient, "recipient");
mei::Recipient::~Recipient() {}
mei::Recipient::Recipient(const Recipient &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <recipient> */

mei::RelatedItem::RelatedItem() :
    MeiElement("relatedItem"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::RelatedItem, "relatedItem");
mei::RelatedItem::~RelatedItem() {}
mei::RelatedItem::RelatedItem(const RelatedItem &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

MeiAttribute* mei::RelatedItem::getRel() {
    if (!hasAttribute("rel")) {
        return NULL;
    }
    return getAttribute("rel");
};

void mei::RelatedItem::setRel(std::string _rel) {
    MeiAttribute *a = new MeiAttribute("rel", _rel);
    addAttribute(a);
};

bool mei::RelatedItem::hasRel() {
    return hasAttribute("rel");
};

void mei::RelatedItem::removeRel() {
    removeAttribute("rel");
};
/* include <relatedItem> */

mei::Relation::Relation() :
    MeiElement("relation"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Datable(this),
    m_Evidence(this),
    m_Plist(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Relation, "relation");
mei::Relation::~Relation() {}
mei::Relation::Relation(const Relation &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Datable(this),
    m_Evidence(this),
    m_Plist(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

MeiAttribute* mei::Relation::getRel() {
    if (!hasAttribute("rel")) {
        return NULL;
    }
    return getAttribute("rel");
};

void mei::Relation::setRel(std::string _rel) {
    MeiAttribute *a = new MeiAttribute("rel", _rel);
    addAttribute(a);
};

bool mei::Relation::hasRel() {
    return hasAttribute("rel");
};

void mei::Relation::removeRel() {
    removeAttribute("rel");
};
/* include <relation> */

mei::RelationList::RelationList() :
    MeiElement("relationList"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::RelationList, "relationList");
mei::RelationList::~RelationList() {}
mei::RelationList::RelationList(const RelationList &other) :
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

/* include <relationList> */

mei::Rend::Rend() :
    MeiElement("rend"),
    m_Color(this),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_HorizontalAlign(this),
    m_Lang(this),
    m_TextRendition(this),
    m_Typography(this),
    m_VerticalAlign(this),
    m_Whitespace(this)
{
}
REGISTER_DEFINITION(mei::Rend, "rend");
mei::Rend::~Rend() {}
mei::Rend::Rend(const Rend &other) :
    MeiElement(other),
    m_Color(this),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_HorizontalAlign(this),
    m_Lang(this),
    m_TextRendition(this),
    m_Typography(this),
    m_VerticalAlign(this),
    m_Whitespace(this)
{
}

MeiAttribute* mei::Rend::getRotation() {
    if (!hasAttribute("rotation")) {
        return NULL;
    }
    return getAttribute("rotation");
};

void mei::Rend::setRotation(std::string _rotation) {
    MeiAttribute *a = new MeiAttribute("rotation", _rotation);
    addAttribute(a);
};

bool mei::Rend::hasRotation() {
    return hasAttribute("rotation");
};

void mei::Rend::removeRotation() {
    removeAttribute("rotation");
};
/* include <rend> */

mei::Repository::Repository() :
    MeiElement("repository"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this)
{
}
REGISTER_DEFINITION(mei::Repository, "repository");
mei::Repository::~Repository() {}
mei::Repository::Repository(const Repository &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this)
{
}

/* include <repository> */

mei::Resp::Resp() :
    MeiElement("resp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Datable(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Resp, "resp");
mei::Resp::~Resp() {}
mei::Resp::Resp(const Resp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Bibl(this),
    m_Datable(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <resp> */

mei::RespStmt::RespStmt() :
    MeiElement("respStmt"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::RespStmt, "respStmt");
mei::RespStmt::~RespStmt() {}
mei::RespStmt::RespStmt(const RespStmt &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

/* include <respStmt> */

mei::Rest::Rest() :
    MeiElement("rest"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AugmentDots(this),
    m_Cue(this),
    m_RestdurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_BeamSecondary(this),
    m_RestVisMensural(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_DurationRatio(this),
    m_BeamPresent(this),
    m_FermataPresent(this),
    m_TupletPresent(this)
{
}
REGISTER_DEFINITION(mei::Rest, "rest");
mei::Rest::~Rest() {}
mei::Rest::Rest(const Rest &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AugmentDots(this),
    m_Cue(this),
    m_RestdurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_BeamSecondary(this),
    m_RestVisMensural(this),
    m_StaffLoc(this),
    m_StaffLocPitched(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_DurationGestural(this),
    m_DurationRatio(this),
    m_BeamPresent(this),
    m_FermataPresent(this),
    m_TupletPresent(this)
{
}

/* include <rest> */

mei::Role::Role() :
    MeiElement("role"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Role, "role");
mei::Role::~Role() {}
mei::Role::Role(const Role &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <role> */

mei::RoleDesc::RoleDesc() :
    MeiElement("roleDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::RoleDesc, "roleDesc");
mei::RoleDesc::~RoleDesc() {}
mei::RoleDesc::RoleDesc(const RoleDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <roleDesc> */

mei::Sb::Sb() :
    MeiElement("sb"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Source(this),
    m_Alignment(this),
    m_SbVis(this),
    m_AltSym(this),
    m_ExtSym(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::Sb, "sb");
mei::Sb::~Sb() {}
mei::Sb::Sb(const Sb &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Source(this),
    m_Alignment(this),
    m_SbVis(this),
    m_AltSym(this),
    m_ExtSym(this),
    m_Typography(this)
{
}

/* include <sb> */

mei::Score::Score() :
    MeiElement("score"),
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
REGISTER_DEFINITION(mei::Score, "score");
mei::Score::~Score() {}
mei::Score::Score(const Score &other) :
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

/* include <score> */

mei::ScoreDef::ScoreDef() :
    MeiElement("scoreDef"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_OctaveDefault(this),
    m_Transposition(this),
    m_BeamingLog(this),
    m_MensuralLog(this),
    m_MensuralShared(this),
    m_ScoreDefVis(this),
    m_Barring(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_Endings(this),
    m_KeySigDefaultVis(this),
    m_LyricStyle(this),
    m_MeasureNumbers(this),
    m_MeterSigDefaultVis(this),
    m_MultinumMeasures(this),
    m_NotationStyle(this),
    m_OneLineStaff(this),
    m_Optimization(this),
    m_Pages(this),
    m_Spacing(this),
    m_StaffItems(this),
    m_Systems(this),
    m_TextStyle(this),
    m_ScoreDefVisCmn(this),
    m_BeamingVis(this),
    m_PianoPedals(this),
    m_Rehearsal(this),
    m_SlurRend(this),
    m_TieRend(this),
    m_MensuralVis(this),
    m_ScoreDefGes(this),
    m_Channelized(this),
    m_TimeBase(this),
    m_MidiTempo(this),
    m_MmTempo(this),
    m_KeySigDefaultAnl(this)
{
}
REGISTER_DEFINITION(mei::ScoreDef, "scoreDef");
mei::ScoreDef::~ScoreDef() {}
mei::ScoreDef::ScoreDef(const ScoreDef &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_OctaveDefault(this),
    m_Transposition(this),
    m_BeamingLog(this),
    m_MensuralLog(this),
    m_MensuralShared(this),
    m_ScoreDefVis(this),
    m_Barring(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_Endings(this),
    m_KeySigDefaultVis(this),
    m_LyricStyle(this),
    m_MeasureNumbers(this),
    m_MeterSigDefaultVis(this),
    m_MultinumMeasures(this),
    m_NotationStyle(this),
    m_OneLineStaff(this),
    m_Optimization(this),
    m_Pages(this),
    m_Spacing(this),
    m_StaffItems(this),
    m_Systems(this),
    m_TextStyle(this),
    m_ScoreDefVisCmn(this),
    m_BeamingVis(this),
    m_PianoPedals(this),
    m_Rehearsal(this),
    m_SlurRend(this),
    m_TieRend(this),
    m_MensuralVis(this),
    m_ScoreDefGes(this),
    m_Channelized(this),
    m_TimeBase(this),
    m_MidiTempo(this),
    m_MmTempo(this),
    m_KeySigDefaultAnl(this)
{
}

/* include <scoreDef> */

mei::Section::Section() :
    MeiElement("section"),
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
    m_SectionGes(this),
    m_Alignment(this),
    m_SectionVis(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Section, "section");
mei::Section::~Section() {}
mei::Section::Section(const Section &other) :
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
    m_SectionGes(this),
    m_Alignment(this),
    m_SectionVis(this),
    m_TargetEval(this)
{
}

/* include <section> */

mei::Series::Series() :
    MeiElement("series"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Series, "series");
mei::Series::~Series() {}
mei::Series::Series(const Series &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <series> */

mei::Space::Space() :
    MeiElement("space"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationQuality(this),
    m_AugmentDots(this),
    m_DurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_SpaceVis(this),
    m_Cutout(this),
    m_DurationGestural(this),
    m_BeamPresent(this),
    m_FermataPresent(this),
    m_TupletPresent(this)
{
}
REGISTER_DEFINITION(mei::Space, "space");
mei::Space::~Space() {}
mei::Space::Space(const Space &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_DurationQuality(this),
    m_AugmentDots(this),
    m_DurationLogical(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_TimestampGestural(this),
    m_TimestampLogical(this),
    m_SpaceVis(this),
    m_Cutout(this),
    m_DurationGestural(this),
    m_BeamPresent(this),
    m_FermataPresent(this),
    m_TupletPresent(this)
{
}

/* include <space> */

mei::Speaker::Speaker() :
    MeiElement("speaker"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Speaker, "speaker");
mei::Speaker::~Speaker() {}
mei::Speaker::Speaker(const Speaker &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <speaker> */

mei::Sponsor::Sponsor() :
    MeiElement("sponsor"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Sponsor, "sponsor");
mei::Sponsor::~Sponsor() {}
mei::Sponsor::Sponsor(const Sponsor &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <sponsor> */

mei::Stack::Stack() :
    MeiElement("stack"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Stack, "stack");
mei::Stack::~Stack() {}
mei::Stack::Stack(const Stack &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Stack::getDelim() {
    if (!hasAttribute("delim")) {
        return NULL;
    }
    return getAttribute("delim");
};

void mei::Stack::setDelim(std::string _delim) {
    MeiAttribute *a = new MeiAttribute("delim", _delim);
    addAttribute(a);
};

bool mei::Stack::hasDelim() {
    return hasAttribute("delim");
};

void mei::Stack::removeDelim() {
    removeAttribute("delim");
};
MeiAttribute* mei::Stack::getAlign() {
    if (!hasAttribute("align")) {
        return NULL;
    }
    return getAttribute("align");
};

void mei::Stack::setAlign(std::string _align) {
    MeiAttribute *a = new MeiAttribute("align", _align);
    addAttribute(a);
};

bool mei::Stack::hasAlign() {
    return hasAttribute("align");
};

void mei::Stack::removeAlign() {
    removeAttribute("align");
};
/* include <stack> */

mei::Staff::Staff() :
    MeiElement("staff"),
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
REGISTER_DEFINITION(mei::Staff, "staff");
mei::Staff::~Staff() {}
mei::Staff::Staff(const Staff &other) :
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

/* include <staff> */

mei::StaffDef::StaffDef() :
    MeiElement("staffDef"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StaffDefLog(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_NotationType(this),
    m_OctaveDefault(this),
    m_Transposition(this),
    m_BeamingLog(this),
    m_MensuralLog(this),
    m_MensuralShared(this),
    m_StaffDefVis(this),
    m_Barring(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LyricStyle(this),
    m_MeterSigDefaultVis(this),
    m_MultinumMeasures(this),
    m_NotationStyle(this),
    m_OneLineStaff(this),
    m_Scalable(this),
    m_StaffItems(this),
    m_TextStyle(this),
    m_Visibility(this),
    m_BeamingVis(this),
    m_PianoPedals(this),
    m_Rehearsal(this),
    m_SlurRend(this),
    m_TieRend(this),
    m_MensuralVis(this),
    m_InstrumentIdent(this),
    m_StringtabTuning(this),
    m_TimeBase(this),
    m_KeySigDefaultAnl(this)
{
}
REGISTER_DEFINITION(mei::StaffDef, "staffDef");
mei::StaffDef::~StaffDef() {}
mei::StaffDef::StaffDef(const StaffDef &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_MetadataPointing(this),
    m_NInteger(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StaffDefLog(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeySigDefaultLog(this),
    m_MeterSigDefaultLog(this),
    m_NotationType(this),
    m_OctaveDefault(this),
    m_Transposition(this),
    m_BeamingLog(this),
    m_MensuralLog(this),
    m_MensuralShared(this),
    m_StaffDefVis(this),
    m_Barring(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeySigDefaultVis(this),
    m_LyricStyle(this),
    m_MeterSigDefaultVis(this),
    m_MultinumMeasures(this),
    m_NotationStyle(this),
    m_OneLineStaff(this),
    m_Scalable(this),
    m_StaffItems(this),
    m_TextStyle(this),
    m_Visibility(this),
    m_BeamingVis(this),
    m_PianoPedals(this),
    m_Rehearsal(this),
    m_SlurRend(this),
    m_TieRend(this),
    m_MensuralVis(this),
    m_InstrumentIdent(this),
    m_StringtabTuning(this),
    m_TimeBase(this),
    m_KeySigDefaultAnl(this)
{
}

/* include <staffDef> */

mei::StaffGrp::StaffGrp() :
    MeiElement("staffGrp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_StaffGrpVis(this),
    m_Barring(this),
    m_StaffGroupingSym(this),
    m_Visibility(this),
    m_InstrumentIdent(this)
{
}
REGISTER_DEFINITION(mei::StaffGrp, "staffGrp");
mei::StaffGrp::~StaffGrp() {}
mei::StaffGrp::StaffGrp(const StaffGrp &other) :
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
    m_StaffGrpVis(this),
    m_Barring(this),
    m_StaffGroupingSym(this),
    m_Visibility(this),
    m_InstrumentIdent(this)
{
}

/* include <staffGrp> */

mei::Syl::Syl() :
    MeiElement("syl"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_SylLog(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_HorizontalAlign(this)
{
}
REGISTER_DEFINITION(mei::Syl, "syl");
mei::Syl::~Syl() {}
mei::Syl::Syl(const Syl &other) :
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
    m_SylLog(this),
    m_PlacementRelStaff(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this),
    m_HorizontalAlign(this)
{
}

/* include <syl> */

mei::Symbol::Symbol() :
    MeiElement("symbol"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_StartId(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Scalable(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Symbol, "symbol");
mei::Symbol::~Symbol() {}
mei::Symbol::Symbol(const Symbol &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_StartId(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_Scalable(this),
    m_Typography(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_Xy(this)
{
}

/* include <symbol> */

mei::Tempo::Tempo() :
    MeiElement("tempo"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_TempoLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_MmTempo(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_PlacementRelStaff(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_MidiTempo(this)
{
}
REGISTER_DEFINITION(mei::Tempo, "tempo");
mei::Tempo::~Tempo() {}
mei::Tempo::Tempo(const Tempo &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this),
    m_TempoLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_TimestampLogical(this),
    m_TimestampGestural(this),
    m_MmTempo(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_PlacementRelStaff(this),
    m_VerticalGroup(this),
    m_VisualOffsetHo(this),
    m_VisualOffsetTo(this),
    m_VisualOffsetVo(this),
    m_VisualOffset2Ho(this),
    m_VisualOffset2To(this),
    m_Xy(this),
    m_MidiTempo(this)
{
}

/* include <tempo> */

mei::Term::Term() :
    MeiElement("term"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Term, "term");
mei::Term::~Term() {}
mei::Term::Term(const Term &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_DataPointing(this),
    m_Lang(this)
{
}

/* include <term> */

mei::TextLang::TextLang() :
    MeiElement("textLang"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::TextLang, "textLang");
mei::TextLang::~TextLang() {}
mei::TextLang::TextLang(const TextLang &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::TextLang::getLangMain() {
    if (!hasAttribute("lang.main")) {
        return NULL;
    }
    return getAttribute("lang.main");
};

void mei::TextLang::setLangMain(std::string _langmain) {
    MeiAttribute *a = new MeiAttribute("lang.main", _langmain);
    addAttribute(a);
};

bool mei::TextLang::hasLangMain() {
    return hasAttribute("lang.main");
};

void mei::TextLang::removeLangMain() {
    removeAttribute("lang.main");
};
MeiAttribute* mei::TextLang::getLangOther() {
    if (!hasAttribute("lang.other")) {
        return NULL;
    }
    return getAttribute("lang.other");
};

void mei::TextLang::setLangOther(std::string _langother) {
    MeiAttribute *a = new MeiAttribute("lang.other", _langother);
    addAttribute(a);
};

bool mei::TextLang::hasLangOther() {
    return hasAttribute("lang.other");
};

void mei::TextLang::removeLangOther() {
    removeAttribute("lang.other");
};
/* include <textLang> */

mei::Title::Title() :
    MeiElement("title"),
    m_Authorized(this),
    m_Canonical(this),
    m_Basic(this),
    m_Bibl(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Filing(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Title, "title");
mei::Title::~Title() {}
mei::Title::Title(const Title &other) :
    MeiElement(other),
    m_Authorized(this),
    m_Canonical(this),
    m_Basic(this),
    m_Bibl(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Filing(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Title::getLevel() {
    if (!hasAttribute("level")) {
        return NULL;
    }
    return getAttribute("level");
};

void mei::Title::setLevel(std::string _level) {
    MeiAttribute *a = new MeiAttribute("level", _level);
    addAttribute(a);
};

bool mei::Title::hasLevel() {
    return hasAttribute("level");
};

void mei::Title::removeLevel() {
    removeAttribute("level");
};
MeiAttribute* mei::Title::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::Title::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Title::hasType() {
    return hasAttribute("type");
};

void mei::Title::removeType() {
    removeAttribute("type");
};
/* include <title> */

mei::TitlePage::TitlePage() :
    MeiElement("titlePage"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::TitlePage, "titlePage");
mei::TitlePage::~TitlePage() {}
mei::TitlePage::TitlePage(const TitlePage &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <titlePage> */

mei::TitlePart::TitlePart() :
    MeiElement("titlePart"),
    m_Authorized(this),
    m_Canonical(this),
    m_Basic(this),
    m_Bibl(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Filing(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NInteger(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::TitlePart, "titlePart");
mei::TitlePart::~TitlePart() {}
mei::TitlePart::TitlePart(const TitlePart &other) :
    MeiElement(other),
    m_Authorized(this),
    m_Canonical(this),
    m_Basic(this),
    m_Bibl(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Filing(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NInteger(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::TitlePart::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::TitlePart::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::TitlePart::hasType() {
    return hasAttribute("type");
};

void mei::TitlePart::removeType() {
    removeAttribute("type");
};
/* include <titlePart> */

mei::Width::Width() :
    MeiElement("width"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Width, "width");
mei::Width::~Width() {}
mei::Width::Width(const Width &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this),
    m_Quantity(this),
    m_Measurement(this),
    m_Ranging(this)
{
}

/* include <width> */



