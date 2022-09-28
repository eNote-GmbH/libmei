#include "sharedmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AccidLogMixIn::AccidLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidLogMixIn::~AccidLogMixIn() {}
MeiAttribute* mei::AccidLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::AccidLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::AccidLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::AccidLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::AccidentalMixIn::AccidentalMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidentalMixIn::~AccidentalMixIn() {}
MeiAttribute* mei::AccidentalMixIn::getAccid() {
    if (!b->hasAttribute("accid")) {
        return NULL;
    }
    return b->getAttribute("accid");
};

void mei::AccidentalMixIn::setAccid(std::string _accid) {
    MeiAttribute *a = new MeiAttribute("accid", _accid);
    b->addAttribute(a);
};

bool mei::AccidentalMixIn::hasAccid() {
    return b->hasAttribute("accid");
};

void mei::AccidentalMixIn::removeAccid() {
    b->removeAttribute("accid");
};

/* include <accidmixin> */
mei::ArticulationMixIn::ArticulationMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArticulationMixIn::~ArticulationMixIn() {}
MeiAttribute* mei::ArticulationMixIn::getArtic() {
    if (!b->hasAttribute("artic")) {
        return NULL;
    }
    return b->getAttribute("artic");
};

void mei::ArticulationMixIn::setArtic(std::string _artic) {
    MeiAttribute *a = new MeiAttribute("artic", _artic);
    b->addAttribute(a);
};

bool mei::ArticulationMixIn::hasArtic() {
    return b->hasAttribute("artic");
};

void mei::ArticulationMixIn::removeArtic() {
    b->removeAttribute("artic");
};

/* include <articmixin> */
mei::AttaccaLogMixIn::AttaccaLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::AttaccaLogMixIn::~AttaccaLogMixIn() {}
MeiAttribute* mei::AttaccaLogMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        return NULL;
    }
    return b->getAttribute("target");
};

void mei::AttaccaLogMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    b->addAttribute(a);
};

bool mei::AttaccaLogMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::AttaccaLogMixIn::removeTarget() {
    b->removeAttribute("target");
};

/* include <targetmixin> */
mei::AudienceMixIn::AudienceMixIn(MeiElement *b) {
    this->b = b;
};

mei::AudienceMixIn::~AudienceMixIn() {}
MeiAttribute* mei::AudienceMixIn::getAudience() {
    if (!b->hasAttribute("audience")) {
        return NULL;
    }
    return b->getAttribute("audience");
};

void mei::AudienceMixIn::setAudience(std::string _audience) {
    MeiAttribute *a = new MeiAttribute("audience", _audience);
    b->addAttribute(a);
};

bool mei::AudienceMixIn::hasAudience() {
    return b->hasAttribute("audience");
};

void mei::AudienceMixIn::removeAudience() {
    b->removeAttribute("audience");
};

/* include <audiencemixin> */
mei::AugmentDotsMixIn::AugmentDotsMixIn(MeiElement *b) {
    this->b = b;
};

mei::AugmentDotsMixIn::~AugmentDotsMixIn() {}
MeiAttribute* mei::AugmentDotsMixIn::getDots() {
    if (!b->hasAttribute("dots")) {
        return NULL;
    }
    return b->getAttribute("dots");
};

void mei::AugmentDotsMixIn::setDots(std::string _dots) {
    MeiAttribute *a = new MeiAttribute("dots", _dots);
    b->addAttribute(a);
};

bool mei::AugmentDotsMixIn::hasDots() {
    return b->hasAttribute("dots");
};

void mei::AugmentDotsMixIn::removeDots() {
    b->removeAttribute("dots");
};

/* include <dotsmixin> */
mei::AuthorizedMixIn::AuthorizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::AuthorizedMixIn::~AuthorizedMixIn() {}
MeiAttribute* mei::AuthorizedMixIn::getAuth() {
    if (!b->hasAttribute("auth")) {
        return NULL;
    }
    return b->getAttribute("auth");
};

void mei::AuthorizedMixIn::setAuth(std::string _auth) {
    MeiAttribute *a = new MeiAttribute("auth", _auth);
    b->addAttribute(a);
};

bool mei::AuthorizedMixIn::hasAuth() {
    return b->hasAttribute("auth");
};

void mei::AuthorizedMixIn::removeAuth() {
    b->removeAttribute("auth");
};
MeiAttribute* mei::AuthorizedMixIn::getAuthUri() {
    if (!b->hasAttribute("auth.uri")) {
        return NULL;
    }
    return b->getAttribute("auth.uri");
};

void mei::AuthorizedMixIn::setAuthUri(std::string _authuri) {
    MeiAttribute *a = new MeiAttribute("auth.uri", _authuri);
    b->addAttribute(a);
};

bool mei::AuthorizedMixIn::hasAuthUri() {
    return b->hasAttribute("auth.uri");
};

void mei::AuthorizedMixIn::removeAuthUri() {
    b->removeAttribute("auth.uri");
};

/* include <auth.urimixin> */
mei::BarLineLogMixIn::BarLineLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarLineLogMixIn::~BarLineLogMixIn() {}
MeiAttribute* mei::BarLineLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::BarLineLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::BarLineLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BarLineLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::BarringMixIn::BarringMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarringMixIn::~BarringMixIn() {}
MeiAttribute* mei::BarringMixIn::getBarLen() {
    if (!b->hasAttribute("bar.len")) {
        return NULL;
    }
    return b->getAttribute("bar.len");
};

void mei::BarringMixIn::setBarLen(std::string _barlen) {
    MeiAttribute *a = new MeiAttribute("bar.len", _barlen);
    b->addAttribute(a);
};

bool mei::BarringMixIn::hasBarLen() {
    return b->hasAttribute("bar.len");
};

void mei::BarringMixIn::removeBarLen() {
    b->removeAttribute("bar.len");
};
MeiAttribute* mei::BarringMixIn::getBarMethod() {
    if (!b->hasAttribute("bar.method")) {
        return NULL;
    }
    return b->getAttribute("bar.method");
};

void mei::BarringMixIn::setBarMethod(std::string _barmethod) {
    MeiAttribute *a = new MeiAttribute("bar.method", _barmethod);
    b->addAttribute(a);
};

bool mei::BarringMixIn::hasBarMethod() {
    return b->hasAttribute("bar.method");
};

void mei::BarringMixIn::removeBarMethod() {
    b->removeAttribute("bar.method");
};
MeiAttribute* mei::BarringMixIn::getBarPlace() {
    if (!b->hasAttribute("bar.place")) {
        return NULL;
    }
    return b->getAttribute("bar.place");
};

void mei::BarringMixIn::setBarPlace(std::string _barplace) {
    MeiAttribute *a = new MeiAttribute("bar.place", _barplace);
    b->addAttribute(a);
};

bool mei::BarringMixIn::hasBarPlace() {
    return b->hasAttribute("bar.place");
};

void mei::BarringMixIn::removeBarPlace() {
    b->removeAttribute("bar.place");
};

/* include <bar.placemixin> */
mei::BasicMixIn::BasicMixIn(MeiElement *b) {
    this->b = b;
};

mei::BasicMixIn::~BasicMixIn() {}
MeiAttribute* mei::BasicMixIn::getBase() {
    if (!b->hasAttribute("xml:base")) {
        return NULL;
    }
    return b->getAttribute("xml:base");
};

void mei::BasicMixIn::setBase(std::string _base) {
    MeiAttribute *a = new MeiAttribute("xml:base", _base);
    b->addAttribute(a);
};

bool mei::BasicMixIn::hasBase() {
    return b->hasAttribute("xml:base");
};

void mei::BasicMixIn::removeBase() {
    b->removeAttribute("xml:base");
};

/* include <basemixin> */
mei::BiblMixIn::BiblMixIn(MeiElement *b) {
    this->b = b;
};

mei::BiblMixIn::~BiblMixIn() {}
MeiAttribute* mei::BiblMixIn::getAnalog() {
    if (!b->hasAttribute("analog")) {
        return NULL;
    }
    return b->getAttribute("analog");
};

void mei::BiblMixIn::setAnalog(std::string _analog) {
    MeiAttribute *a = new MeiAttribute("analog", _analog);
    b->addAttribute(a);
};

bool mei::BiblMixIn::hasAnalog() {
    return b->hasAttribute("analog");
};

void mei::BiblMixIn::removeAnalog() {
    b->removeAttribute("analog");
};

/* include <analogmixin> */
mei::CalendaredMixIn::CalendaredMixIn(MeiElement *b) {
    this->b = b;
};

mei::CalendaredMixIn::~CalendaredMixIn() {}
MeiAttribute* mei::CalendaredMixIn::getCalendar() {
    if (!b->hasAttribute("calendar")) {
        return NULL;
    }
    return b->getAttribute("calendar");
};

void mei::CalendaredMixIn::setCalendar(std::string _calendar) {
    MeiAttribute *a = new MeiAttribute("calendar", _calendar);
    b->addAttribute(a);
};

bool mei::CalendaredMixIn::hasCalendar() {
    return b->hasAttribute("calendar");
};

void mei::CalendaredMixIn::removeCalendar() {
    b->removeAttribute("calendar");
};

/* include <calendarmixin> */
mei::CanonicalMixIn::CanonicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::CanonicalMixIn::~CanonicalMixIn() {}
MeiAttribute* mei::CanonicalMixIn::getCodedval() {
    if (!b->hasAttribute("codedval")) {
        return NULL;
    }
    return b->getAttribute("codedval");
};

void mei::CanonicalMixIn::setCodedval(std::string _codedval) {
    MeiAttribute *a = new MeiAttribute("codedval", _codedval);
    b->addAttribute(a);
};

bool mei::CanonicalMixIn::hasCodedval() {
    return b->hasAttribute("codedval");
};

void mei::CanonicalMixIn::removeCodedval() {
    b->removeAttribute("codedval");
};

/* include <codedvalmixin> */
mei::ClassedMixIn::ClassedMixIn(MeiElement *b) {
    this->b = b;
};

mei::ClassedMixIn::~ClassedMixIn() {}
MeiAttribute* mei::ClassedMixIn::getClass() {
    if (!b->hasAttribute("class")) {
        return NULL;
    }
    return b->getAttribute("class");
};

void mei::ClassedMixIn::setClass(std::string _class) {
    MeiAttribute *a = new MeiAttribute("class", _class);
    b->addAttribute(a);
};

bool mei::ClassedMixIn::hasClass() {
    return b->hasAttribute("class");
};

void mei::ClassedMixIn::removeClass() {
    b->removeAttribute("class");
};

/* include <classmixin> */
mei::ClefLogMixIn::ClefLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::ClefLogMixIn::~ClefLogMixIn() {}
MeiAttribute* mei::ClefLogMixIn::getCautionary() {
    if (!b->hasAttribute("cautionary")) {
        return NULL;
    }
    return b->getAttribute("cautionary");
};

void mei::ClefLogMixIn::setCautionary(std::string _cautionary) {
    MeiAttribute *a = new MeiAttribute("cautionary", _cautionary);
    b->addAttribute(a);
};

bool mei::ClefLogMixIn::hasCautionary() {
    return b->hasAttribute("cautionary");
};

void mei::ClefLogMixIn::removeCautionary() {
    b->removeAttribute("cautionary");
};

/* include <cautionarymixin> */
mei::ClefShapeMixIn::ClefShapeMixIn(MeiElement *b) {
    this->b = b;
};

mei::ClefShapeMixIn::~ClefShapeMixIn() {}
MeiAttribute* mei::ClefShapeMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        return NULL;
    }
    return b->getAttribute("shape");
};

void mei::ClefShapeMixIn::setShape(std::string _shape) {
    MeiAttribute *a = new MeiAttribute("shape", _shape);
    b->addAttribute(a);
};

bool mei::ClefShapeMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::ClefShapeMixIn::removeShape() {
    b->removeAttribute("shape");
};

/* include <shapemixin> */
mei::CleffingLogMixIn::CleffingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::CleffingLogMixIn::~CleffingLogMixIn() {}
MeiAttribute* mei::CleffingLogMixIn::getClefShape() {
    if (!b->hasAttribute("clef.shape")) {
        return NULL;
    }
    return b->getAttribute("clef.shape");
};

void mei::CleffingLogMixIn::setClefShape(std::string _clefshape) {
    MeiAttribute *a = new MeiAttribute("clef.shape", _clefshape);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefShape() {
    return b->hasAttribute("clef.shape");
};

void mei::CleffingLogMixIn::removeClefShape() {
    b->removeAttribute("clef.shape");
};
MeiAttribute* mei::CleffingLogMixIn::getClefLine() {
    if (!b->hasAttribute("clef.line")) {
        return NULL;
    }
    return b->getAttribute("clef.line");
};

void mei::CleffingLogMixIn::setClefLine(std::string _clefline) {
    MeiAttribute *a = new MeiAttribute("clef.line", _clefline);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefLine() {
    return b->hasAttribute("clef.line");
};

void mei::CleffingLogMixIn::removeClefLine() {
    b->removeAttribute("clef.line");
};
MeiAttribute* mei::CleffingLogMixIn::getClefDis() {
    if (!b->hasAttribute("clef.dis")) {
        return NULL;
    }
    return b->getAttribute("clef.dis");
};

void mei::CleffingLogMixIn::setClefDis(std::string _clefdis) {
    MeiAttribute *a = new MeiAttribute("clef.dis", _clefdis);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefDis() {
    return b->hasAttribute("clef.dis");
};

void mei::CleffingLogMixIn::removeClefDis() {
    b->removeAttribute("clef.dis");
};
MeiAttribute* mei::CleffingLogMixIn::getClefDisPlace() {
    if (!b->hasAttribute("clef.dis.place")) {
        return NULL;
    }
    return b->getAttribute("clef.dis.place");
};

void mei::CleffingLogMixIn::setClefDisPlace(std::string _clefdisplace) {
    MeiAttribute *a = new MeiAttribute("clef.dis.place", _clefdisplace);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefDisPlace() {
    return b->hasAttribute("clef.dis.place");
};

void mei::CleffingLogMixIn::removeClefDisPlace() {
    b->removeAttribute("clef.dis.place");
};

/* include <clef.dis.placemixin> */
mei::ColorMixIn::ColorMixIn(MeiElement *b) {
    this->b = b;
};

mei::ColorMixIn::~ColorMixIn() {}
MeiAttribute* mei::ColorMixIn::getColor() {
    if (!b->hasAttribute("color")) {
        return NULL;
    }
    return b->getAttribute("color");
};

void mei::ColorMixIn::setColor(std::string _color) {
    MeiAttribute *a = new MeiAttribute("color", _color);
    b->addAttribute(a);
};

bool mei::ColorMixIn::hasColor() {
    return b->hasAttribute("color");
};

void mei::ColorMixIn::removeColor() {
    b->removeAttribute("color");
};

/* include <colormixin> */
mei::ColorationMixIn::ColorationMixIn(MeiElement *b) {
    this->b = b;
};

mei::ColorationMixIn::~ColorationMixIn() {}
MeiAttribute* mei::ColorationMixIn::getColored() {
    if (!b->hasAttribute("colored")) {
        return NULL;
    }
    return b->getAttribute("colored");
};

void mei::ColorationMixIn::setColored(std::string _colored) {
    MeiAttribute *a = new MeiAttribute("colored", _colored);
    b->addAttribute(a);
};

bool mei::ColorationMixIn::hasColored() {
    return b->hasAttribute("colored");
};

void mei::ColorationMixIn::removeColored() {
    b->removeAttribute("colored");
};

/* include <coloredmixin> */
mei::CoordinatedMixIn::CoordinatedMixIn(MeiElement *b) {
    this->b = b;
};

mei::CoordinatedMixIn::~CoordinatedMixIn() {}
MeiAttribute* mei::CoordinatedMixIn::getUlx() {
    if (!b->hasAttribute("ulx")) {
        return NULL;
    }
    return b->getAttribute("ulx");
};

void mei::CoordinatedMixIn::setUlx(std::string _ulx) {
    MeiAttribute *a = new MeiAttribute("ulx", _ulx);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasUlx() {
    return b->hasAttribute("ulx");
};

void mei::CoordinatedMixIn::removeUlx() {
    b->removeAttribute("ulx");
};
MeiAttribute* mei::CoordinatedMixIn::getUly() {
    if (!b->hasAttribute("uly")) {
        return NULL;
    }
    return b->getAttribute("uly");
};

void mei::CoordinatedMixIn::setUly(std::string _uly) {
    MeiAttribute *a = new MeiAttribute("uly", _uly);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasUly() {
    return b->hasAttribute("uly");
};

void mei::CoordinatedMixIn::removeUly() {
    b->removeAttribute("uly");
};
MeiAttribute* mei::CoordinatedMixIn::getLrx() {
    if (!b->hasAttribute("lrx")) {
        return NULL;
    }
    return b->getAttribute("lrx");
};

void mei::CoordinatedMixIn::setLrx(std::string _lrx) {
    MeiAttribute *a = new MeiAttribute("lrx", _lrx);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasLrx() {
    return b->hasAttribute("lrx");
};

void mei::CoordinatedMixIn::removeLrx() {
    b->removeAttribute("lrx");
};
MeiAttribute* mei::CoordinatedMixIn::getLry() {
    if (!b->hasAttribute("lry")) {
        return NULL;
    }
    return b->getAttribute("lry");
};

void mei::CoordinatedMixIn::setLry(std::string _lry) {
    MeiAttribute *a = new MeiAttribute("lry", _lry);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasLry() {
    return b->hasAttribute("lry");
};

void mei::CoordinatedMixIn::removeLry() {
    b->removeAttribute("lry");
};
MeiAttribute* mei::CoordinatedMixIn::getRotate() {
    if (!b->hasAttribute("rotate")) {
        return NULL;
    }
    return b->getAttribute("rotate");
};

void mei::CoordinatedMixIn::setRotate(std::string _rotate) {
    MeiAttribute *a = new MeiAttribute("rotate", _rotate);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasRotate() {
    return b->hasAttribute("rotate");
};

void mei::CoordinatedMixIn::removeRotate() {
    b->removeAttribute("rotate");
};

/* include <rotatemixin> */
mei::CueMixIn::CueMixIn(MeiElement *b) {
    this->b = b;
};

mei::CueMixIn::~CueMixIn() {}
MeiAttribute* mei::CueMixIn::getCue() {
    if (!b->hasAttribute("cue")) {
        return NULL;
    }
    return b->getAttribute("cue");
};

void mei::CueMixIn::setCue(std::string _cue) {
    MeiAttribute *a = new MeiAttribute("cue", _cue);
    b->addAttribute(a);
};

bool mei::CueMixIn::hasCue() {
    return b->hasAttribute("cue");
};

void mei::CueMixIn::removeCue() {
    b->removeAttribute("cue");
};

/* include <cuemixin> */
mei::CurvatureMixIn::CurvatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::CurvatureMixIn::~CurvatureMixIn() {}
MeiAttribute* mei::CurvatureMixIn::getBezier() {
    if (!b->hasAttribute("bezier")) {
        return NULL;
    }
    return b->getAttribute("bezier");
};

void mei::CurvatureMixIn::setBezier(std::string _bezier) {
    MeiAttribute *a = new MeiAttribute("bezier", _bezier);
    b->addAttribute(a);
};

bool mei::CurvatureMixIn::hasBezier() {
    return b->hasAttribute("bezier");
};

void mei::CurvatureMixIn::removeBezier() {
    b->removeAttribute("bezier");
};
MeiAttribute* mei::CurvatureMixIn::getBulge() {
    if (!b->hasAttribute("bulge")) {
        return NULL;
    }
    return b->getAttribute("bulge");
};

void mei::CurvatureMixIn::setBulge(std::string _bulge) {
    MeiAttribute *a = new MeiAttribute("bulge", _bulge);
    b->addAttribute(a);
};

bool mei::CurvatureMixIn::hasBulge() {
    return b->hasAttribute("bulge");
};

void mei::CurvatureMixIn::removeBulge() {
    b->removeAttribute("bulge");
};
MeiAttribute* mei::CurvatureMixIn::getCurvedir() {
    if (!b->hasAttribute("curvedir")) {
        return NULL;
    }
    return b->getAttribute("curvedir");
};

void mei::CurvatureMixIn::setCurvedir(std::string _curvedir) {
    MeiAttribute *a = new MeiAttribute("curvedir", _curvedir);
    b->addAttribute(a);
};

bool mei::CurvatureMixIn::hasCurvedir() {
    return b->hasAttribute("curvedir");
};

void mei::CurvatureMixIn::removeCurvedir() {
    b->removeAttribute("curvedir");
};

/* include <curvedirmixin> */
mei::CurveRendMixIn::CurveRendMixIn(MeiElement *b) {
    this->b = b;
};

mei::CurveRendMixIn::~CurveRendMixIn() {}
MeiAttribute* mei::CurveRendMixIn::getLform() {
    if (!b->hasAttribute("lform")) {
        return NULL;
    }
    return b->getAttribute("lform");
};

void mei::CurveRendMixIn::setLform(std::string _lform) {
    MeiAttribute *a = new MeiAttribute("lform", _lform);
    b->addAttribute(a);
};

bool mei::CurveRendMixIn::hasLform() {
    return b->hasAttribute("lform");
};

void mei::CurveRendMixIn::removeLform() {
    b->removeAttribute("lform");
};
MeiAttribute* mei::CurveRendMixIn::getLwidth() {
    if (!b->hasAttribute("lwidth")) {
        return NULL;
    }
    return b->getAttribute("lwidth");
};

void mei::CurveRendMixIn::setLwidth(std::string _lwidth) {
    MeiAttribute *a = new MeiAttribute("lwidth", _lwidth);
    b->addAttribute(a);
};

bool mei::CurveRendMixIn::hasLwidth() {
    return b->hasAttribute("lwidth");
};

void mei::CurveRendMixIn::removeLwidth() {
    b->removeAttribute("lwidth");
};

/* include <lwidthmixin> */
mei::CustosLogMixIn::CustosLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::CustosLogMixIn::~CustosLogMixIn() {}
MeiAttribute* mei::CustosLogMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        return NULL;
    }
    return b->getAttribute("target");
};

void mei::CustosLogMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    b->addAttribute(a);
};

bool mei::CustosLogMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::CustosLogMixIn::removeTarget() {
    b->removeAttribute("target");
};

/* include <targetmixin> */
mei::DataPointingMixIn::DataPointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::DataPointingMixIn::~DataPointingMixIn() {}
MeiAttribute* mei::DataPointingMixIn::getData() {
    if (!b->hasAttribute("data")) {
        return NULL;
    }
    return b->getAttribute("data");
};

void mei::DataPointingMixIn::setData(std::string _data) {
    MeiAttribute *a = new MeiAttribute("data", _data);
    b->addAttribute(a);
};

bool mei::DataPointingMixIn::hasData() {
    return b->hasAttribute("data");
};

void mei::DataPointingMixIn::removeData() {
    b->removeAttribute("data");
};

/* include <datamixin> */
mei::DatableMixIn::DatableMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatableMixIn::~DatableMixIn() {}
MeiAttribute* mei::DatableMixIn::getEnddate() {
    if (!b->hasAttribute("enddate")) {
        return NULL;
    }
    return b->getAttribute("enddate");
};

void mei::DatableMixIn::setEnddate(std::string _enddate) {
    MeiAttribute *a = new MeiAttribute("enddate", _enddate);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasEnddate() {
    return b->hasAttribute("enddate");
};

void mei::DatableMixIn::removeEnddate() {
    b->removeAttribute("enddate");
};
MeiAttribute* mei::DatableMixIn::getIsodate() {
    if (!b->hasAttribute("isodate")) {
        return NULL;
    }
    return b->getAttribute("isodate");
};

void mei::DatableMixIn::setIsodate(std::string _isodate) {
    MeiAttribute *a = new MeiAttribute("isodate", _isodate);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasIsodate() {
    return b->hasAttribute("isodate");
};

void mei::DatableMixIn::removeIsodate() {
    b->removeAttribute("isodate");
};
MeiAttribute* mei::DatableMixIn::getNotafter() {
    if (!b->hasAttribute("notafter")) {
        return NULL;
    }
    return b->getAttribute("notafter");
};

void mei::DatableMixIn::setNotafter(std::string _notafter) {
    MeiAttribute *a = new MeiAttribute("notafter", _notafter);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasNotafter() {
    return b->hasAttribute("notafter");
};

void mei::DatableMixIn::removeNotafter() {
    b->removeAttribute("notafter");
};
MeiAttribute* mei::DatableMixIn::getNotbefore() {
    if (!b->hasAttribute("notbefore")) {
        return NULL;
    }
    return b->getAttribute("notbefore");
};

void mei::DatableMixIn::setNotbefore(std::string _notbefore) {
    MeiAttribute *a = new MeiAttribute("notbefore", _notbefore);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasNotbefore() {
    return b->hasAttribute("notbefore");
};

void mei::DatableMixIn::removeNotbefore() {
    b->removeAttribute("notbefore");
};
MeiAttribute* mei::DatableMixIn::getStartdate() {
    if (!b->hasAttribute("startdate")) {
        return NULL;
    }
    return b->getAttribute("startdate");
};

void mei::DatableMixIn::setStartdate(std::string _startdate) {
    MeiAttribute *a = new MeiAttribute("startdate", _startdate);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasStartdate() {
    return b->hasAttribute("startdate");
};

void mei::DatableMixIn::removeStartdate() {
    b->removeAttribute("startdate");
};

/* include <startdatemixin> */
mei::DistancesMixIn::DistancesMixIn(MeiElement *b) {
    this->b = b;
};

mei::DistancesMixIn::~DistancesMixIn() {}
MeiAttribute* mei::DistancesMixIn::getDynamDist() {
    if (!b->hasAttribute("dynam.dist")) {
        return NULL;
    }
    return b->getAttribute("dynam.dist");
};

void mei::DistancesMixIn::setDynamDist(std::string _dynamdist) {
    MeiAttribute *a = new MeiAttribute("dynam.dist", _dynamdist);
    b->addAttribute(a);
};

bool mei::DistancesMixIn::hasDynamDist() {
    return b->hasAttribute("dynam.dist");
};

void mei::DistancesMixIn::removeDynamDist() {
    b->removeAttribute("dynam.dist");
};
MeiAttribute* mei::DistancesMixIn::getHarmDist() {
    if (!b->hasAttribute("harm.dist")) {
        return NULL;
    }
    return b->getAttribute("harm.dist");
};

void mei::DistancesMixIn::setHarmDist(std::string _harmdist) {
    MeiAttribute *a = new MeiAttribute("harm.dist", _harmdist);
    b->addAttribute(a);
};

bool mei::DistancesMixIn::hasHarmDist() {
    return b->hasAttribute("harm.dist");
};

void mei::DistancesMixIn::removeHarmDist() {
    b->removeAttribute("harm.dist");
};
MeiAttribute* mei::DistancesMixIn::getTextDist() {
    if (!b->hasAttribute("text.dist")) {
        return NULL;
    }
    return b->getAttribute("text.dist");
};

void mei::DistancesMixIn::setTextDist(std::string _textdist) {
    MeiAttribute *a = new MeiAttribute("text.dist", _textdist);
    b->addAttribute(a);
};

bool mei::DistancesMixIn::hasTextDist() {
    return b->hasAttribute("text.dist");
};

void mei::DistancesMixIn::removeTextDist() {
    b->removeAttribute("text.dist");
};

/* include <text.distmixin> */
mei::DotLogMixIn::DotLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::DotLogMixIn::~DotLogMixIn() {}
MeiAttribute* mei::DotLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::DotLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::DotLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::DotLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::DurationAdditiveMixIn::DurationAdditiveMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationAdditiveMixIn::~DurationAdditiveMixIn() {}
MeiAttribute* mei::DurationAdditiveMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        return NULL;
    }
    return b->getAttribute("dur");
};

void mei::DurationAdditiveMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::DurationAdditiveMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::DurationAdditiveMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::DurationDefaultMixIn::DurationDefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationDefaultMixIn::~DurationDefaultMixIn() {}
MeiAttribute* mei::DurationDefaultMixIn::getDurDefault() {
    if (!b->hasAttribute("dur.default")) {
        return NULL;
    }
    return b->getAttribute("dur.default");
};

void mei::DurationDefaultMixIn::setDurDefault(std::string _durdefault) {
    MeiAttribute *a = new MeiAttribute("dur.default", _durdefault);
    b->addAttribute(a);
};

bool mei::DurationDefaultMixIn::hasDurDefault() {
    return b->hasAttribute("dur.default");
};

void mei::DurationDefaultMixIn::removeDurDefault() {
    b->removeAttribute("dur.default");
};
MeiAttribute* mei::DurationDefaultMixIn::getNumDefault() {
    if (!b->hasAttribute("num.default")) {
        return NULL;
    }
    return b->getAttribute("num.default");
};

void mei::DurationDefaultMixIn::setNumDefault(std::string _numdefault) {
    MeiAttribute *a = new MeiAttribute("num.default", _numdefault);
    b->addAttribute(a);
};

bool mei::DurationDefaultMixIn::hasNumDefault() {
    return b->hasAttribute("num.default");
};

void mei::DurationDefaultMixIn::removeNumDefault() {
    b->removeAttribute("num.default");
};
MeiAttribute* mei::DurationDefaultMixIn::getNumbaseDefault() {
    if (!b->hasAttribute("numbase.default")) {
        return NULL;
    }
    return b->getAttribute("numbase.default");
};

void mei::DurationDefaultMixIn::setNumbaseDefault(std::string _numbasedefault) {
    MeiAttribute *a = new MeiAttribute("numbase.default", _numbasedefault);
    b->addAttribute(a);
};

bool mei::DurationDefaultMixIn::hasNumbaseDefault() {
    return b->hasAttribute("numbase.default");
};

void mei::DurationDefaultMixIn::removeNumbaseDefault() {
    b->removeAttribute("numbase.default");
};

/* include <numbase.defaultmixin> */
mei::DurationLogicalMixIn::DurationLogicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationLogicalMixIn::~DurationLogicalMixIn() {}
MeiAttribute* mei::DurationLogicalMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        return NULL;
    }
    return b->getAttribute("dur");
};

void mei::DurationLogicalMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::DurationLogicalMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::DurationLogicalMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::DurationRatioMixIn::DurationRatioMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationRatioMixIn::~DurationRatioMixIn() {}
MeiAttribute* mei::DurationRatioMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        return NULL;
    }
    return b->getAttribute("num");
};

void mei::DurationRatioMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::DurationRatioMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::DurationRatioMixIn::removeNum() {
    b->removeAttribute("num");
};
MeiAttribute* mei::DurationRatioMixIn::getNumbase() {
    if (!b->hasAttribute("numbase")) {
        return NULL;
    }
    return b->getAttribute("numbase");
};

void mei::DurationRatioMixIn::setNumbase(std::string _numbase) {
    MeiAttribute *a = new MeiAttribute("numbase", _numbase);
    b->addAttribute(a);
};

bool mei::DurationRatioMixIn::hasNumbase() {
    return b->hasAttribute("numbase");
};

void mei::DurationRatioMixIn::removeNumbase() {
    b->removeAttribute("numbase");
};

/* include <numbasemixin> */
mei::EnclosingCharsMixIn::EnclosingCharsMixIn(MeiElement *b) {
    this->b = b;
};

mei::EnclosingCharsMixIn::~EnclosingCharsMixIn() {}
MeiAttribute* mei::EnclosingCharsMixIn::getEnclose() {
    if (!b->hasAttribute("enclose")) {
        return NULL;
    }
    return b->getAttribute("enclose");
};

void mei::EnclosingCharsMixIn::setEnclose(std::string _enclose) {
    MeiAttribute *a = new MeiAttribute("enclose", _enclose);
    b->addAttribute(a);
};

bool mei::EnclosingCharsMixIn::hasEnclose() {
    return b->hasAttribute("enclose");
};

void mei::EnclosingCharsMixIn::removeEnclose() {
    b->removeAttribute("enclose");
};

/* include <enclosemixin> */
mei::EndingsMixIn::EndingsMixIn(MeiElement *b) {
    this->b = b;
};

mei::EndingsMixIn::~EndingsMixIn() {}
MeiAttribute* mei::EndingsMixIn::getEndingRend() {
    if (!b->hasAttribute("ending.rend")) {
        return NULL;
    }
    return b->getAttribute("ending.rend");
};

void mei::EndingsMixIn::setEndingRend(std::string _endingrend) {
    MeiAttribute *a = new MeiAttribute("ending.rend", _endingrend);
    b->addAttribute(a);
};

bool mei::EndingsMixIn::hasEndingRend() {
    return b->hasAttribute("ending.rend");
};

void mei::EndingsMixIn::removeEndingRend() {
    b->removeAttribute("ending.rend");
};

/* include <ending.rendmixin> */
mei::EvidenceMixIn::EvidenceMixIn(MeiElement *b) {
    this->b = b;
};

mei::EvidenceMixIn::~EvidenceMixIn() {}
MeiAttribute* mei::EvidenceMixIn::getCert() {
    if (!b->hasAttribute("cert")) {
        return NULL;
    }
    return b->getAttribute("cert");
};

void mei::EvidenceMixIn::setCert(std::string _cert) {
    MeiAttribute *a = new MeiAttribute("cert", _cert);
    b->addAttribute(a);
};

bool mei::EvidenceMixIn::hasCert() {
    return b->hasAttribute("cert");
};

void mei::EvidenceMixIn::removeCert() {
    b->removeAttribute("cert");
};
MeiAttribute* mei::EvidenceMixIn::getEvidence() {
    if (!b->hasAttribute("evidence")) {
        return NULL;
    }
    return b->getAttribute("evidence");
};

void mei::EvidenceMixIn::setEvidence(std::string _evidence) {
    MeiAttribute *a = new MeiAttribute("evidence", _evidence);
    b->addAttribute(a);
};

bool mei::EvidenceMixIn::hasEvidence() {
    return b->hasAttribute("evidence");
};

void mei::EvidenceMixIn::removeEvidence() {
    b->removeAttribute("evidence");
};

/* include <evidencemixin> */
mei::ExtenderMixIn::ExtenderMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExtenderMixIn::~ExtenderMixIn() {}
MeiAttribute* mei::ExtenderMixIn::getExtender() {
    if (!b->hasAttribute("extender")) {
        return NULL;
    }
    return b->getAttribute("extender");
};

void mei::ExtenderMixIn::setExtender(std::string _extender) {
    MeiAttribute *a = new MeiAttribute("extender", _extender);
    b->addAttribute(a);
};

bool mei::ExtenderMixIn::hasExtender() {
    return b->hasAttribute("extender");
};

void mei::ExtenderMixIn::removeExtender() {
    b->removeAttribute("extender");
};

/* include <extendermixin> */
mei::ExtentMixIn::ExtentMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExtentMixIn::~ExtentMixIn() {}
MeiAttribute* mei::ExtentMixIn::getExtent() {
    if (!b->hasAttribute("extent")) {
        return NULL;
    }
    return b->getAttribute("extent");
};

void mei::ExtentMixIn::setExtent(std::string _extent) {
    MeiAttribute *a = new MeiAttribute("extent", _extent);
    b->addAttribute(a);
};

bool mei::ExtentMixIn::hasExtent() {
    return b->hasAttribute("extent");
};

void mei::ExtentMixIn::removeExtent() {
    b->removeAttribute("extent");
};

/* include <extentmixin> */
mei::FermataPresentMixIn::FermataPresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::FermataPresentMixIn::~FermataPresentMixIn() {}
MeiAttribute* mei::FermataPresentMixIn::getFermata() {
    if (!b->hasAttribute("fermata")) {
        return NULL;
    }
    return b->getAttribute("fermata");
};

void mei::FermataPresentMixIn::setFermata(std::string _fermata) {
    MeiAttribute *a = new MeiAttribute("fermata", _fermata);
    b->addAttribute(a);
};

bool mei::FermataPresentMixIn::hasFermata() {
    return b->hasAttribute("fermata");
};

void mei::FermataPresentMixIn::removeFermata() {
    b->removeAttribute("fermata");
};

/* include <fermatamixin> */
mei::FilingMixIn::FilingMixIn(MeiElement *b) {
    this->b = b;
};

mei::FilingMixIn::~FilingMixIn() {}
MeiAttribute* mei::FilingMixIn::getNonfiling() {
    if (!b->hasAttribute("nonfiling")) {
        return NULL;
    }
    return b->getAttribute("nonfiling");
};

void mei::FilingMixIn::setNonfiling(std::string _nonfiling) {
    MeiAttribute *a = new MeiAttribute("nonfiling", _nonfiling);
    b->addAttribute(a);
};

bool mei::FilingMixIn::hasNonfiling() {
    return b->hasAttribute("nonfiling");
};

void mei::FilingMixIn::removeNonfiling() {
    b->removeAttribute("nonfiling");
};

/* include <nonfilingmixin> */
mei::GrpSymLogMixIn::GrpSymLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::GrpSymLogMixIn::~GrpSymLogMixIn() {}
MeiAttribute* mei::GrpSymLogMixIn::getLevel() {
    if (!b->hasAttribute("level")) {
        return NULL;
    }
    return b->getAttribute("level");
};

void mei::GrpSymLogMixIn::setLevel(std::string _level) {
    MeiAttribute *a = new MeiAttribute("level", _level);
    b->addAttribute(a);
};

bool mei::GrpSymLogMixIn::hasLevel() {
    return b->hasAttribute("level");
};

void mei::GrpSymLogMixIn::removeLevel() {
    b->removeAttribute("level");
};

/* include <levelmixin> */
mei::HandIdentMixIn::HandIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::HandIdentMixIn::~HandIdentMixIn() {}
MeiAttribute* mei::HandIdentMixIn::getHand() {
    if (!b->hasAttribute("hand")) {
        return NULL;
    }
    return b->getAttribute("hand");
};

void mei::HandIdentMixIn::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    b->addAttribute(a);
};

bool mei::HandIdentMixIn::hasHand() {
    return b->hasAttribute("hand");
};

void mei::HandIdentMixIn::removeHand() {
    b->removeAttribute("hand");
};

/* include <handmixin> */
mei::HeightMixIn::HeightMixIn(MeiElement *b) {
    this->b = b;
};

mei::HeightMixIn::~HeightMixIn() {}
MeiAttribute* mei::HeightMixIn::getHeight() {
    if (!b->hasAttribute("height")) {
        return NULL;
    }
    return b->getAttribute("height");
};

void mei::HeightMixIn::setHeight(std::string _height) {
    MeiAttribute *a = new MeiAttribute("height", _height);
    b->addAttribute(a);
};

bool mei::HeightMixIn::hasHeight() {
    return b->hasAttribute("height");
};

void mei::HeightMixIn::removeHeight() {
    b->removeAttribute("height");
};

/* include <heightmixin> */
mei::HorizontalAlignMixIn::HorizontalAlignMixIn(MeiElement *b) {
    this->b = b;
};

mei::HorizontalAlignMixIn::~HorizontalAlignMixIn() {}
MeiAttribute* mei::HorizontalAlignMixIn::getHalign() {
    if (!b->hasAttribute("halign")) {
        return NULL;
    }
    return b->getAttribute("halign");
};

void mei::HorizontalAlignMixIn::setHalign(std::string _halign) {
    MeiAttribute *a = new MeiAttribute("halign", _halign);
    b->addAttribute(a);
};

bool mei::HorizontalAlignMixIn::hasHalign() {
    return b->hasAttribute("halign");
};

void mei::HorizontalAlignMixIn::removeHalign() {
    b->removeAttribute("halign");
};

/* include <halignmixin> */
mei::InternetMediaMixIn::InternetMediaMixIn(MeiElement *b) {
    this->b = b;
};

mei::InternetMediaMixIn::~InternetMediaMixIn() {}
MeiAttribute* mei::InternetMediaMixIn::getMimetype() {
    if (!b->hasAttribute("mimetype")) {
        return NULL;
    }
    return b->getAttribute("mimetype");
};

void mei::InternetMediaMixIn::setMimetype(std::string _mimetype) {
    MeiAttribute *a = new MeiAttribute("mimetype", _mimetype);
    b->addAttribute(a);
};

bool mei::InternetMediaMixIn::hasMimetype() {
    return b->hasAttribute("mimetype");
};

void mei::InternetMediaMixIn::removeMimetype() {
    b->removeAttribute("mimetype");
};

/* include <mimetypemixin> */
mei::JoinedMixIn::JoinedMixIn(MeiElement *b) {
    this->b = b;
};

mei::JoinedMixIn::~JoinedMixIn() {}
MeiAttribute* mei::JoinedMixIn::getJoin() {
    if (!b->hasAttribute("join")) {
        return NULL;
    }
    return b->getAttribute("join");
};

void mei::JoinedMixIn::setJoin(std::string _join) {
    MeiAttribute *a = new MeiAttribute("join", _join);
    b->addAttribute(a);
};

bool mei::JoinedMixIn::hasJoin() {
    return b->hasAttribute("join");
};

void mei::JoinedMixIn::removeJoin() {
    b->removeAttribute("join");
};

/* include <joinmixin> */
mei::KeySigLogMixIn::KeySigLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigLogMixIn::~KeySigLogMixIn() {}
MeiAttribute* mei::KeySigLogMixIn::getSig() {
    if (!b->hasAttribute("sig")) {
        return NULL;
    }
    return b->getAttribute("sig");
};

void mei::KeySigLogMixIn::setSig(std::string _sig) {
    MeiAttribute *a = new MeiAttribute("sig", _sig);
    b->addAttribute(a);
};

bool mei::KeySigLogMixIn::hasSig() {
    return b->hasAttribute("sig");
};

void mei::KeySigLogMixIn::removeSig() {
    b->removeAttribute("sig");
};

/* include <sigmixin> */
mei::KeySigDefaultLogMixIn::KeySigDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigDefaultLogMixIn::~KeySigDefaultLogMixIn() {}
MeiAttribute* mei::KeySigDefaultLogMixIn::getKeySig() {
    if (!b->hasAttribute("key.sig")) {
        return NULL;
    }
    return b->getAttribute("key.sig");
};

void mei::KeySigDefaultLogMixIn::setKeySig(std::string _keysig) {
    MeiAttribute *a = new MeiAttribute("key.sig", _keysig);
    b->addAttribute(a);
};

bool mei::KeySigDefaultLogMixIn::hasKeySig() {
    return b->hasAttribute("key.sig");
};

void mei::KeySigDefaultLogMixIn::removeKeySig() {
    b->removeAttribute("key.sig");
};

/* include <key.sigmixin> */
mei::LabelledMixIn::LabelledMixIn(MeiElement *b) {
    this->b = b;
};

mei::LabelledMixIn::~LabelledMixIn() {}
MeiAttribute* mei::LabelledMixIn::getLabel() {
    if (!b->hasAttribute("label")) {
        return NULL;
    }
    return b->getAttribute("label");
};

void mei::LabelledMixIn::setLabel(std::string _label) {
    MeiAttribute *a = new MeiAttribute("label", _label);
    b->addAttribute(a);
};

bool mei::LabelledMixIn::hasLabel() {
    return b->hasAttribute("label");
};

void mei::LabelledMixIn::removeLabel() {
    b->removeAttribute("label");
};

/* include <labelmixin> */
mei::LangMixIn::LangMixIn(MeiElement *b) {
    this->b = b;
};

mei::LangMixIn::~LangMixIn() {}
MeiAttribute* mei::LangMixIn::getLang() {
    if (!b->hasAttribute("xml:lang")) {
        return NULL;
    }
    return b->getAttribute("xml:lang");
};

void mei::LangMixIn::setLang(std::string _lang) {
    MeiAttribute *a = new MeiAttribute("xml:lang", _lang);
    b->addAttribute(a);
};

bool mei::LangMixIn::hasLang() {
    return b->hasAttribute("xml:lang");
};

void mei::LangMixIn::removeLang() {
    b->removeAttribute("xml:lang");
};
MeiAttribute* mei::LangMixIn::getTranslit() {
    if (!b->hasAttribute("xml:translit")) {
        return NULL;
    }
    return b->getAttribute("xml:translit");
};

void mei::LangMixIn::setTranslit(std::string _translit) {
    MeiAttribute *a = new MeiAttribute("xml:translit", _translit);
    b->addAttribute(a);
};

bool mei::LangMixIn::hasTranslit() {
    return b->hasAttribute("xml:translit");
};

void mei::LangMixIn::removeTranslit() {
    b->removeAttribute("xml:translit");
};

/* include <translitmixin> */
mei::LayerLogMixIn::LayerLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::LayerLogMixIn::~LayerLogMixIn() {}
MeiAttribute* mei::LayerLogMixIn::getDef() {
    if (!b->hasAttribute("def")) {
        return NULL;
    }
    return b->getAttribute("def");
};

void mei::LayerLogMixIn::setDef(std::string _def) {
    MeiAttribute *a = new MeiAttribute("def", _def);
    b->addAttribute(a);
};

bool mei::LayerLogMixIn::hasDef() {
    return b->hasAttribute("def");
};

void mei::LayerLogMixIn::removeDef() {
    b->removeAttribute("def");
};

/* include <defmixin> */
mei::LayerIdentMixIn::LayerIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::LayerIdentMixIn::~LayerIdentMixIn() {}
MeiAttribute* mei::LayerIdentMixIn::getLayer() {
    if (!b->hasAttribute("layer")) {
        return NULL;
    }
    return b->getAttribute("layer");
};

void mei::LayerIdentMixIn::setLayer(std::string _layer) {
    MeiAttribute *a = new MeiAttribute("layer", _layer);
    b->addAttribute(a);
};

bool mei::LayerIdentMixIn::hasLayer() {
    return b->hasAttribute("layer");
};

void mei::LayerIdentMixIn::removeLayer() {
    b->removeAttribute("layer");
};

/* include <layermixin> */
mei::LineLocMixIn::LineLocMixIn(MeiElement *b) {
    this->b = b;
};

mei::LineLocMixIn::~LineLocMixIn() {}
MeiAttribute* mei::LineLocMixIn::getLine() {
    if (!b->hasAttribute("line")) {
        return NULL;
    }
    return b->getAttribute("line");
};

void mei::LineLocMixIn::setLine(std::string _line) {
    MeiAttribute *a = new MeiAttribute("line", _line);
    b->addAttribute(a);
};

bool mei::LineLocMixIn::hasLine() {
    return b->hasAttribute("line");
};

void mei::LineLocMixIn::removeLine() {
    b->removeAttribute("line");
};

/* include <linemixin> */
mei::LineRendMixIn::LineRendMixIn(MeiElement *b) {
    this->b = b;
};

mei::LineRendMixIn::~LineRendMixIn() {}
MeiAttribute* mei::LineRendMixIn::getLendsym() {
    if (!b->hasAttribute("lendsym")) {
        return NULL;
    }
    return b->getAttribute("lendsym");
};

void mei::LineRendMixIn::setLendsym(std::string _lendsym) {
    MeiAttribute *a = new MeiAttribute("lendsym", _lendsym);
    b->addAttribute(a);
};

bool mei::LineRendMixIn::hasLendsym() {
    return b->hasAttribute("lendsym");
};

void mei::LineRendMixIn::removeLendsym() {
    b->removeAttribute("lendsym");
};
MeiAttribute* mei::LineRendMixIn::getLendsymSize() {
    if (!b->hasAttribute("lendsym.size")) {
        return NULL;
    }
    return b->getAttribute("lendsym.size");
};

void mei::LineRendMixIn::setLendsymSize(std::string _lendsymsize) {
    MeiAttribute *a = new MeiAttribute("lendsym.size", _lendsymsize);
    b->addAttribute(a);
};

bool mei::LineRendMixIn::hasLendsymSize() {
    return b->hasAttribute("lendsym.size");
};

void mei::LineRendMixIn::removeLendsymSize() {
    b->removeAttribute("lendsym.size");
};
MeiAttribute* mei::LineRendMixIn::getLstartsym() {
    if (!b->hasAttribute("lstartsym")) {
        return NULL;
    }
    return b->getAttribute("lstartsym");
};

void mei::LineRendMixIn::setLstartsym(std::string _lstartsym) {
    MeiAttribute *a = new MeiAttribute("lstartsym", _lstartsym);
    b->addAttribute(a);
};

bool mei::LineRendMixIn::hasLstartsym() {
    return b->hasAttribute("lstartsym");
};

void mei::LineRendMixIn::removeLstartsym() {
    b->removeAttribute("lstartsym");
};
MeiAttribute* mei::LineRendMixIn::getLstartsymSize() {
    if (!b->hasAttribute("lstartsym.size")) {
        return NULL;
    }
    return b->getAttribute("lstartsym.size");
};

void mei::LineRendMixIn::setLstartsymSize(std::string _lstartsymsize) {
    MeiAttribute *a = new MeiAttribute("lstartsym.size", _lstartsymsize);
    b->addAttribute(a);
};

bool mei::LineRendMixIn::hasLstartsymSize() {
    return b->hasAttribute("lstartsym.size");
};

void mei::LineRendMixIn::removeLstartsymSize() {
    b->removeAttribute("lstartsym.size");
};

/* include <lstartsym.sizemixin> */
mei::LineRendBaseMixIn::LineRendBaseMixIn(MeiElement *b) {
    this->b = b;
};

mei::LineRendBaseMixIn::~LineRendBaseMixIn() {}
MeiAttribute* mei::LineRendBaseMixIn::getLform() {
    if (!b->hasAttribute("lform")) {
        return NULL;
    }
    return b->getAttribute("lform");
};

void mei::LineRendBaseMixIn::setLform(std::string _lform) {
    MeiAttribute *a = new MeiAttribute("lform", _lform);
    b->addAttribute(a);
};

bool mei::LineRendBaseMixIn::hasLform() {
    return b->hasAttribute("lform");
};

void mei::LineRendBaseMixIn::removeLform() {
    b->removeAttribute("lform");
};
MeiAttribute* mei::LineRendBaseMixIn::getLsegs() {
    if (!b->hasAttribute("lsegs")) {
        return NULL;
    }
    return b->getAttribute("lsegs");
};

void mei::LineRendBaseMixIn::setLsegs(std::string _lsegs) {
    MeiAttribute *a = new MeiAttribute("lsegs", _lsegs);
    b->addAttribute(a);
};

bool mei::LineRendBaseMixIn::hasLsegs() {
    return b->hasAttribute("lsegs");
};

void mei::LineRendBaseMixIn::removeLsegs() {
    b->removeAttribute("lsegs");
};
MeiAttribute* mei::LineRendBaseMixIn::getLwidth() {
    if (!b->hasAttribute("lwidth")) {
        return NULL;
    }
    return b->getAttribute("lwidth");
};

void mei::LineRendBaseMixIn::setLwidth(std::string _lwidth) {
    MeiAttribute *a = new MeiAttribute("lwidth", _lwidth);
    b->addAttribute(a);
};

bool mei::LineRendBaseMixIn::hasLwidth() {
    return b->hasAttribute("lwidth");
};

void mei::LineRendBaseMixIn::removeLwidth() {
    b->removeAttribute("lwidth");
};

/* include <lwidthmixin> */
mei::LinkingMixIn::LinkingMixIn(MeiElement *b) {
    this->b = b;
};

mei::LinkingMixIn::~LinkingMixIn() {}
MeiAttribute* mei::LinkingMixIn::getCopyof() {
    if (!b->hasAttribute("copyof")) {
        return NULL;
    }
    return b->getAttribute("copyof");
};

void mei::LinkingMixIn::setCopyof(std::string _copyof) {
    MeiAttribute *a = new MeiAttribute("copyof", _copyof);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasCopyof() {
    return b->hasAttribute("copyof");
};

void mei::LinkingMixIn::removeCopyof() {
    b->removeAttribute("copyof");
};
MeiAttribute* mei::LinkingMixIn::getCorresp() {
    if (!b->hasAttribute("corresp")) {
        return NULL;
    }
    return b->getAttribute("corresp");
};

void mei::LinkingMixIn::setCorresp(std::string _corresp) {
    MeiAttribute *a = new MeiAttribute("corresp", _corresp);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasCorresp() {
    return b->hasAttribute("corresp");
};

void mei::LinkingMixIn::removeCorresp() {
    b->removeAttribute("corresp");
};
MeiAttribute* mei::LinkingMixIn::getFollows() {
    if (!b->hasAttribute("follows")) {
        return NULL;
    }
    return b->getAttribute("follows");
};

void mei::LinkingMixIn::setFollows(std::string _follows) {
    MeiAttribute *a = new MeiAttribute("follows", _follows);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasFollows() {
    return b->hasAttribute("follows");
};

void mei::LinkingMixIn::removeFollows() {
    b->removeAttribute("follows");
};
MeiAttribute* mei::LinkingMixIn::getNext() {
    if (!b->hasAttribute("next")) {
        return NULL;
    }
    return b->getAttribute("next");
};

void mei::LinkingMixIn::setNext(std::string _next) {
    MeiAttribute *a = new MeiAttribute("next", _next);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasNext() {
    return b->hasAttribute("next");
};

void mei::LinkingMixIn::removeNext() {
    b->removeAttribute("next");
};
MeiAttribute* mei::LinkingMixIn::getPrecedes() {
    if (!b->hasAttribute("precedes")) {
        return NULL;
    }
    return b->getAttribute("precedes");
};

void mei::LinkingMixIn::setPrecedes(std::string _precedes) {
    MeiAttribute *a = new MeiAttribute("precedes", _precedes);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasPrecedes() {
    return b->hasAttribute("precedes");
};

void mei::LinkingMixIn::removePrecedes() {
    b->removeAttribute("precedes");
};
MeiAttribute* mei::LinkingMixIn::getPrev() {
    if (!b->hasAttribute("prev")) {
        return NULL;
    }
    return b->getAttribute("prev");
};

void mei::LinkingMixIn::setPrev(std::string _prev) {
    MeiAttribute *a = new MeiAttribute("prev", _prev);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasPrev() {
    return b->hasAttribute("prev");
};

void mei::LinkingMixIn::removePrev() {
    b->removeAttribute("prev");
};
MeiAttribute* mei::LinkingMixIn::getSameas() {
    if (!b->hasAttribute("sameas")) {
        return NULL;
    }
    return b->getAttribute("sameas");
};

void mei::LinkingMixIn::setSameas(std::string _sameas) {
    MeiAttribute *a = new MeiAttribute("sameas", _sameas);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasSameas() {
    return b->hasAttribute("sameas");
};

void mei::LinkingMixIn::removeSameas() {
    b->removeAttribute("sameas");
};
MeiAttribute* mei::LinkingMixIn::getSynch() {
    if (!b->hasAttribute("synch")) {
        return NULL;
    }
    return b->getAttribute("synch");
};

void mei::LinkingMixIn::setSynch(std::string _synch) {
    MeiAttribute *a = new MeiAttribute("synch", _synch);
    b->addAttribute(a);
};

bool mei::LinkingMixIn::hasSynch() {
    return b->hasAttribute("synch");
};

void mei::LinkingMixIn::removeSynch() {
    b->removeAttribute("synch");
};

/* include <synchmixin> */
mei::LyricStyleMixIn::LyricStyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::LyricStyleMixIn::~LyricStyleMixIn() {}
MeiAttribute* mei::LyricStyleMixIn::getLyricAlign() {
    if (!b->hasAttribute("lyric.align")) {
        return NULL;
    }
    return b->getAttribute("lyric.align");
};

void mei::LyricStyleMixIn::setLyricAlign(std::string _lyricalign) {
    MeiAttribute *a = new MeiAttribute("lyric.align", _lyricalign);
    b->addAttribute(a);
};

bool mei::LyricStyleMixIn::hasLyricAlign() {
    return b->hasAttribute("lyric.align");
};

void mei::LyricStyleMixIn::removeLyricAlign() {
    b->removeAttribute("lyric.align");
};
MeiAttribute* mei::LyricStyleMixIn::getLyricFam() {
    if (!b->hasAttribute("lyric.fam")) {
        return NULL;
    }
    return b->getAttribute("lyric.fam");
};

void mei::LyricStyleMixIn::setLyricFam(std::string _lyricfam) {
    MeiAttribute *a = new MeiAttribute("lyric.fam", _lyricfam);
    b->addAttribute(a);
};

bool mei::LyricStyleMixIn::hasLyricFam() {
    return b->hasAttribute("lyric.fam");
};

void mei::LyricStyleMixIn::removeLyricFam() {
    b->removeAttribute("lyric.fam");
};
MeiAttribute* mei::LyricStyleMixIn::getLyricName() {
    if (!b->hasAttribute("lyric.name")) {
        return NULL;
    }
    return b->getAttribute("lyric.name");
};

void mei::LyricStyleMixIn::setLyricName(std::string _lyricname) {
    MeiAttribute *a = new MeiAttribute("lyric.name", _lyricname);
    b->addAttribute(a);
};

bool mei::LyricStyleMixIn::hasLyricName() {
    return b->hasAttribute("lyric.name");
};

void mei::LyricStyleMixIn::removeLyricName() {
    b->removeAttribute("lyric.name");
};
MeiAttribute* mei::LyricStyleMixIn::getLyricSize() {
    if (!b->hasAttribute("lyric.size")) {
        return NULL;
    }
    return b->getAttribute("lyric.size");
};

void mei::LyricStyleMixIn::setLyricSize(std::string _lyricsize) {
    MeiAttribute *a = new MeiAttribute("lyric.size", _lyricsize);
    b->addAttribute(a);
};

bool mei::LyricStyleMixIn::hasLyricSize() {
    return b->hasAttribute("lyric.size");
};

void mei::LyricStyleMixIn::removeLyricSize() {
    b->removeAttribute("lyric.size");
};
MeiAttribute* mei::LyricStyleMixIn::getLyricStyle() {
    if (!b->hasAttribute("lyric.style")) {
        return NULL;
    }
    return b->getAttribute("lyric.style");
};

void mei::LyricStyleMixIn::setLyricStyle(std::string _lyricstyle) {
    MeiAttribute *a = new MeiAttribute("lyric.style", _lyricstyle);
    b->addAttribute(a);
};

bool mei::LyricStyleMixIn::hasLyricStyle() {
    return b->hasAttribute("lyric.style");
};

void mei::LyricStyleMixIn::removeLyricStyle() {
    b->removeAttribute("lyric.style");
};
MeiAttribute* mei::LyricStyleMixIn::getLyricWeight() {
    if (!b->hasAttribute("lyric.weight")) {
        return NULL;
    }
    return b->getAttribute("lyric.weight");
};

void mei::LyricStyleMixIn::setLyricWeight(std::string _lyricweight) {
    MeiAttribute *a = new MeiAttribute("lyric.weight", _lyricweight);
    b->addAttribute(a);
};

bool mei::LyricStyleMixIn::hasLyricWeight() {
    return b->hasAttribute("lyric.weight");
};

void mei::LyricStyleMixIn::removeLyricWeight() {
    b->removeAttribute("lyric.weight");
};

/* include <lyric.weightmixin> */
mei::MeasureNumbersMixIn::MeasureNumbersMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasureNumbersMixIn::~MeasureNumbersMixIn() {}
MeiAttribute* mei::MeasureNumbersMixIn::getMnumVisible() {
    if (!b->hasAttribute("mnum.visible")) {
        return NULL;
    }
    return b->getAttribute("mnum.visible");
};

void mei::MeasureNumbersMixIn::setMnumVisible(std::string _mnumvisible) {
    MeiAttribute *a = new MeiAttribute("mnum.visible", _mnumvisible);
    b->addAttribute(a);
};

bool mei::MeasureNumbersMixIn::hasMnumVisible() {
    return b->hasAttribute("mnum.visible");
};

void mei::MeasureNumbersMixIn::removeMnumVisible() {
    b->removeAttribute("mnum.visible");
};

/* include <mnum.visiblemixin> */
mei::MeasurementMixIn::MeasurementMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasurementMixIn::~MeasurementMixIn() {}
MeiAttribute* mei::MeasurementMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        return NULL;
    }
    return b->getAttribute("unit");
};

void mei::MeasurementMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::MeasurementMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::MeasurementMixIn::removeUnit() {
    b->removeAttribute("unit");
};

/* include <unitmixin> */
mei::MediaBoundsMixIn::MediaBoundsMixIn(MeiElement *b) {
    this->b = b;
};

mei::MediaBoundsMixIn::~MediaBoundsMixIn() {}
MeiAttribute* mei::MediaBoundsMixIn::getBegin() {
    if (!b->hasAttribute("begin")) {
        return NULL;
    }
    return b->getAttribute("begin");
};

void mei::MediaBoundsMixIn::setBegin(std::string _begin) {
    MeiAttribute *a = new MeiAttribute("begin", _begin);
    b->addAttribute(a);
};

bool mei::MediaBoundsMixIn::hasBegin() {
    return b->hasAttribute("begin");
};

void mei::MediaBoundsMixIn::removeBegin() {
    b->removeAttribute("begin");
};
MeiAttribute* mei::MediaBoundsMixIn::getEnd() {
    if (!b->hasAttribute("end")) {
        return NULL;
    }
    return b->getAttribute("end");
};

void mei::MediaBoundsMixIn::setEnd(std::string _end) {
    MeiAttribute *a = new MeiAttribute("end", _end);
    b->addAttribute(a);
};

bool mei::MediaBoundsMixIn::hasEnd() {
    return b->hasAttribute("end");
};

void mei::MediaBoundsMixIn::removeEnd() {
    b->removeAttribute("end");
};
MeiAttribute* mei::MediaBoundsMixIn::getBetype() {
    if (!b->hasAttribute("betype")) {
        return NULL;
    }
    return b->getAttribute("betype");
};

void mei::MediaBoundsMixIn::setBetype(std::string _betype) {
    MeiAttribute *a = new MeiAttribute("betype", _betype);
    b->addAttribute(a);
};

bool mei::MediaBoundsMixIn::hasBetype() {
    return b->hasAttribute("betype");
};

void mei::MediaBoundsMixIn::removeBetype() {
    b->removeAttribute("betype");
};

/* include <betypemixin> */
mei::MediumMixIn::MediumMixIn(MeiElement *b) {
    this->b = b;
};

mei::MediumMixIn::~MediumMixIn() {}
MeiAttribute* mei::MediumMixIn::getMedium() {
    if (!b->hasAttribute("medium")) {
        return NULL;
    }
    return b->getAttribute("medium");
};

void mei::MediumMixIn::setMedium(std::string _medium) {
    MeiAttribute *a = new MeiAttribute("medium", _medium);
    b->addAttribute(a);
};

bool mei::MediumMixIn::hasMedium() {
    return b->hasAttribute("medium");
};

void mei::MediumMixIn::removeMedium() {
    b->removeAttribute("medium");
};

/* include <mediummixin> */
mei::MeiVersionMixIn::MeiVersionMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeiVersionMixIn::~MeiVersionMixIn() {}
MeiAttribute* mei::MeiVersionMixIn::getMeiversion() {
    if (!b->hasAttribute("meiversion")) {
        return NULL;
    }
    return b->getAttribute("meiversion");
};

void mei::MeiVersionMixIn::setMeiversion(std::string _meiversion) {
    MeiAttribute *a = new MeiAttribute("meiversion", _meiversion);
    b->addAttribute(a);
};

bool mei::MeiVersionMixIn::hasMeiversion() {
    return b->hasAttribute("meiversion");
};

void mei::MeiVersionMixIn::removeMeiversion() {
    b->removeAttribute("meiversion");
};

/* include <meiversionmixin> */
mei::MetadataPointingMixIn::MetadataPointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::MetadataPointingMixIn::~MetadataPointingMixIn() {}
MeiAttribute* mei::MetadataPointingMixIn::getDecls() {
    if (!b->hasAttribute("decls")) {
        return NULL;
    }
    return b->getAttribute("decls");
};

void mei::MetadataPointingMixIn::setDecls(std::string _decls) {
    MeiAttribute *a = new MeiAttribute("decls", _decls);
    b->addAttribute(a);
};

bool mei::MetadataPointingMixIn::hasDecls() {
    return b->hasAttribute("decls");
};

void mei::MetadataPointingMixIn::removeDecls() {
    b->removeAttribute("decls");
};

/* include <declsmixin> */
mei::MeterConformanceMixIn::MeterConformanceMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterConformanceMixIn::~MeterConformanceMixIn() {}
MeiAttribute* mei::MeterConformanceMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        return NULL;
    }
    return b->getAttribute("metcon");
};

void mei::MeterConformanceMixIn::setMetcon(std::string _metcon) {
    MeiAttribute *a = new MeiAttribute("metcon", _metcon);
    b->addAttribute(a);
};

bool mei::MeterConformanceMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::MeterConformanceMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};

/* include <metconmixin> */
mei::MeterConformanceBarMixIn::MeterConformanceBarMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterConformanceBarMixIn::~MeterConformanceBarMixIn() {}
MeiAttribute* mei::MeterConformanceBarMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        return NULL;
    }
    return b->getAttribute("metcon");
};

void mei::MeterConformanceBarMixIn::setMetcon(std::string _metcon) {
    MeiAttribute *a = new MeiAttribute("metcon", _metcon);
    b->addAttribute(a);
};

bool mei::MeterConformanceBarMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::MeterConformanceBarMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};
MeiAttribute* mei::MeterConformanceBarMixIn::getControl() {
    if (!b->hasAttribute("control")) {
        return NULL;
    }
    return b->getAttribute("control");
};

void mei::MeterConformanceBarMixIn::setControl(std::string _control) {
    MeiAttribute *a = new MeiAttribute("control", _control);
    b->addAttribute(a);
};

bool mei::MeterConformanceBarMixIn::hasControl() {
    return b->hasAttribute("control");
};

void mei::MeterConformanceBarMixIn::removeControl() {
    b->removeAttribute("control");
};

/* include <controlmixin> */
mei::MeterSigLogMixIn::MeterSigLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigLogMixIn::~MeterSigLogMixIn() {}
MeiAttribute* mei::MeterSigLogMixIn::getCount() {
    if (!b->hasAttribute("count")) {
        return NULL;
    }
    return b->getAttribute("count");
};

void mei::MeterSigLogMixIn::setCount(std::string _count) {
    MeiAttribute *a = new MeiAttribute("count", _count);
    b->addAttribute(a);
};

bool mei::MeterSigLogMixIn::hasCount() {
    return b->hasAttribute("count");
};

void mei::MeterSigLogMixIn::removeCount() {
    b->removeAttribute("count");
};
MeiAttribute* mei::MeterSigLogMixIn::getSym() {
    if (!b->hasAttribute("sym")) {
        return NULL;
    }
    return b->getAttribute("sym");
};

void mei::MeterSigLogMixIn::setSym(std::string _sym) {
    MeiAttribute *a = new MeiAttribute("sym", _sym);
    b->addAttribute(a);
};

bool mei::MeterSigLogMixIn::hasSym() {
    return b->hasAttribute("sym");
};

void mei::MeterSigLogMixIn::removeSym() {
    b->removeAttribute("sym");
};
MeiAttribute* mei::MeterSigLogMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        return NULL;
    }
    return b->getAttribute("unit");
};

void mei::MeterSigLogMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::MeterSigLogMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::MeterSigLogMixIn::removeUnit() {
    b->removeAttribute("unit");
};

/* include <unitmixin> */
mei::MeterSigDefaultLogMixIn::MeterSigDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigDefaultLogMixIn::~MeterSigDefaultLogMixIn() {}
MeiAttribute* mei::MeterSigDefaultLogMixIn::getMeterCount() {
    if (!b->hasAttribute("meter.count")) {
        return NULL;
    }
    return b->getAttribute("meter.count");
};

void mei::MeterSigDefaultLogMixIn::setMeterCount(std::string _metercount) {
    MeiAttribute *a = new MeiAttribute("meter.count", _metercount);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultLogMixIn::hasMeterCount() {
    return b->hasAttribute("meter.count");
};

void mei::MeterSigDefaultLogMixIn::removeMeterCount() {
    b->removeAttribute("meter.count");
};
MeiAttribute* mei::MeterSigDefaultLogMixIn::getMeterUnit() {
    if (!b->hasAttribute("meter.unit")) {
        return NULL;
    }
    return b->getAttribute("meter.unit");
};

void mei::MeterSigDefaultLogMixIn::setMeterUnit(std::string _meterunit) {
    MeiAttribute *a = new MeiAttribute("meter.unit", _meterunit);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultLogMixIn::hasMeterUnit() {
    return b->hasAttribute("meter.unit");
};

void mei::MeterSigDefaultLogMixIn::removeMeterUnit() {
    b->removeAttribute("meter.unit");
};
MeiAttribute* mei::MeterSigDefaultLogMixIn::getMeterSym() {
    if (!b->hasAttribute("meter.sym")) {
        return NULL;
    }
    return b->getAttribute("meter.sym");
};

void mei::MeterSigDefaultLogMixIn::setMeterSym(std::string _metersym) {
    MeiAttribute *a = new MeiAttribute("meter.sym", _metersym);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultLogMixIn::hasMeterSym() {
    return b->hasAttribute("meter.sym");
};

void mei::MeterSigDefaultLogMixIn::removeMeterSym() {
    b->removeAttribute("meter.sym");
};

/* include <meter.symmixin> */
mei::MmTempoMixIn::MmTempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::MmTempoMixIn::~MmTempoMixIn() {}
MeiAttribute* mei::MmTempoMixIn::getMm() {
    if (!b->hasAttribute("mm")) {
        return NULL;
    }
    return b->getAttribute("mm");
};

void mei::MmTempoMixIn::setMm(std::string _mm) {
    MeiAttribute *a = new MeiAttribute("mm", _mm);
    b->addAttribute(a);
};

bool mei::MmTempoMixIn::hasMm() {
    return b->hasAttribute("mm");
};

void mei::MmTempoMixIn::removeMm() {
    b->removeAttribute("mm");
};
MeiAttribute* mei::MmTempoMixIn::getMmUnit() {
    if (!b->hasAttribute("mm.unit")) {
        return NULL;
    }
    return b->getAttribute("mm.unit");
};

void mei::MmTempoMixIn::setMmUnit(std::string _mmunit) {
    MeiAttribute *a = new MeiAttribute("mm.unit", _mmunit);
    b->addAttribute(a);
};

bool mei::MmTempoMixIn::hasMmUnit() {
    return b->hasAttribute("mm.unit");
};

void mei::MmTempoMixIn::removeMmUnit() {
    b->removeAttribute("mm.unit");
};
MeiAttribute* mei::MmTempoMixIn::getMmDots() {
    if (!b->hasAttribute("mm.dots")) {
        return NULL;
    }
    return b->getAttribute("mm.dots");
};

void mei::MmTempoMixIn::setMmDots(std::string _mmdots) {
    MeiAttribute *a = new MeiAttribute("mm.dots", _mmdots);
    b->addAttribute(a);
};

bool mei::MmTempoMixIn::hasMmDots() {
    return b->hasAttribute("mm.dots");
};

void mei::MmTempoMixIn::removeMmDots() {
    b->removeAttribute("mm.dots");
};

/* include <mm.dotsmixin> */
mei::MultinumMeasuresMixIn::MultinumMeasuresMixIn(MeiElement *b) {
    this->b = b;
};

mei::MultinumMeasuresMixIn::~MultinumMeasuresMixIn() {}
MeiAttribute* mei::MultinumMeasuresMixIn::getMultiNumber() {
    if (!b->hasAttribute("multi.number")) {
        return NULL;
    }
    return b->getAttribute("multi.number");
};

void mei::MultinumMeasuresMixIn::setMultiNumber(std::string _multinumber) {
    MeiAttribute *a = new MeiAttribute("multi.number", _multinumber);
    b->addAttribute(a);
};

bool mei::MultinumMeasuresMixIn::hasMultiNumber() {
    return b->hasAttribute("multi.number");
};

void mei::MultinumMeasuresMixIn::removeMultiNumber() {
    b->removeAttribute("multi.number");
};

/* include <multi.numbermixin> */
mei::NIntegerMixIn::NIntegerMixIn(MeiElement *b) {
    this->b = b;
};

mei::NIntegerMixIn::~NIntegerMixIn() {}
MeiAttribute* mei::NIntegerMixIn::getN() {
    if (!b->hasAttribute("n")) {
        return NULL;
    }
    return b->getAttribute("n");
};

void mei::NIntegerMixIn::setN(std::string _n) {
    MeiAttribute *a = new MeiAttribute("n", _n);
    b->addAttribute(a);
};

bool mei::NIntegerMixIn::hasN() {
    return b->hasAttribute("n");
};

void mei::NIntegerMixIn::removeN() {
    b->removeAttribute("n");
};

/* include <nmixin> */
mei::NNumberLikeMixIn::NNumberLikeMixIn(MeiElement *b) {
    this->b = b;
};

mei::NNumberLikeMixIn::~NNumberLikeMixIn() {}
MeiAttribute* mei::NNumberLikeMixIn::getN() {
    if (!b->hasAttribute("n")) {
        return NULL;
    }
    return b->getAttribute("n");
};

void mei::NNumberLikeMixIn::setN(std::string _n) {
    MeiAttribute *a = new MeiAttribute("n", _n);
    b->addAttribute(a);
};

bool mei::NNumberLikeMixIn::hasN() {
    return b->hasAttribute("n");
};

void mei::NNumberLikeMixIn::removeN() {
    b->removeAttribute("n");
};

/* include <nmixin> */
mei::NameMixIn::NameMixIn(MeiElement *b) {
    this->b = b;
};

mei::NameMixIn::~NameMixIn() {}
MeiAttribute* mei::NameMixIn::getNymref() {
    if (!b->hasAttribute("nymref")) {
        return NULL;
    }
    return b->getAttribute("nymref");
};

void mei::NameMixIn::setNymref(std::string _nymref) {
    MeiAttribute *a = new MeiAttribute("nymref", _nymref);
    b->addAttribute(a);
};

bool mei::NameMixIn::hasNymref() {
    return b->hasAttribute("nymref");
};

void mei::NameMixIn::removeNymref() {
    b->removeAttribute("nymref");
};
MeiAttribute* mei::NameMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        return NULL;
    }
    return b->getAttribute("role");
};

void mei::NameMixIn::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    b->addAttribute(a);
};

bool mei::NameMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::NameMixIn::removeRole() {
    b->removeAttribute("role");
};

/* include <rolemixin> */
mei::NotationStyleMixIn::NotationStyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::NotationStyleMixIn::~NotationStyleMixIn() {}
MeiAttribute* mei::NotationStyleMixIn::getMusicName() {
    if (!b->hasAttribute("music.name")) {
        return NULL;
    }
    return b->getAttribute("music.name");
};

void mei::NotationStyleMixIn::setMusicName(std::string _musicname) {
    MeiAttribute *a = new MeiAttribute("music.name", _musicname);
    b->addAttribute(a);
};

bool mei::NotationStyleMixIn::hasMusicName() {
    return b->hasAttribute("music.name");
};

void mei::NotationStyleMixIn::removeMusicName() {
    b->removeAttribute("music.name");
};
MeiAttribute* mei::NotationStyleMixIn::getMusicSize() {
    if (!b->hasAttribute("music.size")) {
        return NULL;
    }
    return b->getAttribute("music.size");
};

void mei::NotationStyleMixIn::setMusicSize(std::string _musicsize) {
    MeiAttribute *a = new MeiAttribute("music.size", _musicsize);
    b->addAttribute(a);
};

bool mei::NotationStyleMixIn::hasMusicSize() {
    return b->hasAttribute("music.size");
};

void mei::NotationStyleMixIn::removeMusicSize() {
    b->removeAttribute("music.size");
};

/* include <music.sizemixin> */
mei::NoteHeadsMixIn::NoteHeadsMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteHeadsMixIn::~NoteHeadsMixIn() {}
MeiAttribute* mei::NoteHeadsMixIn::getHeadAltsym() {
    if (!b->hasAttribute("head.altsym")) {
        return NULL;
    }
    return b->getAttribute("head.altsym");
};

void mei::NoteHeadsMixIn::setHeadAltsym(std::string _headaltsym) {
    MeiAttribute *a = new MeiAttribute("head.altsym", _headaltsym);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadAltsym() {
    return b->hasAttribute("head.altsym");
};

void mei::NoteHeadsMixIn::removeHeadAltsym() {
    b->removeAttribute("head.altsym");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadAuth() {
    if (!b->hasAttribute("head.auth")) {
        return NULL;
    }
    return b->getAttribute("head.auth");
};

void mei::NoteHeadsMixIn::setHeadAuth(std::string _headauth) {
    MeiAttribute *a = new MeiAttribute("head.auth", _headauth);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadAuth() {
    return b->hasAttribute("head.auth");
};

void mei::NoteHeadsMixIn::removeHeadAuth() {
    b->removeAttribute("head.auth");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadColor() {
    if (!b->hasAttribute("head.color")) {
        return NULL;
    }
    return b->getAttribute("head.color");
};

void mei::NoteHeadsMixIn::setHeadColor(std::string _headcolor) {
    MeiAttribute *a = new MeiAttribute("head.color", _headcolor);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadColor() {
    return b->hasAttribute("head.color");
};

void mei::NoteHeadsMixIn::removeHeadColor() {
    b->removeAttribute("head.color");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadFill() {
    if (!b->hasAttribute("head.fill")) {
        return NULL;
    }
    return b->getAttribute("head.fill");
};

void mei::NoteHeadsMixIn::setHeadFill(std::string _headfill) {
    MeiAttribute *a = new MeiAttribute("head.fill", _headfill);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadFill() {
    return b->hasAttribute("head.fill");
};

void mei::NoteHeadsMixIn::removeHeadFill() {
    b->removeAttribute("head.fill");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadFillcolor() {
    if (!b->hasAttribute("head.fillcolor")) {
        return NULL;
    }
    return b->getAttribute("head.fillcolor");
};

void mei::NoteHeadsMixIn::setHeadFillcolor(std::string _headfillcolor) {
    MeiAttribute *a = new MeiAttribute("head.fillcolor", _headfillcolor);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadFillcolor() {
    return b->hasAttribute("head.fillcolor");
};

void mei::NoteHeadsMixIn::removeHeadFillcolor() {
    b->removeAttribute("head.fillcolor");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadMod() {
    if (!b->hasAttribute("head.mod")) {
        return NULL;
    }
    return b->getAttribute("head.mod");
};

void mei::NoteHeadsMixIn::setHeadMod(std::string _headmod) {
    MeiAttribute *a = new MeiAttribute("head.mod", _headmod);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadMod() {
    return b->hasAttribute("head.mod");
};

void mei::NoteHeadsMixIn::removeHeadMod() {
    b->removeAttribute("head.mod");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadRotation() {
    if (!b->hasAttribute("head.rotation")) {
        return NULL;
    }
    return b->getAttribute("head.rotation");
};

void mei::NoteHeadsMixIn::setHeadRotation(std::string _headrotation) {
    MeiAttribute *a = new MeiAttribute("head.rotation", _headrotation);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadRotation() {
    return b->hasAttribute("head.rotation");
};

void mei::NoteHeadsMixIn::removeHeadRotation() {
    b->removeAttribute("head.rotation");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadShape() {
    if (!b->hasAttribute("head.shape")) {
        return NULL;
    }
    return b->getAttribute("head.shape");
};

void mei::NoteHeadsMixIn::setHeadShape(std::string _headshape) {
    MeiAttribute *a = new MeiAttribute("head.shape", _headshape);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadShape() {
    return b->hasAttribute("head.shape");
};

void mei::NoteHeadsMixIn::removeHeadShape() {
    b->removeAttribute("head.shape");
};
MeiAttribute* mei::NoteHeadsMixIn::getHeadVisible() {
    if (!b->hasAttribute("head.visible")) {
        return NULL;
    }
    return b->getAttribute("head.visible");
};

void mei::NoteHeadsMixIn::setHeadVisible(std::string _headvisible) {
    MeiAttribute *a = new MeiAttribute("head.visible", _headvisible);
    b->addAttribute(a);
};

bool mei::NoteHeadsMixIn::hasHeadVisible() {
    return b->hasAttribute("head.visible");
};

void mei::NoteHeadsMixIn::removeHeadVisible() {
    b->removeAttribute("head.visible");
};

/* include <head.visiblemixin> */
mei::OctaveMixIn::OctaveMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveMixIn::~OctaveMixIn() {}
MeiAttribute* mei::OctaveMixIn::getOct() {
    if (!b->hasAttribute("oct")) {
        return NULL;
    }
    return b->getAttribute("oct");
};

void mei::OctaveMixIn::setOct(std::string _oct) {
    MeiAttribute *a = new MeiAttribute("oct", _oct);
    b->addAttribute(a);
};

bool mei::OctaveMixIn::hasOct() {
    return b->hasAttribute("oct");
};

void mei::OctaveMixIn::removeOct() {
    b->removeAttribute("oct");
};

/* include <octmixin> */
mei::OctaveDefaultMixIn::OctaveDefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveDefaultMixIn::~OctaveDefaultMixIn() {}
MeiAttribute* mei::OctaveDefaultMixIn::getOctDefault() {
    if (!b->hasAttribute("oct.default")) {
        return NULL;
    }
    return b->getAttribute("oct.default");
};

void mei::OctaveDefaultMixIn::setOctDefault(std::string _octdefault) {
    MeiAttribute *a = new MeiAttribute("oct.default", _octdefault);
    b->addAttribute(a);
};

bool mei::OctaveDefaultMixIn::hasOctDefault() {
    return b->hasAttribute("oct.default");
};

void mei::OctaveDefaultMixIn::removeOctDefault() {
    b->removeAttribute("oct.default");
};

/* include <oct.defaultmixin> */
mei::OctaveDisplacementMixIn::OctaveDisplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveDisplacementMixIn::~OctaveDisplacementMixIn() {}
MeiAttribute* mei::OctaveDisplacementMixIn::getDis() {
    if (!b->hasAttribute("dis")) {
        return NULL;
    }
    return b->getAttribute("dis");
};

void mei::OctaveDisplacementMixIn::setDis(std::string _dis) {
    MeiAttribute *a = new MeiAttribute("dis", _dis);
    b->addAttribute(a);
};

bool mei::OctaveDisplacementMixIn::hasDis() {
    return b->hasAttribute("dis");
};

void mei::OctaveDisplacementMixIn::removeDis() {
    b->removeAttribute("dis");
};
MeiAttribute* mei::OctaveDisplacementMixIn::getDisPlace() {
    if (!b->hasAttribute("dis.place")) {
        return NULL;
    }
    return b->getAttribute("dis.place");
};

void mei::OctaveDisplacementMixIn::setDisPlace(std::string _displace) {
    MeiAttribute *a = new MeiAttribute("dis.place", _displace);
    b->addAttribute(a);
};

bool mei::OctaveDisplacementMixIn::hasDisPlace() {
    return b->hasAttribute("dis.place");
};

void mei::OctaveDisplacementMixIn::removeDisPlace() {
    b->removeAttribute("dis.place");
};

/* include <dis.placemixin> */
mei::OneLineStaffMixIn::OneLineStaffMixIn(MeiElement *b) {
    this->b = b;
};

mei::OneLineStaffMixIn::~OneLineStaffMixIn() {}
MeiAttribute* mei::OneLineStaffMixIn::getOntheline() {
    if (!b->hasAttribute("ontheline")) {
        return NULL;
    }
    return b->getAttribute("ontheline");
};

void mei::OneLineStaffMixIn::setOntheline(std::string _ontheline) {
    MeiAttribute *a = new MeiAttribute("ontheline", _ontheline);
    b->addAttribute(a);
};

bool mei::OneLineStaffMixIn::hasOntheline() {
    return b->hasAttribute("ontheline");
};

void mei::OneLineStaffMixIn::removeOntheline() {
    b->removeAttribute("ontheline");
};

/* include <onthelinemixin> */
mei::OptimizationMixIn::OptimizationMixIn(MeiElement *b) {
    this->b = b;
};

mei::OptimizationMixIn::~OptimizationMixIn() {}
MeiAttribute* mei::OptimizationMixIn::getOptimize() {
    if (!b->hasAttribute("optimize")) {
        return NULL;
    }
    return b->getAttribute("optimize");
};

void mei::OptimizationMixIn::setOptimize(std::string _optimize) {
    MeiAttribute *a = new MeiAttribute("optimize", _optimize);
    b->addAttribute(a);
};

bool mei::OptimizationMixIn::hasOptimize() {
    return b->hasAttribute("optimize");
};

void mei::OptimizationMixIn::removeOptimize() {
    b->removeAttribute("optimize");
};

/* include <optimizemixin> */
mei::OriginLayerIdentMixIn::OriginLayerIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginLayerIdentMixIn::~OriginLayerIdentMixIn() {}
MeiAttribute* mei::OriginLayerIdentMixIn::getOriginLayer() {
    if (!b->hasAttribute("origin.layer")) {
        return NULL;
    }
    return b->getAttribute("origin.layer");
};

void mei::OriginLayerIdentMixIn::setOriginLayer(std::string _originlayer) {
    MeiAttribute *a = new MeiAttribute("origin.layer", _originlayer);
    b->addAttribute(a);
};

bool mei::OriginLayerIdentMixIn::hasOriginLayer() {
    return b->hasAttribute("origin.layer");
};

void mei::OriginLayerIdentMixIn::removeOriginLayer() {
    b->removeAttribute("origin.layer");
};

/* include <origin.layermixin> */
mei::OriginStaffIdentMixIn::OriginStaffIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginStaffIdentMixIn::~OriginStaffIdentMixIn() {}
MeiAttribute* mei::OriginStaffIdentMixIn::getOriginStaff() {
    if (!b->hasAttribute("origin.staff")) {
        return NULL;
    }
    return b->getAttribute("origin.staff");
};

void mei::OriginStaffIdentMixIn::setOriginStaff(std::string _originstaff) {
    MeiAttribute *a = new MeiAttribute("origin.staff", _originstaff);
    b->addAttribute(a);
};

bool mei::OriginStaffIdentMixIn::hasOriginStaff() {
    return b->hasAttribute("origin.staff");
};

void mei::OriginStaffIdentMixIn::removeOriginStaff() {
    b->removeAttribute("origin.staff");
};

/* include <origin.staffmixin> */
mei::OriginStartEndIdMixIn::OriginStartEndIdMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginStartEndIdMixIn::~OriginStartEndIdMixIn() {}
MeiAttribute* mei::OriginStartEndIdMixIn::getOriginStartid() {
    if (!b->hasAttribute("origin.startid")) {
        return NULL;
    }
    return b->getAttribute("origin.startid");
};

void mei::OriginStartEndIdMixIn::setOriginStartid(std::string _originstartid) {
    MeiAttribute *a = new MeiAttribute("origin.startid", _originstartid);
    b->addAttribute(a);
};

bool mei::OriginStartEndIdMixIn::hasOriginStartid() {
    return b->hasAttribute("origin.startid");
};

void mei::OriginStartEndIdMixIn::removeOriginStartid() {
    b->removeAttribute("origin.startid");
};
MeiAttribute* mei::OriginStartEndIdMixIn::getOriginEndid() {
    if (!b->hasAttribute("origin.endid")) {
        return NULL;
    }
    return b->getAttribute("origin.endid");
};

void mei::OriginStartEndIdMixIn::setOriginEndid(std::string _originendid) {
    MeiAttribute *a = new MeiAttribute("origin.endid", _originendid);
    b->addAttribute(a);
};

bool mei::OriginStartEndIdMixIn::hasOriginEndid() {
    return b->hasAttribute("origin.endid");
};

void mei::OriginStartEndIdMixIn::removeOriginEndid() {
    b->removeAttribute("origin.endid");
};

/* include <origin.endidmixin> */
mei::OriginTimestampLogicalMixIn::OriginTimestampLogicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginTimestampLogicalMixIn::~OriginTimestampLogicalMixIn() {}
MeiAttribute* mei::OriginTimestampLogicalMixIn::getOriginTstamp() {
    if (!b->hasAttribute("origin.tstamp")) {
        return NULL;
    }
    return b->getAttribute("origin.tstamp");
};

void mei::OriginTimestampLogicalMixIn::setOriginTstamp(std::string _origintstamp) {
    MeiAttribute *a = new MeiAttribute("origin.tstamp", _origintstamp);
    b->addAttribute(a);
};

bool mei::OriginTimestampLogicalMixIn::hasOriginTstamp() {
    return b->hasAttribute("origin.tstamp");
};

void mei::OriginTimestampLogicalMixIn::removeOriginTstamp() {
    b->removeAttribute("origin.tstamp");
};
MeiAttribute* mei::OriginTimestampLogicalMixIn::getOriginTstamp2() {
    if (!b->hasAttribute("origin.tstamp2")) {
        return NULL;
    }
    return b->getAttribute("origin.tstamp2");
};

void mei::OriginTimestampLogicalMixIn::setOriginTstamp2(std::string _origintstamp2) {
    MeiAttribute *a = new MeiAttribute("origin.tstamp2", _origintstamp2);
    b->addAttribute(a);
};

bool mei::OriginTimestampLogicalMixIn::hasOriginTstamp2() {
    return b->hasAttribute("origin.tstamp2");
};

void mei::OriginTimestampLogicalMixIn::removeOriginTstamp2() {
    b->removeAttribute("origin.tstamp2");
};

/* include <origin.tstamp2mixin> */
mei::PagesMixIn::PagesMixIn(MeiElement *b) {
    this->b = b;
};

mei::PagesMixIn::~PagesMixIn() {}
MeiAttribute* mei::PagesMixIn::getPageHeight() {
    if (!b->hasAttribute("page.height")) {
        return NULL;
    }
    return b->getAttribute("page.height");
};

void mei::PagesMixIn::setPageHeight(std::string _pageheight) {
    MeiAttribute *a = new MeiAttribute("page.height", _pageheight);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageHeight() {
    return b->hasAttribute("page.height");
};

void mei::PagesMixIn::removePageHeight() {
    b->removeAttribute("page.height");
};
MeiAttribute* mei::PagesMixIn::getPageWidth() {
    if (!b->hasAttribute("page.width")) {
        return NULL;
    }
    return b->getAttribute("page.width");
};

void mei::PagesMixIn::setPageWidth(std::string _pagewidth) {
    MeiAttribute *a = new MeiAttribute("page.width", _pagewidth);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageWidth() {
    return b->hasAttribute("page.width");
};

void mei::PagesMixIn::removePageWidth() {
    b->removeAttribute("page.width");
};
MeiAttribute* mei::PagesMixIn::getPageTopmar() {
    if (!b->hasAttribute("page.topmar")) {
        return NULL;
    }
    return b->getAttribute("page.topmar");
};

void mei::PagesMixIn::setPageTopmar(std::string _pagetopmar) {
    MeiAttribute *a = new MeiAttribute("page.topmar", _pagetopmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageTopmar() {
    return b->hasAttribute("page.topmar");
};

void mei::PagesMixIn::removePageTopmar() {
    b->removeAttribute("page.topmar");
};
MeiAttribute* mei::PagesMixIn::getPageBotmar() {
    if (!b->hasAttribute("page.botmar")) {
        return NULL;
    }
    return b->getAttribute("page.botmar");
};

void mei::PagesMixIn::setPageBotmar(std::string _pagebotmar) {
    MeiAttribute *a = new MeiAttribute("page.botmar", _pagebotmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageBotmar() {
    return b->hasAttribute("page.botmar");
};

void mei::PagesMixIn::removePageBotmar() {
    b->removeAttribute("page.botmar");
};
MeiAttribute* mei::PagesMixIn::getPageLeftmar() {
    if (!b->hasAttribute("page.leftmar")) {
        return NULL;
    }
    return b->getAttribute("page.leftmar");
};

void mei::PagesMixIn::setPageLeftmar(std::string _pageleftmar) {
    MeiAttribute *a = new MeiAttribute("page.leftmar", _pageleftmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageLeftmar() {
    return b->hasAttribute("page.leftmar");
};

void mei::PagesMixIn::removePageLeftmar() {
    b->removeAttribute("page.leftmar");
};
MeiAttribute* mei::PagesMixIn::getPageRightmar() {
    if (!b->hasAttribute("page.rightmar")) {
        return NULL;
    }
    return b->getAttribute("page.rightmar");
};

void mei::PagesMixIn::setPageRightmar(std::string _pagerightmar) {
    MeiAttribute *a = new MeiAttribute("page.rightmar", _pagerightmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageRightmar() {
    return b->hasAttribute("page.rightmar");
};

void mei::PagesMixIn::removePageRightmar() {
    b->removeAttribute("page.rightmar");
};
MeiAttribute* mei::PagesMixIn::getPagePanels() {
    if (!b->hasAttribute("page.panels")) {
        return NULL;
    }
    return b->getAttribute("page.panels");
};

void mei::PagesMixIn::setPagePanels(std::string _pagepanels) {
    MeiAttribute *a = new MeiAttribute("page.panels", _pagepanels);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPagePanels() {
    return b->hasAttribute("page.panels");
};

void mei::PagesMixIn::removePagePanels() {
    b->removeAttribute("page.panels");
};
MeiAttribute* mei::PagesMixIn::getPageScale() {
    if (!b->hasAttribute("page.scale")) {
        return NULL;
    }
    return b->getAttribute("page.scale");
};

void mei::PagesMixIn::setPageScale(std::string _pagescale) {
    MeiAttribute *a = new MeiAttribute("page.scale", _pagescale);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageScale() {
    return b->hasAttribute("page.scale");
};

void mei::PagesMixIn::removePageScale() {
    b->removeAttribute("page.scale");
};

/* include <page.scalemixin> */
mei::PartIdentMixIn::PartIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::PartIdentMixIn::~PartIdentMixIn() {}
MeiAttribute* mei::PartIdentMixIn::getPart() {
    if (!b->hasAttribute("part")) {
        return NULL;
    }
    return b->getAttribute("part");
};

void mei::PartIdentMixIn::setPart(std::string _part) {
    MeiAttribute *a = new MeiAttribute("part", _part);
    b->addAttribute(a);
};

bool mei::PartIdentMixIn::hasPart() {
    return b->hasAttribute("part");
};

void mei::PartIdentMixIn::removePart() {
    b->removeAttribute("part");
};
MeiAttribute* mei::PartIdentMixIn::getPartstaff() {
    if (!b->hasAttribute("partstaff")) {
        return NULL;
    }
    return b->getAttribute("partstaff");
};

void mei::PartIdentMixIn::setPartstaff(std::string _partstaff) {
    MeiAttribute *a = new MeiAttribute("partstaff", _partstaff);
    b->addAttribute(a);
};

bool mei::PartIdentMixIn::hasPartstaff() {
    return b->hasAttribute("partstaff");
};

void mei::PartIdentMixIn::removePartstaff() {
    b->removeAttribute("partstaff");
};

/* include <partstaffmixin> */
mei::PitchMixIn::PitchMixIn(MeiElement *b) {
    this->b = b;
};

mei::PitchMixIn::~PitchMixIn() {}
MeiAttribute* mei::PitchMixIn::getPname() {
    if (!b->hasAttribute("pname")) {
        return NULL;
    }
    return b->getAttribute("pname");
};

void mei::PitchMixIn::setPname(std::string _pname) {
    MeiAttribute *a = new MeiAttribute("pname", _pname);
    b->addAttribute(a);
};

bool mei::PitchMixIn::hasPname() {
    return b->hasAttribute("pname");
};

void mei::PitchMixIn::removePname() {
    b->removeAttribute("pname");
};

/* include <pnamemixin> */
mei::PlacementOnStaffMixIn::PlacementOnStaffMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlacementOnStaffMixIn::~PlacementOnStaffMixIn() {}
MeiAttribute* mei::PlacementOnStaffMixIn::getOnstaff() {
    if (!b->hasAttribute("onstaff")) {
        return NULL;
    }
    return b->getAttribute("onstaff");
};

void mei::PlacementOnStaffMixIn::setOnstaff(std::string _onstaff) {
    MeiAttribute *a = new MeiAttribute("onstaff", _onstaff);
    b->addAttribute(a);
};

bool mei::PlacementOnStaffMixIn::hasOnstaff() {
    return b->hasAttribute("onstaff");
};

void mei::PlacementOnStaffMixIn::removeOnstaff() {
    b->removeAttribute("onstaff");
};

/* include <onstaffmixin> */
mei::PlacementRelEventMixIn::PlacementRelEventMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlacementRelEventMixIn::~PlacementRelEventMixIn() {}
MeiAttribute* mei::PlacementRelEventMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::PlacementRelEventMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::PlacementRelEventMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::PlacementRelEventMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::PlacementRelStaffMixIn::PlacementRelStaffMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlacementRelStaffMixIn::~PlacementRelStaffMixIn() {}
MeiAttribute* mei::PlacementRelStaffMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::PlacementRelStaffMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::PlacementRelStaffMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::PlacementRelStaffMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::PlistMixIn::PlistMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlistMixIn::~PlistMixIn() {}
MeiAttribute* mei::PlistMixIn::getPlist() {
    if (!b->hasAttribute("plist")) {
        return NULL;
    }
    return b->getAttribute("plist");
};

void mei::PlistMixIn::setPlist(std::string _plist) {
    MeiAttribute *a = new MeiAttribute("plist", _plist);
    b->addAttribute(a);
};

bool mei::PlistMixIn::hasPlist() {
    return b->hasAttribute("plist");
};

void mei::PlistMixIn::removePlist() {
    b->removeAttribute("plist");
};

/* include <plistmixin> */
mei::PointingMixIn::PointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::PointingMixIn::~PointingMixIn() {}
MeiAttribute* mei::PointingMixIn::getActuate() {
    if (!b->hasAttribute("xlink:actuate")) {
        return NULL;
    }
    return b->getAttribute("xlink:actuate");
};

void mei::PointingMixIn::setActuate(std::string _actuate) {
    MeiAttribute *a = new MeiAttribute("xlink:actuate", _actuate);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasActuate() {
    return b->hasAttribute("xlink:actuate");
};

void mei::PointingMixIn::removeActuate() {
    b->removeAttribute("xlink:actuate");
};
MeiAttribute* mei::PointingMixIn::getRole() {
    if (!b->hasAttribute("xlink:role")) {
        return NULL;
    }
    return b->getAttribute("xlink:role");
};

void mei::PointingMixIn::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("xlink:role", _role);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasRole() {
    return b->hasAttribute("xlink:role");
};

void mei::PointingMixIn::removeRole() {
    b->removeAttribute("xlink:role");
};
MeiAttribute* mei::PointingMixIn::getShow() {
    if (!b->hasAttribute("xlink:show")) {
        return NULL;
    }
    return b->getAttribute("xlink:show");
};

void mei::PointingMixIn::setShow(std::string _show) {
    MeiAttribute *a = new MeiAttribute("xlink:show", _show);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasShow() {
    return b->hasAttribute("xlink:show");
};

void mei::PointingMixIn::removeShow() {
    b->removeAttribute("xlink:show");
};
MeiAttribute* mei::PointingMixIn::getTarget() {
    if (!b->hasAttribute("xlink:target")) {
        return NULL;
    }
    return b->getAttribute("xlink:target");
};

void mei::PointingMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("xlink:target", _target);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasTarget() {
    return b->hasAttribute("xlink:target");
};

void mei::PointingMixIn::removeTarget() {
    b->removeAttribute("xlink:target");
};
MeiAttribute* mei::PointingMixIn::getTargettype() {
    if (!b->hasAttribute("xlink:targettype")) {
        return NULL;
    }
    return b->getAttribute("xlink:targettype");
};

void mei::PointingMixIn::setTargettype(std::string _targettype) {
    MeiAttribute *a = new MeiAttribute("xlink:targettype", _targettype);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasTargettype() {
    return b->hasAttribute("xlink:targettype");
};

void mei::PointingMixIn::removeTargettype() {
    b->removeAttribute("xlink:targettype");
};

/* include <targettypemixin> */
mei::QuantityMixIn::QuantityMixIn(MeiElement *b) {
    this->b = b;
};

mei::QuantityMixIn::~QuantityMixIn() {}
MeiAttribute* mei::QuantityMixIn::getQuantity() {
    if (!b->hasAttribute("quantity")) {
        return NULL;
    }
    return b->getAttribute("quantity");
};

void mei::QuantityMixIn::setQuantity(std::string _quantity) {
    MeiAttribute *a = new MeiAttribute("quantity", _quantity);
    b->addAttribute(a);
};

bool mei::QuantityMixIn::hasQuantity() {
    return b->hasAttribute("quantity");
};

void mei::QuantityMixIn::removeQuantity() {
    b->removeAttribute("quantity");
};

/* include <quantitymixin> */
mei::RangingMixIn::RangingMixIn(MeiElement *b) {
    this->b = b;
};

mei::RangingMixIn::~RangingMixIn() {}
MeiAttribute* mei::RangingMixIn::getAtleast() {
    if (!b->hasAttribute("atleast")) {
        return NULL;
    }
    return b->getAttribute("atleast");
};

void mei::RangingMixIn::setAtleast(std::string _atleast) {
    MeiAttribute *a = new MeiAttribute("atleast", _atleast);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasAtleast() {
    return b->hasAttribute("atleast");
};

void mei::RangingMixIn::removeAtleast() {
    b->removeAttribute("atleast");
};
MeiAttribute* mei::RangingMixIn::getAtmost() {
    if (!b->hasAttribute("atmost")) {
        return NULL;
    }
    return b->getAttribute("atmost");
};

void mei::RangingMixIn::setAtmost(std::string _atmost) {
    MeiAttribute *a = new MeiAttribute("atmost", _atmost);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasAtmost() {
    return b->hasAttribute("atmost");
};

void mei::RangingMixIn::removeAtmost() {
    b->removeAttribute("atmost");
};
MeiAttribute* mei::RangingMixIn::getMin() {
    if (!b->hasAttribute("min")) {
        return NULL;
    }
    return b->getAttribute("min");
};

void mei::RangingMixIn::setMin(std::string _min) {
    MeiAttribute *a = new MeiAttribute("min", _min);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasMin() {
    return b->hasAttribute("min");
};

void mei::RangingMixIn::removeMin() {
    b->removeAttribute("min");
};
MeiAttribute* mei::RangingMixIn::getMax() {
    if (!b->hasAttribute("max")) {
        return NULL;
    }
    return b->getAttribute("max");
};

void mei::RangingMixIn::setMax(std::string _max) {
    MeiAttribute *a = new MeiAttribute("max", _max);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasMax() {
    return b->hasAttribute("max");
};

void mei::RangingMixIn::removeMax() {
    b->removeAttribute("max");
};
MeiAttribute* mei::RangingMixIn::getConfidence() {
    if (!b->hasAttribute("confidence")) {
        return NULL;
    }
    return b->getAttribute("confidence");
};

void mei::RangingMixIn::setConfidence(std::string _confidence) {
    MeiAttribute *a = new MeiAttribute("confidence", _confidence);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasConfidence() {
    return b->hasAttribute("confidence");
};

void mei::RangingMixIn::removeConfidence() {
    b->removeAttribute("confidence");
};

/* include <confidencemixin> */
mei::ResponsibilityMixIn::ResponsibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::ResponsibilityMixIn::~ResponsibilityMixIn() {}
MeiAttribute* mei::ResponsibilityMixIn::getResp() {
    if (!b->hasAttribute("resp")) {
        return NULL;
    }
    return b->getAttribute("resp");
};

void mei::ResponsibilityMixIn::setResp(std::string _resp) {
    MeiAttribute *a = new MeiAttribute("resp", _resp);
    b->addAttribute(a);
};

bool mei::ResponsibilityMixIn::hasResp() {
    return b->hasAttribute("resp");
};

void mei::ResponsibilityMixIn::removeResp() {
    b->removeAttribute("resp");
};

/* include <respmixin> */
mei::RestdurationLogicalMixIn::RestdurationLogicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::RestdurationLogicalMixIn::~RestdurationLogicalMixIn() {}
MeiAttribute* mei::RestdurationLogicalMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        return NULL;
    }
    return b->getAttribute("dur");
};

void mei::RestdurationLogicalMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::RestdurationLogicalMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::RestdurationLogicalMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::ScalableMixIn::ScalableMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScalableMixIn::~ScalableMixIn() {}
MeiAttribute* mei::ScalableMixIn::getScale() {
    if (!b->hasAttribute("scale")) {
        return NULL;
    }
    return b->getAttribute("scale");
};

void mei::ScalableMixIn::setScale(std::string _scale) {
    MeiAttribute *a = new MeiAttribute("scale", _scale);
    b->addAttribute(a);
};

bool mei::ScalableMixIn::hasScale() {
    return b->hasAttribute("scale");
};

void mei::ScalableMixIn::removeScale() {
    b->removeAttribute("scale");
};

/* include <scalemixin> */
mei::SequenceMixIn::SequenceMixIn(MeiElement *b) {
    this->b = b;
};

mei::SequenceMixIn::~SequenceMixIn() {}
MeiAttribute* mei::SequenceMixIn::getSeq() {
    if (!b->hasAttribute("seq")) {
        return NULL;
    }
    return b->getAttribute("seq");
};

void mei::SequenceMixIn::setSeq(std::string _seq) {
    MeiAttribute *a = new MeiAttribute("seq", _seq);
    b->addAttribute(a);
};

bool mei::SequenceMixIn::hasSeq() {
    return b->hasAttribute("seq");
};

void mei::SequenceMixIn::removeSeq() {
    b->removeAttribute("seq");
};

/* include <seqmixin> */
mei::SlashCountMixIn::SlashCountMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlashCountMixIn::~SlashCountMixIn() {}
MeiAttribute* mei::SlashCountMixIn::getSlash() {
    if (!b->hasAttribute("slash")) {
        return NULL;
    }
    return b->getAttribute("slash");
};

void mei::SlashCountMixIn::setSlash(std::string _slash) {
    MeiAttribute *a = new MeiAttribute("slash", _slash);
    b->addAttribute(a);
};

bool mei::SlashCountMixIn::hasSlash() {
    return b->hasAttribute("slash");
};

void mei::SlashCountMixIn::removeSlash() {
    b->removeAttribute("slash");
};

/* include <slashmixin> */
mei::SlurPresentMixIn::SlurPresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlurPresentMixIn::~SlurPresentMixIn() {}
MeiAttribute* mei::SlurPresentMixIn::getSlur() {
    if (!b->hasAttribute("slur")) {
        return NULL;
    }
    return b->getAttribute("slur");
};

void mei::SlurPresentMixIn::setSlur(std::string _slur) {
    MeiAttribute *a = new MeiAttribute("slur", _slur);
    b->addAttribute(a);
};

bool mei::SlurPresentMixIn::hasSlur() {
    return b->hasAttribute("slur");
};

void mei::SlurPresentMixIn::removeSlur() {
    b->removeAttribute("slur");
};

/* include <slurmixin> */
mei::SourceMixIn::SourceMixIn(MeiElement *b) {
    this->b = b;
};

mei::SourceMixIn::~SourceMixIn() {}
MeiAttribute* mei::SourceMixIn::getSource() {
    if (!b->hasAttribute("source")) {
        return NULL;
    }
    return b->getAttribute("source");
};

void mei::SourceMixIn::setSource(std::string _source) {
    MeiAttribute *a = new MeiAttribute("source", _source);
    b->addAttribute(a);
};

bool mei::SourceMixIn::hasSource() {
    return b->hasAttribute("source");
};

void mei::SourceMixIn::removeSource() {
    b->removeAttribute("source");
};

/* include <sourcemixin> */
mei::SpacingMixIn::SpacingMixIn(MeiElement *b) {
    this->b = b;
};

mei::SpacingMixIn::~SpacingMixIn() {}
MeiAttribute* mei::SpacingMixIn::getSpacingPackexp() {
    if (!b->hasAttribute("spacing.packexp")) {
        return NULL;
    }
    return b->getAttribute("spacing.packexp");
};

void mei::SpacingMixIn::setSpacingPackexp(std::string _spacingpackexp) {
    MeiAttribute *a = new MeiAttribute("spacing.packexp", _spacingpackexp);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingPackexp() {
    return b->hasAttribute("spacing.packexp");
};

void mei::SpacingMixIn::removeSpacingPackexp() {
    b->removeAttribute("spacing.packexp");
};
MeiAttribute* mei::SpacingMixIn::getSpacingPackfact() {
    if (!b->hasAttribute("spacing.packfact")) {
        return NULL;
    }
    return b->getAttribute("spacing.packfact");
};

void mei::SpacingMixIn::setSpacingPackfact(std::string _spacingpackfact) {
    MeiAttribute *a = new MeiAttribute("spacing.packfact", _spacingpackfact);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingPackfact() {
    return b->hasAttribute("spacing.packfact");
};

void mei::SpacingMixIn::removeSpacingPackfact() {
    b->removeAttribute("spacing.packfact");
};
MeiAttribute* mei::SpacingMixIn::getSpacingStaff() {
    if (!b->hasAttribute("spacing.staff")) {
        return NULL;
    }
    return b->getAttribute("spacing.staff");
};

void mei::SpacingMixIn::setSpacingStaff(std::string _spacingstaff) {
    MeiAttribute *a = new MeiAttribute("spacing.staff", _spacingstaff);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingStaff() {
    return b->hasAttribute("spacing.staff");
};

void mei::SpacingMixIn::removeSpacingStaff() {
    b->removeAttribute("spacing.staff");
};
MeiAttribute* mei::SpacingMixIn::getSpacingSystem() {
    if (!b->hasAttribute("spacing.system")) {
        return NULL;
    }
    return b->getAttribute("spacing.system");
};

void mei::SpacingMixIn::setSpacingSystem(std::string _spacingsystem) {
    MeiAttribute *a = new MeiAttribute("spacing.system", _spacingsystem);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingSystem() {
    return b->hasAttribute("spacing.system");
};

void mei::SpacingMixIn::removeSpacingSystem() {
    b->removeAttribute("spacing.system");
};

/* include <spacing.systemmixin> */
mei::StaffLogMixIn::StaffLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffLogMixIn::~StaffLogMixIn() {}
MeiAttribute* mei::StaffLogMixIn::getDef() {
    if (!b->hasAttribute("def")) {
        return NULL;
    }
    return b->getAttribute("def");
};

void mei::StaffLogMixIn::setDef(std::string _def) {
    MeiAttribute *a = new MeiAttribute("def", _def);
    b->addAttribute(a);
};

bool mei::StaffLogMixIn::hasDef() {
    return b->hasAttribute("def");
};

void mei::StaffLogMixIn::removeDef() {
    b->removeAttribute("def");
};

/* include <defmixin> */
mei::StaffDefLogMixIn::StaffDefLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffDefLogMixIn::~StaffDefLogMixIn() {}
MeiAttribute* mei::StaffDefLogMixIn::getLines() {
    if (!b->hasAttribute("lines")) {
        return NULL;
    }
    return b->getAttribute("lines");
};

void mei::StaffDefLogMixIn::setLines(std::string _lines) {
    MeiAttribute *a = new MeiAttribute("lines", _lines);
    b->addAttribute(a);
};

bool mei::StaffDefLogMixIn::hasLines() {
    return b->hasAttribute("lines");
};

void mei::StaffDefLogMixIn::removeLines() {
    b->removeAttribute("lines");
};

/* include <linesmixin> */
mei::StaffGroupingSymMixIn::StaffGroupingSymMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffGroupingSymMixIn::~StaffGroupingSymMixIn() {}
MeiAttribute* mei::StaffGroupingSymMixIn::getSymbol() {
    if (!b->hasAttribute("symbol")) {
        return NULL;
    }
    return b->getAttribute("symbol");
};

void mei::StaffGroupingSymMixIn::setSymbol(std::string _symbol) {
    MeiAttribute *a = new MeiAttribute("symbol", _symbol);
    b->addAttribute(a);
};

bool mei::StaffGroupingSymMixIn::hasSymbol() {
    return b->hasAttribute("symbol");
};

void mei::StaffGroupingSymMixIn::removeSymbol() {
    b->removeAttribute("symbol");
};

/* include <symbolmixin> */
mei::StaffIdentMixIn::StaffIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffIdentMixIn::~StaffIdentMixIn() {}
MeiAttribute* mei::StaffIdentMixIn::getStaff() {
    if (!b->hasAttribute("staff")) {
        return NULL;
    }
    return b->getAttribute("staff");
};

void mei::StaffIdentMixIn::setStaff(std::string _staff) {
    MeiAttribute *a = new MeiAttribute("staff", _staff);
    b->addAttribute(a);
};

bool mei::StaffIdentMixIn::hasStaff() {
    return b->hasAttribute("staff");
};

void mei::StaffIdentMixIn::removeStaff() {
    b->removeAttribute("staff");
};

/* include <staffmixin> */
mei::StaffItemsMixIn::StaffItemsMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffItemsMixIn::~StaffItemsMixIn() {}
MeiAttribute* mei::StaffItemsMixIn::getAboveorder() {
    if (!b->hasAttribute("aboveorder")) {
        return NULL;
    }
    return b->getAttribute("aboveorder");
};

void mei::StaffItemsMixIn::setAboveorder(std::string _aboveorder) {
    MeiAttribute *a = new MeiAttribute("aboveorder", _aboveorder);
    b->addAttribute(a);
};

bool mei::StaffItemsMixIn::hasAboveorder() {
    return b->hasAttribute("aboveorder");
};

void mei::StaffItemsMixIn::removeAboveorder() {
    b->removeAttribute("aboveorder");
};
MeiAttribute* mei::StaffItemsMixIn::getBeloworder() {
    if (!b->hasAttribute("beloworder")) {
        return NULL;
    }
    return b->getAttribute("beloworder");
};

void mei::StaffItemsMixIn::setBeloworder(std::string _beloworder) {
    MeiAttribute *a = new MeiAttribute("beloworder", _beloworder);
    b->addAttribute(a);
};

bool mei::StaffItemsMixIn::hasBeloworder() {
    return b->hasAttribute("beloworder");
};

void mei::StaffItemsMixIn::removeBeloworder() {
    b->removeAttribute("beloworder");
};
MeiAttribute* mei::StaffItemsMixIn::getBetweenorder() {
    if (!b->hasAttribute("betweenorder")) {
        return NULL;
    }
    return b->getAttribute("betweenorder");
};

void mei::StaffItemsMixIn::setBetweenorder(std::string _betweenorder) {
    MeiAttribute *a = new MeiAttribute("betweenorder", _betweenorder);
    b->addAttribute(a);
};

bool mei::StaffItemsMixIn::hasBetweenorder() {
    return b->hasAttribute("betweenorder");
};

void mei::StaffItemsMixIn::removeBetweenorder() {
    b->removeAttribute("betweenorder");
};

/* include <betweenordermixin> */
mei::StaffLocMixIn::StaffLocMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffLocMixIn::~StaffLocMixIn() {}
MeiAttribute* mei::StaffLocMixIn::getLoc() {
    if (!b->hasAttribute("loc")) {
        return NULL;
    }
    return b->getAttribute("loc");
};

void mei::StaffLocMixIn::setLoc(std::string _loc) {
    MeiAttribute *a = new MeiAttribute("loc", _loc);
    b->addAttribute(a);
};

bool mei::StaffLocMixIn::hasLoc() {
    return b->hasAttribute("loc");
};

void mei::StaffLocMixIn::removeLoc() {
    b->removeAttribute("loc");
};

/* include <locmixin> */
mei::StaffLocPitchedMixIn::StaffLocPitchedMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffLocPitchedMixIn::~StaffLocPitchedMixIn() {}
MeiAttribute* mei::StaffLocPitchedMixIn::getPloc() {
    if (!b->hasAttribute("ploc")) {
        return NULL;
    }
    return b->getAttribute("ploc");
};

void mei::StaffLocPitchedMixIn::setPloc(std::string _ploc) {
    MeiAttribute *a = new MeiAttribute("ploc", _ploc);
    b->addAttribute(a);
};

bool mei::StaffLocPitchedMixIn::hasPloc() {
    return b->hasAttribute("ploc");
};

void mei::StaffLocPitchedMixIn::removePloc() {
    b->removeAttribute("ploc");
};
MeiAttribute* mei::StaffLocPitchedMixIn::getOloc() {
    if (!b->hasAttribute("oloc")) {
        return NULL;
    }
    return b->getAttribute("oloc");
};

void mei::StaffLocPitchedMixIn::setOloc(std::string _oloc) {
    MeiAttribute *a = new MeiAttribute("oloc", _oloc);
    b->addAttribute(a);
};

bool mei::StaffLocPitchedMixIn::hasOloc() {
    return b->hasAttribute("oloc");
};

void mei::StaffLocPitchedMixIn::removeOloc() {
    b->removeAttribute("oloc");
};

/* include <olocmixin> */
mei::StartEndIdMixIn::StartEndIdMixIn(MeiElement *b) {
    this->b = b;
};

mei::StartEndIdMixIn::~StartEndIdMixIn() {}
MeiAttribute* mei::StartEndIdMixIn::getEndid() {
    if (!b->hasAttribute("endid")) {
        return NULL;
    }
    return b->getAttribute("endid");
};

void mei::StartEndIdMixIn::setEndid(std::string _endid) {
    MeiAttribute *a = new MeiAttribute("endid", _endid);
    b->addAttribute(a);
};

bool mei::StartEndIdMixIn::hasEndid() {
    return b->hasAttribute("endid");
};

void mei::StartEndIdMixIn::removeEndid() {
    b->removeAttribute("endid");
};

/* include <endidmixin> */
mei::StartIdMixIn::StartIdMixIn(MeiElement *b) {
    this->b = b;
};

mei::StartIdMixIn::~StartIdMixIn() {}
MeiAttribute* mei::StartIdMixIn::getStartid() {
    if (!b->hasAttribute("startid")) {
        return NULL;
    }
    return b->getAttribute("startid");
};

void mei::StartIdMixIn::setStartid(std::string _startid) {
    MeiAttribute *a = new MeiAttribute("startid", _startid);
    b->addAttribute(a);
};

bool mei::StartIdMixIn::hasStartid() {
    return b->hasAttribute("startid");
};

void mei::StartIdMixIn::removeStartid() {
    b->removeAttribute("startid");
};

/* include <startidmixin> */
mei::StemsMixIn::StemsMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemsMixIn::~StemsMixIn() {}
MeiAttribute* mei::StemsMixIn::getStemDir() {
    if (!b->hasAttribute("stem.dir")) {
        return NULL;
    }
    return b->getAttribute("stem.dir");
};

void mei::StemsMixIn::setStemDir(std::string _stemdir) {
    MeiAttribute *a = new MeiAttribute("stem.dir", _stemdir);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemDir() {
    return b->hasAttribute("stem.dir");
};

void mei::StemsMixIn::removeStemDir() {
    b->removeAttribute("stem.dir");
};
MeiAttribute* mei::StemsMixIn::getStemLen() {
    if (!b->hasAttribute("stem.len")) {
        return NULL;
    }
    return b->getAttribute("stem.len");
};

void mei::StemsMixIn::setStemLen(std::string _stemlen) {
    MeiAttribute *a = new MeiAttribute("stem.len", _stemlen);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemLen() {
    return b->hasAttribute("stem.len");
};

void mei::StemsMixIn::removeStemLen() {
    b->removeAttribute("stem.len");
};
MeiAttribute* mei::StemsMixIn::getStemMod() {
    if (!b->hasAttribute("stem.mod")) {
        return NULL;
    }
    return b->getAttribute("stem.mod");
};

void mei::StemsMixIn::setStemMod(std::string _stemmod) {
    MeiAttribute *a = new MeiAttribute("stem.mod", _stemmod);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemMod() {
    return b->hasAttribute("stem.mod");
};

void mei::StemsMixIn::removeStemMod() {
    b->removeAttribute("stem.mod");
};
MeiAttribute* mei::StemsMixIn::getStemPos() {
    if (!b->hasAttribute("stem.pos")) {
        return NULL;
    }
    return b->getAttribute("stem.pos");
};

void mei::StemsMixIn::setStemPos(std::string _stempos) {
    MeiAttribute *a = new MeiAttribute("stem.pos", _stempos);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemPos() {
    return b->hasAttribute("stem.pos");
};

void mei::StemsMixIn::removeStemPos() {
    b->removeAttribute("stem.pos");
};
MeiAttribute* mei::StemsMixIn::getStemSameas() {
    if (!b->hasAttribute("stem.sameas")) {
        return NULL;
    }
    return b->getAttribute("stem.sameas");
};

void mei::StemsMixIn::setStemSameas(std::string _stemsameas) {
    MeiAttribute *a = new MeiAttribute("stem.sameas", _stemsameas);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemSameas() {
    return b->hasAttribute("stem.sameas");
};

void mei::StemsMixIn::removeStemSameas() {
    b->removeAttribute("stem.sameas");
};
MeiAttribute* mei::StemsMixIn::getStemVisible() {
    if (!b->hasAttribute("stem.visible")) {
        return NULL;
    }
    return b->getAttribute("stem.visible");
};

void mei::StemsMixIn::setStemVisible(std::string _stemvisible) {
    MeiAttribute *a = new MeiAttribute("stem.visible", _stemvisible);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemVisible() {
    return b->hasAttribute("stem.visible");
};

void mei::StemsMixIn::removeStemVisible() {
    b->removeAttribute("stem.visible");
};
MeiAttribute* mei::StemsMixIn::getStemX() {
    if (!b->hasAttribute("stem.x")) {
        return NULL;
    }
    return b->getAttribute("stem.x");
};

void mei::StemsMixIn::setStemX(std::string _stemx) {
    MeiAttribute *a = new MeiAttribute("stem.x", _stemx);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemX() {
    return b->hasAttribute("stem.x");
};

void mei::StemsMixIn::removeStemX() {
    b->removeAttribute("stem.x");
};
MeiAttribute* mei::StemsMixIn::getStemY() {
    if (!b->hasAttribute("stem.y")) {
        return NULL;
    }
    return b->getAttribute("stem.y");
};

void mei::StemsMixIn::setStemY(std::string _stemy) {
    MeiAttribute *a = new MeiAttribute("stem.y", _stemy);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemY() {
    return b->hasAttribute("stem.y");
};

void mei::StemsMixIn::removeStemY() {
    b->removeAttribute("stem.y");
};

/* include <stem.ymixin> */
mei::SylLogMixIn::SylLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::SylLogMixIn::~SylLogMixIn() {}
MeiAttribute* mei::SylLogMixIn::getCon() {
    if (!b->hasAttribute("con")) {
        return NULL;
    }
    return b->getAttribute("con");
};

void mei::SylLogMixIn::setCon(std::string _con) {
    MeiAttribute *a = new MeiAttribute("con", _con);
    b->addAttribute(a);
};

bool mei::SylLogMixIn::hasCon() {
    return b->hasAttribute("con");
};

void mei::SylLogMixIn::removeCon() {
    b->removeAttribute("con");
};
MeiAttribute* mei::SylLogMixIn::getWordpos() {
    if (!b->hasAttribute("wordpos")) {
        return NULL;
    }
    return b->getAttribute("wordpos");
};

void mei::SylLogMixIn::setWordpos(std::string _wordpos) {
    MeiAttribute *a = new MeiAttribute("wordpos", _wordpos);
    b->addAttribute(a);
};

bool mei::SylLogMixIn::hasWordpos() {
    return b->hasAttribute("wordpos");
};

void mei::SylLogMixIn::removeWordpos() {
    b->removeAttribute("wordpos");
};

/* include <wordposmixin> */
mei::SylTextMixIn::SylTextMixIn(MeiElement *b) {
    this->b = b;
};

mei::SylTextMixIn::~SylTextMixIn() {}
MeiAttribute* mei::SylTextMixIn::getSyl() {
    if (!b->hasAttribute("syl")) {
        return NULL;
    }
    return b->getAttribute("syl");
};

void mei::SylTextMixIn::setSyl(std::string _syl) {
    MeiAttribute *a = new MeiAttribute("syl", _syl);
    b->addAttribute(a);
};

bool mei::SylTextMixIn::hasSyl() {
    return b->hasAttribute("syl");
};

void mei::SylTextMixIn::removeSyl() {
    b->removeAttribute("syl");
};

/* include <sylmixin> */
mei::SystemsMixIn::SystemsMixIn(MeiElement *b) {
    this->b = b;
};

mei::SystemsMixIn::~SystemsMixIn() {}
MeiAttribute* mei::SystemsMixIn::getSystemLeftline() {
    if (!b->hasAttribute("system.leftline")) {
        return NULL;
    }
    return b->getAttribute("system.leftline");
};

void mei::SystemsMixIn::setSystemLeftline(std::string _systemleftline) {
    MeiAttribute *a = new MeiAttribute("system.leftline", _systemleftline);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemLeftline() {
    return b->hasAttribute("system.leftline");
};

void mei::SystemsMixIn::removeSystemLeftline() {
    b->removeAttribute("system.leftline");
};
MeiAttribute* mei::SystemsMixIn::getSystemLeftmar() {
    if (!b->hasAttribute("system.leftmar")) {
        return NULL;
    }
    return b->getAttribute("system.leftmar");
};

void mei::SystemsMixIn::setSystemLeftmar(std::string _systemleftmar) {
    MeiAttribute *a = new MeiAttribute("system.leftmar", _systemleftmar);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemLeftmar() {
    return b->hasAttribute("system.leftmar");
};

void mei::SystemsMixIn::removeSystemLeftmar() {
    b->removeAttribute("system.leftmar");
};
MeiAttribute* mei::SystemsMixIn::getSystemRightmar() {
    if (!b->hasAttribute("system.rightmar")) {
        return NULL;
    }
    return b->getAttribute("system.rightmar");
};

void mei::SystemsMixIn::setSystemRightmar(std::string _systemrightmar) {
    MeiAttribute *a = new MeiAttribute("system.rightmar", _systemrightmar);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemRightmar() {
    return b->hasAttribute("system.rightmar");
};

void mei::SystemsMixIn::removeSystemRightmar() {
    b->removeAttribute("system.rightmar");
};
MeiAttribute* mei::SystemsMixIn::getSystemTopmar() {
    if (!b->hasAttribute("system.topmar")) {
        return NULL;
    }
    return b->getAttribute("system.topmar");
};

void mei::SystemsMixIn::setSystemTopmar(std::string _systemtopmar) {
    MeiAttribute *a = new MeiAttribute("system.topmar", _systemtopmar);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemTopmar() {
    return b->hasAttribute("system.topmar");
};

void mei::SystemsMixIn::removeSystemTopmar() {
    b->removeAttribute("system.topmar");
};

/* include <system.topmarmixin> */
mei::TargetEvalMixIn::TargetEvalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TargetEvalMixIn::~TargetEvalMixIn() {}
MeiAttribute* mei::TargetEvalMixIn::getEvaluate() {
    if (!b->hasAttribute("evaluate")) {
        return NULL;
    }
    return b->getAttribute("evaluate");
};

void mei::TargetEvalMixIn::setEvaluate(std::string _evaluate) {
    MeiAttribute *a = new MeiAttribute("evaluate", _evaluate);
    b->addAttribute(a);
};

bool mei::TargetEvalMixIn::hasEvaluate() {
    return b->hasAttribute("evaluate");
};

void mei::TargetEvalMixIn::removeEvaluate() {
    b->removeAttribute("evaluate");
};

/* include <evaluatemixin> */
mei::TempoLogMixIn::TempoLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::TempoLogMixIn::~TempoLogMixIn() {}
MeiAttribute* mei::TempoLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::TempoLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::TempoLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::TempoLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::TextRenditionMixIn::TextRenditionMixIn(MeiElement *b) {
    this->b = b;
};

mei::TextRenditionMixIn::~TextRenditionMixIn() {}
MeiAttribute* mei::TextRenditionMixIn::getAltrend() {
    if (!b->hasAttribute("altrend")) {
        return NULL;
    }
    return b->getAttribute("altrend");
};

void mei::TextRenditionMixIn::setAltrend(std::string _altrend) {
    MeiAttribute *a = new MeiAttribute("altrend", _altrend);
    b->addAttribute(a);
};

bool mei::TextRenditionMixIn::hasAltrend() {
    return b->hasAttribute("altrend");
};

void mei::TextRenditionMixIn::removeAltrend() {
    b->removeAttribute("altrend");
};
MeiAttribute* mei::TextRenditionMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        return NULL;
    }
    return b->getAttribute("rend");
};

void mei::TextRenditionMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::TextRenditionMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::TextRenditionMixIn::removeRend() {
    b->removeAttribute("rend");
};

/* include <rendmixin> */
mei::TextStyleMixIn::TextStyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::TextStyleMixIn::~TextStyleMixIn() {}
MeiAttribute* mei::TextStyleMixIn::getTextFam() {
    if (!b->hasAttribute("text.fam")) {
        return NULL;
    }
    return b->getAttribute("text.fam");
};

void mei::TextStyleMixIn::setTextFam(std::string _textfam) {
    MeiAttribute *a = new MeiAttribute("text.fam", _textfam);
    b->addAttribute(a);
};

bool mei::TextStyleMixIn::hasTextFam() {
    return b->hasAttribute("text.fam");
};

void mei::TextStyleMixIn::removeTextFam() {
    b->removeAttribute("text.fam");
};
MeiAttribute* mei::TextStyleMixIn::getTextName() {
    if (!b->hasAttribute("text.name")) {
        return NULL;
    }
    return b->getAttribute("text.name");
};

void mei::TextStyleMixIn::setTextName(std::string _textname) {
    MeiAttribute *a = new MeiAttribute("text.name", _textname);
    b->addAttribute(a);
};

bool mei::TextStyleMixIn::hasTextName() {
    return b->hasAttribute("text.name");
};

void mei::TextStyleMixIn::removeTextName() {
    b->removeAttribute("text.name");
};
MeiAttribute* mei::TextStyleMixIn::getTextSize() {
    if (!b->hasAttribute("text.size")) {
        return NULL;
    }
    return b->getAttribute("text.size");
};

void mei::TextStyleMixIn::setTextSize(std::string _textsize) {
    MeiAttribute *a = new MeiAttribute("text.size", _textsize);
    b->addAttribute(a);
};

bool mei::TextStyleMixIn::hasTextSize() {
    return b->hasAttribute("text.size");
};

void mei::TextStyleMixIn::removeTextSize() {
    b->removeAttribute("text.size");
};
MeiAttribute* mei::TextStyleMixIn::getTextStyle() {
    if (!b->hasAttribute("text.style")) {
        return NULL;
    }
    return b->getAttribute("text.style");
};

void mei::TextStyleMixIn::setTextStyle(std::string _textstyle) {
    MeiAttribute *a = new MeiAttribute("text.style", _textstyle);
    b->addAttribute(a);
};

bool mei::TextStyleMixIn::hasTextStyle() {
    return b->hasAttribute("text.style");
};

void mei::TextStyleMixIn::removeTextStyle() {
    b->removeAttribute("text.style");
};
MeiAttribute* mei::TextStyleMixIn::getTextWeight() {
    if (!b->hasAttribute("text.weight")) {
        return NULL;
    }
    return b->getAttribute("text.weight");
};

void mei::TextStyleMixIn::setTextWeight(std::string _textweight) {
    MeiAttribute *a = new MeiAttribute("text.weight", _textweight);
    b->addAttribute(a);
};

bool mei::TextStyleMixIn::hasTextWeight() {
    return b->hasAttribute("text.weight");
};

void mei::TextStyleMixIn::removeTextWeight() {
    b->removeAttribute("text.weight");
};

/* include <text.weightmixin> */
mei::TiePresentMixIn::TiePresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::TiePresentMixIn::~TiePresentMixIn() {}
MeiAttribute* mei::TiePresentMixIn::getTie() {
    if (!b->hasAttribute("tie")) {
        return NULL;
    }
    return b->getAttribute("tie");
};

void mei::TiePresentMixIn::setTie(std::string _tie) {
    MeiAttribute *a = new MeiAttribute("tie", _tie);
    b->addAttribute(a);
};

bool mei::TiePresentMixIn::hasTie() {
    return b->hasAttribute("tie");
};

void mei::TiePresentMixIn::removeTie() {
    b->removeAttribute("tie");
};

/* include <tiemixin> */
mei::TimestampLogicalMixIn::TimestampLogicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimestampLogicalMixIn::~TimestampLogicalMixIn() {}
MeiAttribute* mei::TimestampLogicalMixIn::getTstamp() {
    if (!b->hasAttribute("tstamp")) {
        return NULL;
    }
    return b->getAttribute("tstamp");
};

void mei::TimestampLogicalMixIn::setTstamp(std::string _tstamp) {
    MeiAttribute *a = new MeiAttribute("tstamp", _tstamp);
    b->addAttribute(a);
};

bool mei::TimestampLogicalMixIn::hasTstamp() {
    return b->hasAttribute("tstamp");
};

void mei::TimestampLogicalMixIn::removeTstamp() {
    b->removeAttribute("tstamp");
};

/* include <tstampmixin> */
mei::Timestamp2LogicalMixIn::Timestamp2LogicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Timestamp2LogicalMixIn::~Timestamp2LogicalMixIn() {}
MeiAttribute* mei::Timestamp2LogicalMixIn::getTstamp2() {
    if (!b->hasAttribute("tstamp2")) {
        return NULL;
    }
    return b->getAttribute("tstamp2");
};

void mei::Timestamp2LogicalMixIn::setTstamp2(std::string _tstamp2) {
    MeiAttribute *a = new MeiAttribute("tstamp2", _tstamp2);
    b->addAttribute(a);
};

bool mei::Timestamp2LogicalMixIn::hasTstamp2() {
    return b->hasAttribute("tstamp2");
};

void mei::Timestamp2LogicalMixIn::removeTstamp2() {
    b->removeAttribute("tstamp2");
};

/* include <tstamp2mixin> */
mei::TranspositionMixIn::TranspositionMixIn(MeiElement *b) {
    this->b = b;
};

mei::TranspositionMixIn::~TranspositionMixIn() {}
MeiAttribute* mei::TranspositionMixIn::getTransDiat() {
    if (!b->hasAttribute("trans.diat")) {
        return NULL;
    }
    return b->getAttribute("trans.diat");
};

void mei::TranspositionMixIn::setTransDiat(std::string _transdiat) {
    MeiAttribute *a = new MeiAttribute("trans.diat", _transdiat);
    b->addAttribute(a);
};

bool mei::TranspositionMixIn::hasTransDiat() {
    return b->hasAttribute("trans.diat");
};

void mei::TranspositionMixIn::removeTransDiat() {
    b->removeAttribute("trans.diat");
};
MeiAttribute* mei::TranspositionMixIn::getTransSemi() {
    if (!b->hasAttribute("trans.semi")) {
        return NULL;
    }
    return b->getAttribute("trans.semi");
};

void mei::TranspositionMixIn::setTransSemi(std::string _transsemi) {
    MeiAttribute *a = new MeiAttribute("trans.semi", _transsemi);
    b->addAttribute(a);
};

bool mei::TranspositionMixIn::hasTransSemi() {
    return b->hasAttribute("trans.semi");
};

void mei::TranspositionMixIn::removeTransSemi() {
    b->removeAttribute("trans.semi");
};

/* include <trans.semimixin> */
mei::TupletPresentMixIn::TupletPresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletPresentMixIn::~TupletPresentMixIn() {}
MeiAttribute* mei::TupletPresentMixIn::getTuplet() {
    if (!b->hasAttribute("tuplet")) {
        return NULL;
    }
    return b->getAttribute("tuplet");
};

void mei::TupletPresentMixIn::setTuplet(std::string _tuplet) {
    MeiAttribute *a = new MeiAttribute("tuplet", _tuplet);
    b->addAttribute(a);
};

bool mei::TupletPresentMixIn::hasTuplet() {
    return b->hasAttribute("tuplet");
};

void mei::TupletPresentMixIn::removeTuplet() {
    b->removeAttribute("tuplet");
};

/* include <tupletmixin> */
mei::TypedMixIn::TypedMixIn(MeiElement *b) {
    this->b = b;
};

mei::TypedMixIn::~TypedMixIn() {}
MeiAttribute* mei::TypedMixIn::getType() {
    if (!b->hasAttribute("type")) {
        return NULL;
    }
    return b->getAttribute("type");
};

void mei::TypedMixIn::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    b->addAttribute(a);
};

bool mei::TypedMixIn::hasType() {
    return b->hasAttribute("type");
};

void mei::TypedMixIn::removeType() {
    b->removeAttribute("type");
};

/* include <typemixin> */
mei::TypographyMixIn::TypographyMixIn(MeiElement *b) {
    this->b = b;
};

mei::TypographyMixIn::~TypographyMixIn() {}
MeiAttribute* mei::TypographyMixIn::getFontfam() {
    if (!b->hasAttribute("fontfam")) {
        return NULL;
    }
    return b->getAttribute("fontfam");
};

void mei::TypographyMixIn::setFontfam(std::string _fontfam) {
    MeiAttribute *a = new MeiAttribute("fontfam", _fontfam);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontfam() {
    return b->hasAttribute("fontfam");
};

void mei::TypographyMixIn::removeFontfam() {
    b->removeAttribute("fontfam");
};
MeiAttribute* mei::TypographyMixIn::getFontname() {
    if (!b->hasAttribute("fontname")) {
        return NULL;
    }
    return b->getAttribute("fontname");
};

void mei::TypographyMixIn::setFontname(std::string _fontname) {
    MeiAttribute *a = new MeiAttribute("fontname", _fontname);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontname() {
    return b->hasAttribute("fontname");
};

void mei::TypographyMixIn::removeFontname() {
    b->removeAttribute("fontname");
};
MeiAttribute* mei::TypographyMixIn::getFontsize() {
    if (!b->hasAttribute("fontsize")) {
        return NULL;
    }
    return b->getAttribute("fontsize");
};

void mei::TypographyMixIn::setFontsize(std::string _fontsize) {
    MeiAttribute *a = new MeiAttribute("fontsize", _fontsize);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontsize() {
    return b->hasAttribute("fontsize");
};

void mei::TypographyMixIn::removeFontsize() {
    b->removeAttribute("fontsize");
};
MeiAttribute* mei::TypographyMixIn::getFontstyle() {
    if (!b->hasAttribute("fontstyle")) {
        return NULL;
    }
    return b->getAttribute("fontstyle");
};

void mei::TypographyMixIn::setFontstyle(std::string _fontstyle) {
    MeiAttribute *a = new MeiAttribute("fontstyle", _fontstyle);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontstyle() {
    return b->hasAttribute("fontstyle");
};

void mei::TypographyMixIn::removeFontstyle() {
    b->removeAttribute("fontstyle");
};
MeiAttribute* mei::TypographyMixIn::getFontweight() {
    if (!b->hasAttribute("fontweight")) {
        return NULL;
    }
    return b->getAttribute("fontweight");
};

void mei::TypographyMixIn::setFontweight(std::string _fontweight) {
    MeiAttribute *a = new MeiAttribute("fontweight", _fontweight);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontweight() {
    return b->hasAttribute("fontweight");
};

void mei::TypographyMixIn::removeFontweight() {
    b->removeAttribute("fontweight");
};

/* include <fontweightmixin> */
mei::VerticalAlignMixIn::VerticalAlignMixIn(MeiElement *b) {
    this->b = b;
};

mei::VerticalAlignMixIn::~VerticalAlignMixIn() {}
MeiAttribute* mei::VerticalAlignMixIn::getValign() {
    if (!b->hasAttribute("valign")) {
        return NULL;
    }
    return b->getAttribute("valign");
};

void mei::VerticalAlignMixIn::setValign(std::string _valign) {
    MeiAttribute *a = new MeiAttribute("valign", _valign);
    b->addAttribute(a);
};

bool mei::VerticalAlignMixIn::hasValign() {
    return b->hasAttribute("valign");
};

void mei::VerticalAlignMixIn::removeValign() {
    b->removeAttribute("valign");
};

/* include <valignmixin> */
mei::VerticalGroupMixIn::VerticalGroupMixIn(MeiElement *b) {
    this->b = b;
};

mei::VerticalGroupMixIn::~VerticalGroupMixIn() {}
MeiAttribute* mei::VerticalGroupMixIn::getVgrp() {
    if (!b->hasAttribute("vgrp")) {
        return NULL;
    }
    return b->getAttribute("vgrp");
};

void mei::VerticalGroupMixIn::setVgrp(std::string _vgrp) {
    MeiAttribute *a = new MeiAttribute("vgrp", _vgrp);
    b->addAttribute(a);
};

bool mei::VerticalGroupMixIn::hasVgrp() {
    return b->hasAttribute("vgrp");
};

void mei::VerticalGroupMixIn::removeVgrp() {
    b->removeAttribute("vgrp");
};

/* include <vgrpmixin> */
mei::VisibilityMixIn::VisibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisibilityMixIn::~VisibilityMixIn() {}
MeiAttribute* mei::VisibilityMixIn::getVisible() {
    if (!b->hasAttribute("visible")) {
        return NULL;
    }
    return b->getAttribute("visible");
};

void mei::VisibilityMixIn::setVisible(std::string _visible) {
    MeiAttribute *a = new MeiAttribute("visible", _visible);
    b->addAttribute(a);
};

bool mei::VisibilityMixIn::hasVisible() {
    return b->hasAttribute("visible");
};

void mei::VisibilityMixIn::removeVisible() {
    b->removeAttribute("visible");
};

/* include <visiblemixin> */
mei::VisualOffsetHoMixIn::VisualOffsetHoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualOffsetHoMixIn::~VisualOffsetHoMixIn() {}
MeiAttribute* mei::VisualOffsetHoMixIn::getHo() {
    if (!b->hasAttribute("ho")) {
        return NULL;
    }
    return b->getAttribute("ho");
};

void mei::VisualOffsetHoMixIn::setHo(std::string _ho) {
    MeiAttribute *a = new MeiAttribute("ho", _ho);
    b->addAttribute(a);
};

bool mei::VisualOffsetHoMixIn::hasHo() {
    return b->hasAttribute("ho");
};

void mei::VisualOffsetHoMixIn::removeHo() {
    b->removeAttribute("ho");
};

/* include <homixin> */
mei::VisualOffsetToMixIn::VisualOffsetToMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualOffsetToMixIn::~VisualOffsetToMixIn() {}
MeiAttribute* mei::VisualOffsetToMixIn::getTo() {
    if (!b->hasAttribute("to")) {
        return NULL;
    }
    return b->getAttribute("to");
};

void mei::VisualOffsetToMixIn::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    b->addAttribute(a);
};

bool mei::VisualOffsetToMixIn::hasTo() {
    return b->hasAttribute("to");
};

void mei::VisualOffsetToMixIn::removeTo() {
    b->removeAttribute("to");
};

/* include <tomixin> */
mei::VisualOffsetVoMixIn::VisualOffsetVoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualOffsetVoMixIn::~VisualOffsetVoMixIn() {}
MeiAttribute* mei::VisualOffsetVoMixIn::getVo() {
    if (!b->hasAttribute("vo")) {
        return NULL;
    }
    return b->getAttribute("vo");
};

void mei::VisualOffsetVoMixIn::setVo(std::string _vo) {
    MeiAttribute *a = new MeiAttribute("vo", _vo);
    b->addAttribute(a);
};

bool mei::VisualOffsetVoMixIn::hasVo() {
    return b->hasAttribute("vo");
};

void mei::VisualOffsetVoMixIn::removeVo() {
    b->removeAttribute("vo");
};

/* include <vomixin> */
mei::VisualOffset2HoMixIn::VisualOffset2HoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualOffset2HoMixIn::~VisualOffset2HoMixIn() {}
MeiAttribute* mei::VisualOffset2HoMixIn::getStartho() {
    if (!b->hasAttribute("startho")) {
        return NULL;
    }
    return b->getAttribute("startho");
};

void mei::VisualOffset2HoMixIn::setStartho(std::string _startho) {
    MeiAttribute *a = new MeiAttribute("startho", _startho);
    b->addAttribute(a);
};

bool mei::VisualOffset2HoMixIn::hasStartho() {
    return b->hasAttribute("startho");
};

void mei::VisualOffset2HoMixIn::removeStartho() {
    b->removeAttribute("startho");
};
MeiAttribute* mei::VisualOffset2HoMixIn::getEndho() {
    if (!b->hasAttribute("endho")) {
        return NULL;
    }
    return b->getAttribute("endho");
};

void mei::VisualOffset2HoMixIn::setEndho(std::string _endho) {
    MeiAttribute *a = new MeiAttribute("endho", _endho);
    b->addAttribute(a);
};

bool mei::VisualOffset2HoMixIn::hasEndho() {
    return b->hasAttribute("endho");
};

void mei::VisualOffset2HoMixIn::removeEndho() {
    b->removeAttribute("endho");
};

/* include <endhomixin> */
mei::VisualOffset2ToMixIn::VisualOffset2ToMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualOffset2ToMixIn::~VisualOffset2ToMixIn() {}
MeiAttribute* mei::VisualOffset2ToMixIn::getStartto() {
    if (!b->hasAttribute("startto")) {
        return NULL;
    }
    return b->getAttribute("startto");
};

void mei::VisualOffset2ToMixIn::setStartto(std::string _startto) {
    MeiAttribute *a = new MeiAttribute("startto", _startto);
    b->addAttribute(a);
};

bool mei::VisualOffset2ToMixIn::hasStartto() {
    return b->hasAttribute("startto");
};

void mei::VisualOffset2ToMixIn::removeStartto() {
    b->removeAttribute("startto");
};
MeiAttribute* mei::VisualOffset2ToMixIn::getEndto() {
    if (!b->hasAttribute("endto")) {
        return NULL;
    }
    return b->getAttribute("endto");
};

void mei::VisualOffset2ToMixIn::setEndto(std::string _endto) {
    MeiAttribute *a = new MeiAttribute("endto", _endto);
    b->addAttribute(a);
};

bool mei::VisualOffset2ToMixIn::hasEndto() {
    return b->hasAttribute("endto");
};

void mei::VisualOffset2ToMixIn::removeEndto() {
    b->removeAttribute("endto");
};

/* include <endtomixin> */
mei::VisualOffset2VoMixIn::VisualOffset2VoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualOffset2VoMixIn::~VisualOffset2VoMixIn() {}
MeiAttribute* mei::VisualOffset2VoMixIn::getStartvo() {
    if (!b->hasAttribute("startvo")) {
        return NULL;
    }
    return b->getAttribute("startvo");
};

void mei::VisualOffset2VoMixIn::setStartvo(std::string _startvo) {
    MeiAttribute *a = new MeiAttribute("startvo", _startvo);
    b->addAttribute(a);
};

bool mei::VisualOffset2VoMixIn::hasStartvo() {
    return b->hasAttribute("startvo");
};

void mei::VisualOffset2VoMixIn::removeStartvo() {
    b->removeAttribute("startvo");
};
MeiAttribute* mei::VisualOffset2VoMixIn::getEndvo() {
    if (!b->hasAttribute("endvo")) {
        return NULL;
    }
    return b->getAttribute("endvo");
};

void mei::VisualOffset2VoMixIn::setEndvo(std::string _endvo) {
    MeiAttribute *a = new MeiAttribute("endvo", _endvo);
    b->addAttribute(a);
};

bool mei::VisualOffset2VoMixIn::hasEndvo() {
    return b->hasAttribute("endvo");
};

void mei::VisualOffset2VoMixIn::removeEndvo() {
    b->removeAttribute("endvo");
};

/* include <endvomixin> */
mei::VoltaGroupingSymMixIn::VoltaGroupingSymMixIn(MeiElement *b) {
    this->b = b;
};

mei::VoltaGroupingSymMixIn::~VoltaGroupingSymMixIn() {}
MeiAttribute* mei::VoltaGroupingSymMixIn::getVoltasym() {
    if (!b->hasAttribute("voltasym")) {
        return NULL;
    }
    return b->getAttribute("voltasym");
};

void mei::VoltaGroupingSymMixIn::setVoltasym(std::string _voltasym) {
    MeiAttribute *a = new MeiAttribute("voltasym", _voltasym);
    b->addAttribute(a);
};

bool mei::VoltaGroupingSymMixIn::hasVoltasym() {
    return b->hasAttribute("voltasym");
};

void mei::VoltaGroupingSymMixIn::removeVoltasym() {
    b->removeAttribute("voltasym");
};

/* include <voltasymmixin> */
mei::WhitespaceMixIn::WhitespaceMixIn(MeiElement *b) {
    this->b = b;
};

mei::WhitespaceMixIn::~WhitespaceMixIn() {}
MeiAttribute* mei::WhitespaceMixIn::getSpace() {
    if (!b->hasAttribute("xml:space")) {
        return NULL;
    }
    return b->getAttribute("xml:space");
};

void mei::WhitespaceMixIn::setSpace(std::string _space) {
    MeiAttribute *a = new MeiAttribute("xml:space", _space);
    b->addAttribute(a);
};

bool mei::WhitespaceMixIn::hasSpace() {
    return b->hasAttribute("xml:space");
};

void mei::WhitespaceMixIn::removeSpace() {
    b->removeAttribute("xml:space");
};

/* include <spacemixin> */
mei::WidthMixIn::WidthMixIn(MeiElement *b) {
    this->b = b;
};

mei::WidthMixIn::~WidthMixIn() {}
MeiAttribute* mei::WidthMixIn::getWidth() {
    if (!b->hasAttribute("width")) {
        return NULL;
    }
    return b->getAttribute("width");
};

void mei::WidthMixIn::setWidth(std::string _width) {
    MeiAttribute *a = new MeiAttribute("width", _width);
    b->addAttribute(a);
};

bool mei::WidthMixIn::hasWidth() {
    return b->hasAttribute("width");
};

void mei::WidthMixIn::removeWidth() {
    b->removeAttribute("width");
};

/* include <widthmixin> */
mei::XyMixIn::XyMixIn(MeiElement *b) {
    this->b = b;
};

mei::XyMixIn::~XyMixIn() {}
MeiAttribute* mei::XyMixIn::getX() {
    if (!b->hasAttribute("x")) {
        return NULL;
    }
    return b->getAttribute("x");
};

void mei::XyMixIn::setX(std::string _x) {
    MeiAttribute *a = new MeiAttribute("x", _x);
    b->addAttribute(a);
};

bool mei::XyMixIn::hasX() {
    return b->hasAttribute("x");
};

void mei::XyMixIn::removeX() {
    b->removeAttribute("x");
};
MeiAttribute* mei::XyMixIn::getY() {
    if (!b->hasAttribute("y")) {
        return NULL;
    }
    return b->getAttribute("y");
};

void mei::XyMixIn::setY(std::string _y) {
    MeiAttribute *a = new MeiAttribute("y", _y);
    b->addAttribute(a);
};

bool mei::XyMixIn::hasY() {
    return b->hasAttribute("y");
};

void mei::XyMixIn::removeY() {
    b->removeAttribute("y");
};

/* include <ymixin> */
mei::Xy2MixIn::Xy2MixIn(MeiElement *b) {
    this->b = b;
};

mei::Xy2MixIn::~Xy2MixIn() {}
MeiAttribute* mei::Xy2MixIn::getX2() {
    if (!b->hasAttribute("x2")) {
        return NULL;
    }
    return b->getAttribute("x2");
};

void mei::Xy2MixIn::setX2(std::string _x2) {
    MeiAttribute *a = new MeiAttribute("x2", _x2);
    b->addAttribute(a);
};

bool mei::Xy2MixIn::hasX2() {
    return b->hasAttribute("x2");
};

void mei::Xy2MixIn::removeX2() {
    b->removeAttribute("x2");
};
MeiAttribute* mei::Xy2MixIn::getY2() {
    if (!b->hasAttribute("y2")) {
        return NULL;
    }
    return b->getAttribute("y2");
};

void mei::Xy2MixIn::setY2(std::string _y2) {
    MeiAttribute *a = new MeiAttribute("y2", _y2);
    b->addAttribute(a);
};

bool mei::Xy2MixIn::hasY2() {
    return b->hasAttribute("y2");
};

void mei::Xy2MixIn::removeY2() {
    b->removeAttribute("y2");
};

/* include <y2mixin> */


