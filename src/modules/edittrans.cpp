#include "edittrans.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Abbr::Abbr() :
    MeiElement("abbr"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}
REGISTER_DEFINITION(mei::Abbr, "abbr");
mei::Abbr::~Abbr() {}
mei::Abbr::Abbr(const Abbr &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}

MeiAttribute* mei::Abbr::getExpan() {
    if (!hasAttribute("expan")) {
        return NULL;
    }
    return getAttribute("expan");
};

void mei::Abbr::setExpan(std::string _expan) {
    MeiAttribute *a = new MeiAttribute("expan", _expan);
    addAttribute(a);
};

bool mei::Abbr::hasExpan() {
    return hasAttribute("expan");
};

void mei::Abbr::removeExpan() {
    removeAttribute("expan");
};
/* include <abbr> */

mei::Add::Add() :
    MeiElement("add"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}
REGISTER_DEFINITION(mei::Add, "add");
mei::Add::~Add() {}
mei::Add::Add(const Add &other) :
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
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}

MeiAttribute* mei::Add::getPlace() {
    if (!hasAttribute("place")) {
        return NULL;
    }
    return getAttribute("place");
};

void mei::Add::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    addAttribute(a);
};

bool mei::Add::hasPlace() {
    return hasAttribute("place");
};

void mei::Add::removePlace() {
    removeAttribute("place");
};
/* include <add> */

mei::Choice::Choice() :
    MeiElement("choice"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::Choice, "choice");
mei::Choice::~Choice() {}
mei::Choice::Choice(const Choice &other) :
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

/* include <choice> */

mei::Corr::Corr() :
    MeiElement("corr"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}
REGISTER_DEFINITION(mei::Corr, "corr");
mei::Corr::~Corr() {}
mei::Corr::Corr(const Corr &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}

/* include <corr> */

mei::CpMark::CpMark() :
    MeiElement("cpMark"),
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
    m_OriginTimestampLogical(this),
    m_OriginStaffIdent(this),
    m_OriginLayerIdent(this),
    m_OriginStartEndId(this),
    m_OctaveDisplacement(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
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
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}
REGISTER_DEFINITION(mei::CpMark, "cpMark");
mei::CpMark::~CpMark() {}
mei::CpMark::CpMark(const CpMark &other) :
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
    m_OriginTimestampLogical(this),
    m_OriginStaffIdent(this),
    m_OriginLayerIdent(this),
    m_OriginStartEndId(this),
    m_OctaveDisplacement(this),
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
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
    m_DurationGestural(this),
    m_Timestamp2Gestural(this)
{
}

/* include <cpMark> */

mei::Damage::Damage() :
    MeiElement("damage"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_AgentIdent(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_HandIdent(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Damage, "damage");
mei::Damage::~Damage() {}
mei::Damage::Damage(const Damage &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_AgentIdent(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_HandIdent(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Damage::getDegree() {
    if (!hasAttribute("degree")) {
        return NULL;
    }
    return getAttribute("degree");
};

void mei::Damage::setDegree(std::string _degree) {
    MeiAttribute *a = new MeiAttribute("degree", _degree);
    addAttribute(a);
};

bool mei::Damage::hasDegree() {
    return hasAttribute("degree");
};

void mei::Damage::removeDegree() {
    removeAttribute("degree");
};
/* include <damage> */

mei::Del::Del() :
    MeiElement("del"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_TextRendition(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}
REGISTER_DEFINITION(mei::Del, "del");
mei::Del::~Del() {}
mei::Del::Del(const Del &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_TextRendition(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}

/* include <del> */

mei::Expan::Expan() :
    MeiElement("expan"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}
REGISTER_DEFINITION(mei::Expan, "expan");
mei::Expan::~Expan() {}
mei::Expan::Expan(const Expan &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}

MeiAttribute* mei::Expan::getAbbr() {
    if (!hasAttribute("abbr")) {
        return NULL;
    }
    return getAttribute("abbr");
};

void mei::Expan::setAbbr(std::string _abbr) {
    MeiAttribute *a = new MeiAttribute("abbr", _abbr);
    addAttribute(a);
};

bool mei::Expan::hasAbbr() {
    return hasAttribute("abbr");
};

void mei::Expan::removeAbbr() {
    removeAttribute("abbr");
};
/* include <expan> */

mei::Gap::Gap() :
    MeiElement("gap"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_HandIdent(this),
    m_ReasonIdent(this)
{
}
REGISTER_DEFINITION(mei::Gap, "gap");
mei::Gap::~Gap() {}
mei::Gap::Gap(const Gap &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_HandIdent(this),
    m_ReasonIdent(this)
{
}

/* include <gap> */

mei::HandShift::HandShift() :
    MeiElement("handShift"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Medium(this)
{
}
REGISTER_DEFINITION(mei::HandShift, "handShift");
mei::HandShift::~HandShift() {}
mei::HandShift::HandShift(const HandShift &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Medium(this)
{
}

MeiAttribute* mei::HandShift::getCharacter() {
    if (!hasAttribute("character")) {
        return NULL;
    }
    return getAttribute("character");
};

void mei::HandShift::setCharacter(std::string _character) {
    MeiAttribute *a = new MeiAttribute("character", _character);
    addAttribute(a);
};

bool mei::HandShift::hasCharacter() {
    return hasAttribute("character");
};

void mei::HandShift::removeCharacter() {
    removeAttribute("character");
};
MeiAttribute* mei::HandShift::getNew() {
    if (!hasAttribute("new")) {
        return NULL;
    }
    return getAttribute("new");
};

void mei::HandShift::setNew(std::string _new) {
    MeiAttribute *a = new MeiAttribute("new", _new);
    addAttribute(a);
};

bool mei::HandShift::hasNew() {
    return hasAttribute("new");
};

void mei::HandShift::removeNew() {
    removeAttribute("new");
};
MeiAttribute* mei::HandShift::getOld() {
    if (!hasAttribute("old")) {
        return NULL;
    }
    return getAttribute("old");
};

void mei::HandShift::setOld(std::string _old) {
    MeiAttribute *a = new MeiAttribute("old", _old);
    addAttribute(a);
};

bool mei::HandShift::hasOld() {
    return hasAttribute("old");
};

void mei::HandShift::removeOld() {
    removeAttribute("old");
};
/* include <handShift> */

mei::MetaMark::MetaMark() :
    MeiElement("metaMark"),
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Source(this),
    m_Evidence(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this),
    m_PlacementRelStaff(this),
    m_DurationGestural(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::MetaMark, "metaMark");
mei::MetaMark::~MetaMark() {}
mei::MetaMark::MetaMark(const MetaMark &other) :
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
    m_StartEndId(this),
    m_StartId(this),
    m_Timestamp2Logical(this),
    m_Source(this),
    m_Evidence(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this),
    m_PlacementRelStaff(this),
    m_DurationGestural(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::MetaMark::getFunction() {
    if (!hasAttribute("function")) {
        return NULL;
    }
    return getAttribute("function");
};

void mei::MetaMark::setFunction(std::string _function) {
    MeiAttribute *a = new MeiAttribute("function", _function);
    addAttribute(a);
};

bool mei::MetaMark::hasFunction() {
    return hasAttribute("function");
};

void mei::MetaMark::removeFunction() {
    removeAttribute("function");
};
/* include <metaMark> */

mei::Orig::Orig() :
    MeiElement("orig"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Orig, "orig");
mei::Orig::~Orig() {}
mei::Orig::Orig(const Orig &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <orig> */

mei::Reg::Reg() :
    MeiElement("reg"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Reg, "reg");
mei::Reg::~Reg() {}
mei::Reg::Reg(const Reg &other) :
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
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Lang(this)
{
}

/* include <reg> */

mei::Restore::Restore() :
    MeiElement("restore"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}
REGISTER_DEFINITION(mei::Restore, "restore");
mei::Restore::~Restore() {}
mei::Restore::Restore(const Restore &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}

MeiAttribute* mei::Restore::getDesc() {
    if (!hasAttribute("desc")) {
        return NULL;
    }
    return getAttribute("desc");
};

void mei::Restore::setDesc(std::string _desc) {
    MeiAttribute *a = new MeiAttribute("desc", _desc);
    addAttribute(a);
};

bool mei::Restore::hasDesc() {
    return hasAttribute("desc");
};

void mei::Restore::removeDesc() {
    removeAttribute("desc");
};
/* include <restore> */

mei::Sic::Sic() :
    MeiElement("sic"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Sic, "sic");
mei::Sic::~Sic() {}
mei::Sic::Sic(const Sic &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <sic> */

mei::Subst::Subst() :
    MeiElement("subst"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}
REGISTER_DEFINITION(mei::Subst, "subst");
mei::Subst::~Subst() {}
mei::Subst::Subst(const Subst &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Source(this),
    m_Evidence(this),
    m_GeneticState(this),
    m_HandIdent(this),
    m_MetadataPointing(this),
    m_Sequence(this)
{
}

/* include <subst> */

mei::Supplied::Supplied() :
    MeiElement("supplied"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_AgentIdent(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_ReasonIdent(this)
{
}
REGISTER_DEFINITION(mei::Supplied, "supplied");
mei::Supplied::~Supplied() {}
mei::Supplied::Supplied(const Supplied &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_AgentIdent(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_Lang(this),
    m_ReasonIdent(this)
{
}

/* include <supplied> */

mei::Unclear::Unclear() :
    MeiElement("unclear"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_AgentIdent(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_HandIdent(this),
    m_Lang(this),
    m_ReasonIdent(this)
{
}
REGISTER_DEFINITION(mei::Unclear, "unclear");
mei::Unclear::~Unclear() {}
mei::Unclear::Unclear(const Unclear &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_AgentIdent(this),
    m_Source(this),
    m_Evidence(this),
    m_Extent(this),
    m_Measurement(this),
    m_Ranging(this),
    m_Facsimile(this),
    m_HandIdent(this),
    m_Lang(this),
    m_ReasonIdent(this)
{
}

/* include <unclear> */



