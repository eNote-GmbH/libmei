#include "cmnmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ArpegLogMixIn::ArpegLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArpegLogMixIn::~ArpegLogMixIn() {}
MeiAttribute* mei::ArpegLogMixIn::getOrder() {
    if (!b->hasAttribute("order")) {
        return NULL;
    }
    return b->getAttribute("order");
};

void mei::ArpegLogMixIn::setOrder(std::string _order) {
    MeiAttribute *a = new MeiAttribute("order", _order);
    b->addAttribute(a);
};

bool mei::ArpegLogMixIn::hasOrder() {
    return b->hasAttribute("order");
};

void mei::ArpegLogMixIn::removeOrder() {
    b->removeAttribute("order");
};

/* include <ordermixin> */
mei::BTremLogMixIn::BTremLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BTremLogMixIn::~BTremLogMixIn() {}
MeiAttribute* mei::BTremLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::BTremLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::BTremLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BTremLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::BeamPresentMixIn::BeamPresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamPresentMixIn::~BeamPresentMixIn() {}
MeiAttribute* mei::BeamPresentMixIn::getBeam() {
    if (!b->hasAttribute("beam")) {
        return NULL;
    }
    return b->getAttribute("beam");
};

void mei::BeamPresentMixIn::setBeam(std::string _beam) {
    MeiAttribute *a = new MeiAttribute("beam", _beam);
    b->addAttribute(a);
};

bool mei::BeamPresentMixIn::hasBeam() {
    return b->hasAttribute("beam");
};

void mei::BeamPresentMixIn::removeBeam() {
    b->removeAttribute("beam");
};

/* include <beammixin> */
mei::BeamRendMixIn::BeamRendMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamRendMixIn::~BeamRendMixIn() {}
MeiAttribute* mei::BeamRendMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::BeamRendMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::BeamRendMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BeamRendMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::BeamRendMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::BeamRendMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::BeamRendMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::BeamRendMixIn::removePlace() {
    b->removeAttribute("place");
};
MeiAttribute* mei::BeamRendMixIn::getSlash() {
    if (!b->hasAttribute("slash")) {
        return NULL;
    }
    return b->getAttribute("slash");
};

void mei::BeamRendMixIn::setSlash(std::string _slash) {
    MeiAttribute *a = new MeiAttribute("slash", _slash);
    b->addAttribute(a);
};

bool mei::BeamRendMixIn::hasSlash() {
    return b->hasAttribute("slash");
};

void mei::BeamRendMixIn::removeSlash() {
    b->removeAttribute("slash");
};
MeiAttribute* mei::BeamRendMixIn::getSlope() {
    if (!b->hasAttribute("slope")) {
        return NULL;
    }
    return b->getAttribute("slope");
};

void mei::BeamRendMixIn::setSlope(std::string _slope) {
    MeiAttribute *a = new MeiAttribute("slope", _slope);
    b->addAttribute(a);
};

bool mei::BeamRendMixIn::hasSlope() {
    return b->hasAttribute("slope");
};

void mei::BeamRendMixIn::removeSlope() {
    b->removeAttribute("slope");
};

/* include <slopemixin> */
mei::BeamSecondaryMixIn::BeamSecondaryMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamSecondaryMixIn::~BeamSecondaryMixIn() {}
MeiAttribute* mei::BeamSecondaryMixIn::getBreaksec() {
    if (!b->hasAttribute("breaksec")) {
        return NULL;
    }
    return b->getAttribute("breaksec");
};

void mei::BeamSecondaryMixIn::setBreaksec(std::string _breaksec) {
    MeiAttribute *a = new MeiAttribute("breaksec", _breaksec);
    b->addAttribute(a);
};

bool mei::BeamSecondaryMixIn::hasBreaksec() {
    return b->hasAttribute("breaksec");
};

void mei::BeamSecondaryMixIn::removeBreaksec() {
    b->removeAttribute("breaksec");
};

/* include <breaksecmixin> */
mei::BeamedWithMixIn::BeamedWithMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamedWithMixIn::~BeamedWithMixIn() {}
MeiAttribute* mei::BeamedWithMixIn::getBeamWith() {
    if (!b->hasAttribute("beam.with")) {
        return NULL;
    }
    return b->getAttribute("beam.with");
};

void mei::BeamedWithMixIn::setBeamWith(std::string _beamwith) {
    MeiAttribute *a = new MeiAttribute("beam.with", _beamwith);
    b->addAttribute(a);
};

bool mei::BeamedWithMixIn::hasBeamWith() {
    return b->hasAttribute("beam.with");
};

void mei::BeamedWithMixIn::removeBeamWith() {
    b->removeAttribute("beam.with");
};

/* include <beam.withmixin> */
mei::BeamingLogMixIn::BeamingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamingLogMixIn::~BeamingLogMixIn() {}
MeiAttribute* mei::BeamingLogMixIn::getBeamGroup() {
    if (!b->hasAttribute("beam.group")) {
        return NULL;
    }
    return b->getAttribute("beam.group");
};

void mei::BeamingLogMixIn::setBeamGroup(std::string _beamgroup) {
    MeiAttribute *a = new MeiAttribute("beam.group", _beamgroup);
    b->addAttribute(a);
};

bool mei::BeamingLogMixIn::hasBeamGroup() {
    return b->hasAttribute("beam.group");
};

void mei::BeamingLogMixIn::removeBeamGroup() {
    b->removeAttribute("beam.group");
};
MeiAttribute* mei::BeamingLogMixIn::getBeamRests() {
    if (!b->hasAttribute("beam.rests")) {
        return NULL;
    }
    return b->getAttribute("beam.rests");
};

void mei::BeamingLogMixIn::setBeamRests(std::string _beamrests) {
    MeiAttribute *a = new MeiAttribute("beam.rests", _beamrests);
    b->addAttribute(a);
};

bool mei::BeamingLogMixIn::hasBeamRests() {
    return b->hasAttribute("beam.rests");
};

void mei::BeamingLogMixIn::removeBeamRests() {
    b->removeAttribute("beam.rests");
};

/* include <beam.restsmixin> */
mei::BeatRptLogMixIn::BeatRptLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeatRptLogMixIn::~BeatRptLogMixIn() {}
MeiAttribute* mei::BeatRptLogMixIn::getBeatdef() {
    if (!b->hasAttribute("beatdef")) {
        return NULL;
    }
    return b->getAttribute("beatdef");
};

void mei::BeatRptLogMixIn::setBeatdef(std::string _beatdef) {
    MeiAttribute *a = new MeiAttribute("beatdef", _beatdef);
    b->addAttribute(a);
};

bool mei::BeatRptLogMixIn::hasBeatdef() {
    return b->hasAttribute("beatdef");
};

void mei::BeatRptLogMixIn::removeBeatdef() {
    b->removeAttribute("beatdef");
};

/* include <beatdefmixin> */
mei::BracketSpanLogMixIn::BracketSpanLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BracketSpanLogMixIn::~BracketSpanLogMixIn() {}
MeiAttribute* mei::BracketSpanLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::BracketSpanLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::BracketSpanLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::BracketSpanLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::CutoutMixIn::CutoutMixIn(MeiElement *b) {
    this->b = b;
};

mei::CutoutMixIn::~CutoutMixIn() {}
MeiAttribute* mei::CutoutMixIn::getCutout() {
    if (!b->hasAttribute("cutout")) {
        return NULL;
    }
    return b->getAttribute("cutout");
};

void mei::CutoutMixIn::setCutout(std::string _cutout) {
    MeiAttribute *a = new MeiAttribute("cutout", _cutout);
    b->addAttribute(a);
};

bool mei::CutoutMixIn::hasCutout() {
    return b->hasAttribute("cutout");
};

void mei::CutoutMixIn::removeCutout() {
    b->removeAttribute("cutout");
};

/* include <cutoutmixin> */
mei::ExpandableMixIn::ExpandableMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExpandableMixIn::~ExpandableMixIn() {}
MeiAttribute* mei::ExpandableMixIn::getExpand() {
    if (!b->hasAttribute("expand")) {
        return NULL;
    }
    return b->getAttribute("expand");
};

void mei::ExpandableMixIn::setExpand(std::string _expand) {
    MeiAttribute *a = new MeiAttribute("expand", _expand);
    b->addAttribute(a);
};

bool mei::ExpandableMixIn::hasExpand() {
    return b->hasAttribute("expand");
};

void mei::ExpandableMixIn::removeExpand() {
    b->removeAttribute("expand");
};

/* include <expandmixin> */
mei::FTremLogMixIn::FTremLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::FTremLogMixIn::~FTremLogMixIn() {}
MeiAttribute* mei::FTremLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::FTremLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::FTremLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FTremLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::GlissPresentMixIn::GlissPresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::GlissPresentMixIn::~GlissPresentMixIn() {}
MeiAttribute* mei::GlissPresentMixIn::getGliss() {
    if (!b->hasAttribute("gliss")) {
        return NULL;
    }
    return b->getAttribute("gliss");
};

void mei::GlissPresentMixIn::setGliss(std::string _gliss) {
    MeiAttribute *a = new MeiAttribute("gliss", _gliss);
    b->addAttribute(a);
};

bool mei::GlissPresentMixIn::hasGliss() {
    return b->hasAttribute("gliss");
};

void mei::GlissPresentMixIn::removeGliss() {
    b->removeAttribute("gliss");
};

/* include <glissmixin> */
mei::GraceGrpLogMixIn::GraceGrpLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::GraceGrpLogMixIn::~GraceGrpLogMixIn() {}
MeiAttribute* mei::GraceGrpLogMixIn::getAttach() {
    if (!b->hasAttribute("attach")) {
        return NULL;
    }
    return b->getAttribute("attach");
};

void mei::GraceGrpLogMixIn::setAttach(std::string _attach) {
    MeiAttribute *a = new MeiAttribute("attach", _attach);
    b->addAttribute(a);
};

bool mei::GraceGrpLogMixIn::hasAttach() {
    return b->hasAttribute("attach");
};

void mei::GraceGrpLogMixIn::removeAttach() {
    b->removeAttribute("attach");
};

/* include <attachmixin> */
mei::GracedMixIn::GracedMixIn(MeiElement *b) {
    this->b = b;
};

mei::GracedMixIn::~GracedMixIn() {}
MeiAttribute* mei::GracedMixIn::getGrace() {
    if (!b->hasAttribute("grace")) {
        return NULL;
    }
    return b->getAttribute("grace");
};

void mei::GracedMixIn::setGrace(std::string _grace) {
    MeiAttribute *a = new MeiAttribute("grace", _grace);
    b->addAttribute(a);
};

bool mei::GracedMixIn::hasGrace() {
    return b->hasAttribute("grace");
};

void mei::GracedMixIn::removeGrace() {
    b->removeAttribute("grace");
};
MeiAttribute* mei::GracedMixIn::getGraceTime() {
    if (!b->hasAttribute("grace.time")) {
        return NULL;
    }
    return b->getAttribute("grace.time");
};

void mei::GracedMixIn::setGraceTime(std::string _gracetime) {
    MeiAttribute *a = new MeiAttribute("grace.time", _gracetime);
    b->addAttribute(a);
};

bool mei::GracedMixIn::hasGraceTime() {
    return b->hasAttribute("grace.time");
};

void mei::GracedMixIn::removeGraceTime() {
    b->removeAttribute("grace.time");
};

/* include <grace.timemixin> */
mei::HairpinLogMixIn::HairpinLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HairpinLogMixIn::~HairpinLogMixIn() {}
MeiAttribute* mei::HairpinLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::HairpinLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::HairpinLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::HairpinLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::HairpinLogMixIn::getNiente() {
    if (!b->hasAttribute("niente")) {
        return NULL;
    }
    return b->getAttribute("niente");
};

void mei::HairpinLogMixIn::setNiente(std::string _niente) {
    MeiAttribute *a = new MeiAttribute("niente", _niente);
    b->addAttribute(a);
};

bool mei::HairpinLogMixIn::hasNiente() {
    return b->hasAttribute("niente");
};

void mei::HairpinLogMixIn::removeNiente() {
    b->removeAttribute("niente");
};

/* include <nientemixin> */
mei::HarpPedalLogMixIn::HarpPedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarpPedalLogMixIn::~HarpPedalLogMixIn() {}
MeiAttribute* mei::HarpPedalLogMixIn::getC() {
    if (!b->hasAttribute("c")) {
        return NULL;
    }
    return b->getAttribute("c");
};

void mei::HarpPedalLogMixIn::setC(std::string _c) {
    MeiAttribute *a = new MeiAttribute("c", _c);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasC() {
    return b->hasAttribute("c");
};

void mei::HarpPedalLogMixIn::removeC() {
    b->removeAttribute("c");
};
MeiAttribute* mei::HarpPedalLogMixIn::getD() {
    if (!b->hasAttribute("d")) {
        return NULL;
    }
    return b->getAttribute("d");
};

void mei::HarpPedalLogMixIn::setD(std::string _d) {
    MeiAttribute *a = new MeiAttribute("d", _d);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasD() {
    return b->hasAttribute("d");
};

void mei::HarpPedalLogMixIn::removeD() {
    b->removeAttribute("d");
};
MeiAttribute* mei::HarpPedalLogMixIn::getE() {
    if (!b->hasAttribute("e")) {
        return NULL;
    }
    return b->getAttribute("e");
};

void mei::HarpPedalLogMixIn::setE(std::string _e) {
    MeiAttribute *a = new MeiAttribute("e", _e);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasE() {
    return b->hasAttribute("e");
};

void mei::HarpPedalLogMixIn::removeE() {
    b->removeAttribute("e");
};
MeiAttribute* mei::HarpPedalLogMixIn::getF() {
    if (!b->hasAttribute("f")) {
        return NULL;
    }
    return b->getAttribute("f");
};

void mei::HarpPedalLogMixIn::setF(std::string _f) {
    MeiAttribute *a = new MeiAttribute("f", _f);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasF() {
    return b->hasAttribute("f");
};

void mei::HarpPedalLogMixIn::removeF() {
    b->removeAttribute("f");
};
MeiAttribute* mei::HarpPedalLogMixIn::getG() {
    if (!b->hasAttribute("g")) {
        return NULL;
    }
    return b->getAttribute("g");
};

void mei::HarpPedalLogMixIn::setG(std::string _g) {
    MeiAttribute *a = new MeiAttribute("g", _g);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasG() {
    return b->hasAttribute("g");
};

void mei::HarpPedalLogMixIn::removeG() {
    b->removeAttribute("g");
};
MeiAttribute* mei::HarpPedalLogMixIn::getA() {
    if (!b->hasAttribute("a")) {
        return NULL;
    }
    return b->getAttribute("a");
};

void mei::HarpPedalLogMixIn::setA(std::string _a) {
    MeiAttribute *a = new MeiAttribute("a", _a);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasA() {
    return b->hasAttribute("a");
};

void mei::HarpPedalLogMixIn::removeA() {
    b->removeAttribute("a");
};
MeiAttribute* mei::HarpPedalLogMixIn::getB() {
    if (!b->hasAttribute("b")) {
        return NULL;
    }
    return b->getAttribute("b");
};

void mei::HarpPedalLogMixIn::setB(std::string _b) {
    MeiAttribute *a = new MeiAttribute("b", _b);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasB() {
    return b->hasAttribute("b");
};

void mei::HarpPedalLogMixIn::removeB() {
    b->removeAttribute("b");
};

/* include <bmixin> */
mei::LvPresentMixIn::LvPresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::LvPresentMixIn::~LvPresentMixIn() {}
MeiAttribute* mei::LvPresentMixIn::getLv() {
    if (!b->hasAttribute("lv")) {
        return NULL;
    }
    return b->getAttribute("lv");
};

void mei::LvPresentMixIn::setLv(std::string _lv) {
    MeiAttribute *a = new MeiAttribute("lv", _lv);
    b->addAttribute(a);
};

bool mei::LvPresentMixIn::hasLv() {
    return b->hasAttribute("lv");
};

void mei::LvPresentMixIn::removeLv() {
    b->removeAttribute("lv");
};

/* include <lvmixin> */
mei::MeasureLogMixIn::MeasureLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasureLogMixIn::~MeasureLogMixIn() {}
MeiAttribute* mei::MeasureLogMixIn::getLeft() {
    if (!b->hasAttribute("left")) {
        return NULL;
    }
    return b->getAttribute("left");
};

void mei::MeasureLogMixIn::setLeft(std::string _left) {
    MeiAttribute *a = new MeiAttribute("left", _left);
    b->addAttribute(a);
};

bool mei::MeasureLogMixIn::hasLeft() {
    return b->hasAttribute("left");
};

void mei::MeasureLogMixIn::removeLeft() {
    b->removeAttribute("left");
};
MeiAttribute* mei::MeasureLogMixIn::getRight() {
    if (!b->hasAttribute("right")) {
        return NULL;
    }
    return b->getAttribute("right");
};

void mei::MeasureLogMixIn::setRight(std::string _right) {
    MeiAttribute *a = new MeiAttribute("right", _right);
    b->addAttribute(a);
};

bool mei::MeasureLogMixIn::hasRight() {
    return b->hasAttribute("right");
};

void mei::MeasureLogMixIn::removeRight() {
    b->removeAttribute("right");
};

/* include <rightmixin> */
mei::MeterSigGrpLogMixIn::MeterSigGrpLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigGrpLogMixIn::~MeterSigGrpLogMixIn() {}
MeiAttribute* mei::MeterSigGrpLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::MeterSigGrpLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::MeterSigGrpLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::MeterSigGrpLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::NumberPlacementMixIn::NumberPlacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::NumberPlacementMixIn::~NumberPlacementMixIn() {}
MeiAttribute* mei::NumberPlacementMixIn::getNumPlace() {
    if (!b->hasAttribute("num.place")) {
        return NULL;
    }
    return b->getAttribute("num.place");
};

void mei::NumberPlacementMixIn::setNumPlace(std::string _numplace) {
    MeiAttribute *a = new MeiAttribute("num.place", _numplace);
    b->addAttribute(a);
};

bool mei::NumberPlacementMixIn::hasNumPlace() {
    return b->hasAttribute("num.place");
};

void mei::NumberPlacementMixIn::removeNumPlace() {
    b->removeAttribute("num.place");
};
MeiAttribute* mei::NumberPlacementMixIn::getNumVisible() {
    if (!b->hasAttribute("num.visible")) {
        return NULL;
    }
    return b->getAttribute("num.visible");
};

void mei::NumberPlacementMixIn::setNumVisible(std::string _numvisible) {
    MeiAttribute *a = new MeiAttribute("num.visible", _numvisible);
    b->addAttribute(a);
};

bool mei::NumberPlacementMixIn::hasNumVisible() {
    return b->hasAttribute("num.visible");
};

void mei::NumberPlacementMixIn::removeNumVisible() {
    b->removeAttribute("num.visible");
};

/* include <num.visiblemixin> */
mei::NumberedMixIn::NumberedMixIn(MeiElement *b) {
    this->b = b;
};

mei::NumberedMixIn::~NumberedMixIn() {}
MeiAttribute* mei::NumberedMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        return NULL;
    }
    return b->getAttribute("num");
};

void mei::NumberedMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::NumberedMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::NumberedMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::OctaveLogMixIn::OctaveLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveLogMixIn::~OctaveLogMixIn() {}
MeiAttribute* mei::OctaveLogMixIn::getColl() {
    if (!b->hasAttribute("coll")) {
        return NULL;
    }
    return b->getAttribute("coll");
};

void mei::OctaveLogMixIn::setColl(std::string _coll) {
    MeiAttribute *a = new MeiAttribute("coll", _coll);
    b->addAttribute(a);
};

bool mei::OctaveLogMixIn::hasColl() {
    return b->hasAttribute("coll");
};

void mei::OctaveLogMixIn::removeColl() {
    b->removeAttribute("coll");
};

/* include <collmixin> */
mei::PedalLogMixIn::PedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::PedalLogMixIn::~PedalLogMixIn() {}
MeiAttribute* mei::PedalLogMixIn::getDir() {
    if (!b->hasAttribute("dir")) {
        return NULL;
    }
    return b->getAttribute("dir");
};

void mei::PedalLogMixIn::setDir(std::string _dir) {
    MeiAttribute *a = new MeiAttribute("dir", _dir);
    b->addAttribute(a);
};

bool mei::PedalLogMixIn::hasDir() {
    return b->hasAttribute("dir");
};

void mei::PedalLogMixIn::removeDir() {
    b->removeAttribute("dir");
};
MeiAttribute* mei::PedalLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::PedalLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::PedalLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::PedalLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::PianoPedalsMixIn::PianoPedalsMixIn(MeiElement *b) {
    this->b = b;
};

mei::PianoPedalsMixIn::~PianoPedalsMixIn() {}
MeiAttribute* mei::PianoPedalsMixIn::getPedalStyle() {
    if (!b->hasAttribute("pedal.style")) {
        return NULL;
    }
    return b->getAttribute("pedal.style");
};

void mei::PianoPedalsMixIn::setPedalStyle(std::string _pedalstyle) {
    MeiAttribute *a = new MeiAttribute("pedal.style", _pedalstyle);
    b->addAttribute(a);
};

bool mei::PianoPedalsMixIn::hasPedalStyle() {
    return b->hasAttribute("pedal.style");
};

void mei::PianoPedalsMixIn::removePedalStyle() {
    b->removeAttribute("pedal.style");
};

/* include <pedal.stylemixin> */
mei::RehearsalMixIn::RehearsalMixIn(MeiElement *b) {
    this->b = b;
};

mei::RehearsalMixIn::~RehearsalMixIn() {}
MeiAttribute* mei::RehearsalMixIn::getRehEnclose() {
    if (!b->hasAttribute("reh.enclose")) {
        return NULL;
    }
    return b->getAttribute("reh.enclose");
};

void mei::RehearsalMixIn::setRehEnclose(std::string _rehenclose) {
    MeiAttribute *a = new MeiAttribute("reh.enclose", _rehenclose);
    b->addAttribute(a);
};

bool mei::RehearsalMixIn::hasRehEnclose() {
    return b->hasAttribute("reh.enclose");
};

void mei::RehearsalMixIn::removeRehEnclose() {
    b->removeAttribute("reh.enclose");
};

/* include <reh.enclosemixin> */
mei::ScoreDefVisCmnMixIn::ScoreDefVisCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoreDefVisCmnMixIn::~ScoreDefVisCmnMixIn() {}
MeiAttribute* mei::ScoreDefVisCmnMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        return NULL;
    }
    return b->getAttribute("grid.show");
};

void mei::ScoreDefVisCmnMixIn::setGridShow(std::string _gridshow) {
    MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
    b->addAttribute(a);
};

bool mei::ScoreDefVisCmnMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::ScoreDefVisCmnMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};

/* include <grid.showmixin> */
mei::SlurRendMixIn::SlurRendMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlurRendMixIn::~SlurRendMixIn() {}
MeiAttribute* mei::SlurRendMixIn::getSlurLform() {
    if (!b->hasAttribute("slur.lform")) {
        return NULL;
    }
    return b->getAttribute("slur.lform");
};

void mei::SlurRendMixIn::setSlurLform(std::string _slurlform) {
    MeiAttribute *a = new MeiAttribute("slur.lform", _slurlform);
    b->addAttribute(a);
};

bool mei::SlurRendMixIn::hasSlurLform() {
    return b->hasAttribute("slur.lform");
};

void mei::SlurRendMixIn::removeSlurLform() {
    b->removeAttribute("slur.lform");
};
MeiAttribute* mei::SlurRendMixIn::getSlurLwidth() {
    if (!b->hasAttribute("slur.lwidth")) {
        return NULL;
    }
    return b->getAttribute("slur.lwidth");
};

void mei::SlurRendMixIn::setSlurLwidth(std::string _slurlwidth) {
    MeiAttribute *a = new MeiAttribute("slur.lwidth", _slurlwidth);
    b->addAttribute(a);
};

bool mei::SlurRendMixIn::hasSlurLwidth() {
    return b->hasAttribute("slur.lwidth");
};

void mei::SlurRendMixIn::removeSlurLwidth() {
    b->removeAttribute("slur.lwidth");
};

/* include <slur.lwidthmixin> */
mei::StemsCmnMixIn::StemsCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemsCmnMixIn::~StemsCmnMixIn() {}
MeiAttribute* mei::StemsCmnMixIn::getStemWith() {
    if (!b->hasAttribute("stem.with")) {
        return NULL;
    }
    return b->getAttribute("stem.with");
};

void mei::StemsCmnMixIn::setStemWith(std::string _stemwith) {
    MeiAttribute *a = new MeiAttribute("stem.with", _stemwith);
    b->addAttribute(a);
};

bool mei::StemsCmnMixIn::hasStemWith() {
    return b->hasAttribute("stem.with");
};

void mei::StemsCmnMixIn::removeStemWith() {
    b->removeAttribute("stem.with");
};

/* include <stem.withmixin> */
mei::TieRendMixIn::TieRendMixIn(MeiElement *b) {
    this->b = b;
};

mei::TieRendMixIn::~TieRendMixIn() {}
MeiAttribute* mei::TieRendMixIn::getTieLform() {
    if (!b->hasAttribute("tie.lform")) {
        return NULL;
    }
    return b->getAttribute("tie.lform");
};

void mei::TieRendMixIn::setTieLform(std::string _tielform) {
    MeiAttribute *a = new MeiAttribute("tie.lform", _tielform);
    b->addAttribute(a);
};

bool mei::TieRendMixIn::hasTieLform() {
    return b->hasAttribute("tie.lform");
};

void mei::TieRendMixIn::removeTieLform() {
    b->removeAttribute("tie.lform");
};
MeiAttribute* mei::TieRendMixIn::getTieLwidth() {
    if (!b->hasAttribute("tie.lwidth")) {
        return NULL;
    }
    return b->getAttribute("tie.lwidth");
};

void mei::TieRendMixIn::setTieLwidth(std::string _tielwidth) {
    MeiAttribute *a = new MeiAttribute("tie.lwidth", _tielwidth);
    b->addAttribute(a);
};

bool mei::TieRendMixIn::hasTieLwidth() {
    return b->hasAttribute("tie.lwidth");
};

void mei::TieRendMixIn::removeTieLwidth() {
    b->removeAttribute("tie.lwidth");
};

/* include <tie.lwidthmixin> */
mei::TremMeasuredMixIn::TremMeasuredMixIn(MeiElement *b) {
    this->b = b;
};

mei::TremMeasuredMixIn::~TremMeasuredMixIn() {}
MeiAttribute* mei::TremMeasuredMixIn::getUnitdur() {
    if (!b->hasAttribute("unitdur")) {
        return NULL;
    }
    return b->getAttribute("unitdur");
};

void mei::TremMeasuredMixIn::setUnitdur(std::string _unitdur) {
    MeiAttribute *a = new MeiAttribute("unitdur", _unitdur);
    b->addAttribute(a);
};

bool mei::TremMeasuredMixIn::hasUnitdur() {
    return b->hasAttribute("unitdur");
};

void mei::TremMeasuredMixIn::removeUnitdur() {
    b->removeAttribute("unitdur");
};

/* include <unitdurmixin> */


