#include "neumes.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::DivLine::DivLine() :
    MeiElement("divLine"),
    m_Basic(this),
    m_Classed(this),
    m_Color(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Visibility(this),
    m_Xy(this),
    m_VisualOffsetHo(this)
{
}
REGISTER_DEFINITION(mei::DivLine, "divLine");
mei::DivLine::~DivLine() {}
mei::DivLine::DivLine(const DivLine &other) :
    MeiElement(other),
    m_Basic(this),
    m_Classed(this),
    m_Color(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Visibility(this),
    m_Xy(this),
    m_VisualOffsetHo(this)
{
}

MeiAttribute* mei::DivLine::getForm() {
    if (!hasAttribute("form")) {
        return NULL;
    }
    return getAttribute("form");
};

void mei::DivLine::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::DivLine::hasForm() {
    return hasAttribute("form");
};

void mei::DivLine::removeForm() {
    removeAttribute("form");
};
/* include <divLine> */

mei::Episema::Episema() :
    MeiElement("episema"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_ArticulationGestural(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_EpisemaVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Episema, "episema");
mei::Episema::~Episema() {}
mei::Episema::Episema(const Episema &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_ArticulationGestural(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_PartIdent(this),
    m_Plist(this),
    m_StaffIdent(this),
    m_TargetEval(this),
    m_EpisemaVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <episema> */

mei::HispanTick::HispanTick() :
    MeiElement("hispanTick"),
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
    m_HispanTickVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::HispanTick, "hispanTick");
mei::HispanTick::~HispanTick() {}
mei::HispanTick::HispanTick(const HispanTick &other) :
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
    m_HispanTickVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <hispanTick> */

mei::Liquescent::Liquescent() :
    MeiElement("liquescent"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_LiquescentVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Liquescent, "liquescent");
mei::Liquescent::~Liquescent() {}
mei::Liquescent::Liquescent(const Liquescent &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_LiquescentVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <liquescent> */

mei::Nc::Nc() :
    MeiElement("nc"),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_HarmonicFunction(this),
    m_IntervalMelodic(this),
    m_MelodicFunction(this),
    m_PitchClass(this),
    m_Solfa(this),
    m_NcGes(this),
    m_AccidentalGestural(this),
    m_ArticulationGestural(this),
    m_DurationGestural(this),
    m_InstrumentIdent(this),
    m_MidiVelocity(this),
    m_NcLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_NcForm(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Nc, "nc");
mei::Nc::~Nc() {}
mei::Nc::Nc(const Nc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_HarmonicFunction(this),
    m_IntervalMelodic(this),
    m_MelodicFunction(this),
    m_PitchClass(this),
    m_Solfa(this),
    m_NcGes(this),
    m_AccidentalGestural(this),
    m_ArticulationGestural(this),
    m_DurationGestural(this),
    m_InstrumentIdent(this),
    m_MidiVelocity(this),
    m_NcLog(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_AltSym(this),
    m_Color(this),
    m_ExtSym(this),
    m_NcForm(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

MeiAttribute* mei::Nc::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::Nc::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Nc::hasType() {
    return hasAttribute("type");
};

void mei::Nc::removeType() {
    removeAttribute("type");
};
/* include <nc> */

mei::NcGrp::NcGrp() :
    MeiElement("ncGrp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_TimestampGestural(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_SylText(this),
    m_Color(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::NcGrp, "ncGrp");
mei::NcGrp::~NcGrp() {}
mei::NcGrp::NcGrp(const NcGrp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_TimestampGestural(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_SylText(this),
    m_Color(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <ncGrp> */

mei::Neume::Neume() :
    MeiElement("neume"),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_TimestampGestural(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_SylText(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Neume, "neume");
mei::Neume::~Neume() {}
mei::Neume::Neume(const Neume &other) :
    MeiElement(other),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_TimestampGestural(this),
    m_Alignment(this),
    m_LayerIdent(this),
    m_StaffIdent(this),
    m_SylText(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

MeiAttribute* mei::Neume::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::Neume::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Neume::hasType() {
    return hasAttribute("type");
};

void mei::Neume::removeType() {
    removeAttribute("type");
};
/* include <neume> */

mei::Oriscus::Oriscus() :
    MeiElement("oriscus"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Oriscus, "oriscus");
mei::Oriscus::~Oriscus() {}
mei::Oriscus::Oriscus(const Oriscus &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <oriscus> */

mei::Quilisma::Quilisma() :
    MeiElement("quilisma"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_QuilismaVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Quilisma, "quilisma");
mei::Quilisma::~Quilisma() {}
mei::Quilisma::Quilisma(const Quilisma &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_QuilismaVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <quilisma> */

mei::SignifLet::SignifLet() :
    MeiElement("signifLet"),
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
    m_SignifLetVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::SignifLet, "signifLet");
mei::SignifLet::~SignifLet() {}
mei::SignifLet::SignifLet(const SignifLet &other) :
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
    m_SignifLetVis(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <signifLet> */

mei::Strophicus::Strophicus() :
    MeiElement("strophicus"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Strophicus, "strophicus");
mei::Strophicus::~Strophicus() {}
mei::Strophicus::Strophicus(const Strophicus &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_AltSym(this),
    m_Color(this),
    m_EnclosingChars(this),
    m_ExtSym(this),
    m_StaffLoc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualOffsetHo(this),
    m_Xy(this)
{
}

/* include <strophicus> */

mei::Syllable::Syllable() :
    MeiElement("syllable"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Syllable, "syllable");
mei::Syllable::~Syllable() {}
mei::Syllable::Syllable(const Syllable &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Alignment(this)
{
}

/* include <syllable> */



