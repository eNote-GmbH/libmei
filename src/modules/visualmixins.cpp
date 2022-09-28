#include "visualmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AnnotVisMixIn::AnnotVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::AnnotVisMixIn::~AnnotVisMixIn() {}
MeiAttribute* mei::AnnotVisMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::AnnotVisMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::AnnotVisMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::AnnotVisMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::ArpegVisMixIn::ArpegVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArpegVisMixIn::~ArpegVisMixIn() {}
MeiAttribute* mei::ArpegVisMixIn::getArrow() {
    if (!b->hasAttribute("arrow")) {
        return NULL;
    }
    return b->getAttribute("arrow");
};

void mei::ArpegVisMixIn::setArrow(std::string _arrow) {
    MeiAttribute *a = new MeiAttribute("arrow", _arrow);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasArrow() {
    return b->hasAttribute("arrow");
};

void mei::ArpegVisMixIn::removeArrow() {
    b->removeAttribute("arrow");
};
MeiAttribute* mei::ArpegVisMixIn::getArrowShape() {
    if (!b->hasAttribute("arrow.shape")) {
        return NULL;
    }
    return b->getAttribute("arrow.shape");
};

void mei::ArpegVisMixIn::setArrowShape(std::string _arrowshape) {
    MeiAttribute *a = new MeiAttribute("arrow.shape", _arrowshape);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasArrowShape() {
    return b->hasAttribute("arrow.shape");
};

void mei::ArpegVisMixIn::removeArrowShape() {
    b->removeAttribute("arrow.shape");
};
MeiAttribute* mei::ArpegVisMixIn::getArrowSize() {
    if (!b->hasAttribute("arrow.size")) {
        return NULL;
    }
    return b->getAttribute("arrow.size");
};

void mei::ArpegVisMixIn::setArrowSize(std::string _arrowsize) {
    MeiAttribute *a = new MeiAttribute("arrow.size", _arrowsize);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasArrowSize() {
    return b->hasAttribute("arrow.size");
};

void mei::ArpegVisMixIn::removeArrowSize() {
    b->removeAttribute("arrow.size");
};
MeiAttribute* mei::ArpegVisMixIn::getArrowColor() {
    if (!b->hasAttribute("arrow.color")) {
        return NULL;
    }
    return b->getAttribute("arrow.color");
};

void mei::ArpegVisMixIn::setArrowColor(std::string _arrowcolor) {
    MeiAttribute *a = new MeiAttribute("arrow.color", _arrowcolor);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasArrowColor() {
    return b->hasAttribute("arrow.color");
};

void mei::ArpegVisMixIn::removeArrowColor() {
    b->removeAttribute("arrow.color");
};
MeiAttribute* mei::ArpegVisMixIn::getArrowFillcolor() {
    if (!b->hasAttribute("arrow.fillcolor")) {
        return NULL;
    }
    return b->getAttribute("arrow.fillcolor");
};

void mei::ArpegVisMixIn::setArrowFillcolor(std::string _arrowfillcolor) {
    MeiAttribute *a = new MeiAttribute("arrow.fillcolor", _arrowfillcolor);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasArrowFillcolor() {
    return b->hasAttribute("arrow.fillcolor");
};

void mei::ArpegVisMixIn::removeArrowFillcolor() {
    b->removeAttribute("arrow.fillcolor");
};
MeiAttribute* mei::ArpegVisMixIn::getLineForm() {
    if (!b->hasAttribute("line.form")) {
        return NULL;
    }
    return b->getAttribute("line.form");
};

void mei::ArpegVisMixIn::setLineForm(std::string _lineform) {
    MeiAttribute *a = new MeiAttribute("line.form", _lineform);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasLineForm() {
    return b->hasAttribute("line.form");
};

void mei::ArpegVisMixIn::removeLineForm() {
    b->removeAttribute("line.form");
};
MeiAttribute* mei::ArpegVisMixIn::getLineWidth() {
    if (!b->hasAttribute("line.width")) {
        return NULL;
    }
    return b->getAttribute("line.width");
};

void mei::ArpegVisMixIn::setLineWidth(std::string _linewidth) {
    MeiAttribute *a = new MeiAttribute("line.width", _linewidth);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasLineWidth() {
    return b->hasAttribute("line.width");
};

void mei::ArpegVisMixIn::removeLineWidth() {
    b->removeAttribute("line.width");
};

/* include <line.widthmixin> */
mei::BarLineVisMixIn::BarLineVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarLineVisMixIn::~BarLineVisMixIn() {}
MeiAttribute* mei::BarLineVisMixIn::getLen() {
    if (!b->hasAttribute("len")) {
        return NULL;
    }
    return b->getAttribute("len");
};

void mei::BarLineVisMixIn::setLen(std::string _len) {
    MeiAttribute *a = new MeiAttribute("len", _len);
    b->addAttribute(a);
};

bool mei::BarLineVisMixIn::hasLen() {
    return b->hasAttribute("len");
};

void mei::BarLineVisMixIn::removeLen() {
    b->removeAttribute("len");
};
MeiAttribute* mei::BarLineVisMixIn::getMethod() {
    if (!b->hasAttribute("method")) {
        return NULL;
    }
    return b->getAttribute("method");
};

void mei::BarLineVisMixIn::setMethod(std::string _method) {
    MeiAttribute *a = new MeiAttribute("method", _method);
    b->addAttribute(a);
};

bool mei::BarLineVisMixIn::hasMethod() {
    return b->hasAttribute("method");
};

void mei::BarLineVisMixIn::removeMethod() {
    b->removeAttribute("method");
};
MeiAttribute* mei::BarLineVisMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::BarLineVisMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::BarLineVisMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::BarLineVisMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::BeamingVisMixIn::BeamingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamingVisMixIn::~BeamingVisMixIn() {}
MeiAttribute* mei::BeamingVisMixIn::getBeamColor() {
    if (!b->hasAttribute("beam.color")) {
        return NULL;
    }
    return b->getAttribute("beam.color");
};

void mei::BeamingVisMixIn::setBeamColor(std::string _beamcolor) {
    MeiAttribute *a = new MeiAttribute("beam.color", _beamcolor);
    b->addAttribute(a);
};

bool mei::BeamingVisMixIn::hasBeamColor() {
    return b->hasAttribute("beam.color");
};

void mei::BeamingVisMixIn::removeBeamColor() {
    b->removeAttribute("beam.color");
};
MeiAttribute* mei::BeamingVisMixIn::getBeamRend() {
    if (!b->hasAttribute("beam.rend")) {
        return NULL;
    }
    return b->getAttribute("beam.rend");
};

void mei::BeamingVisMixIn::setBeamRend(std::string _beamrend) {
    MeiAttribute *a = new MeiAttribute("beam.rend", _beamrend);
    b->addAttribute(a);
};

bool mei::BeamingVisMixIn::hasBeamRend() {
    return b->hasAttribute("beam.rend");
};

void mei::BeamingVisMixIn::removeBeamRend() {
    b->removeAttribute("beam.rend");
};
MeiAttribute* mei::BeamingVisMixIn::getBeamSlope() {
    if (!b->hasAttribute("beam.slope")) {
        return NULL;
    }
    return b->getAttribute("beam.slope");
};

void mei::BeamingVisMixIn::setBeamSlope(std::string _beamslope) {
    MeiAttribute *a = new MeiAttribute("beam.slope", _beamslope);
    b->addAttribute(a);
};

bool mei::BeamingVisMixIn::hasBeamSlope() {
    return b->hasAttribute("beam.slope");
};

void mei::BeamingVisMixIn::removeBeamSlope() {
    b->removeAttribute("beam.slope");
};

/* include <beam.slopemixin> */
mei::BeatRptVisMixIn::BeatRptVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeatRptVisMixIn::~BeatRptVisMixIn() {}
MeiAttribute* mei::BeatRptVisMixIn::getSlash() {
    if (!b->hasAttribute("slash")) {
        return NULL;
    }
    return b->getAttribute("slash");
};

void mei::BeatRptVisMixIn::setSlash(std::string _slash) {
    MeiAttribute *a = new MeiAttribute("slash", _slash);
    b->addAttribute(a);
};

bool mei::BeatRptVisMixIn::hasSlash() {
    return b->hasAttribute("slash");
};

void mei::BeatRptVisMixIn::removeSlash() {
    b->removeAttribute("slash");
};

/* include <slashmixin> */
mei::ChordVisMixIn::ChordVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ChordVisMixIn::~ChordVisMixIn() {}
MeiAttribute* mei::ChordVisMixIn::getCluster() {
    if (!b->hasAttribute("cluster")) {
        return NULL;
    }
    return b->getAttribute("cluster");
};

void mei::ChordVisMixIn::setCluster(std::string _cluster) {
    MeiAttribute *a = new MeiAttribute("cluster", _cluster);
    b->addAttribute(a);
};

bool mei::ChordVisMixIn::hasCluster() {
    return b->hasAttribute("cluster");
};

void mei::ChordVisMixIn::removeCluster() {
    b->removeAttribute("cluster");
};

/* include <clustermixin> */
mei::CleffingVisMixIn::CleffingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::CleffingVisMixIn::~CleffingVisMixIn() {}
MeiAttribute* mei::CleffingVisMixIn::getClefColor() {
    if (!b->hasAttribute("clef.color")) {
        return NULL;
    }
    return b->getAttribute("clef.color");
};

void mei::CleffingVisMixIn::setClefColor(std::string _clefcolor) {
    MeiAttribute *a = new MeiAttribute("clef.color", _clefcolor);
    b->addAttribute(a);
};

bool mei::CleffingVisMixIn::hasClefColor() {
    return b->hasAttribute("clef.color");
};

void mei::CleffingVisMixIn::removeClefColor() {
    b->removeAttribute("clef.color");
};
MeiAttribute* mei::CleffingVisMixIn::getClefVisible() {
    if (!b->hasAttribute("clef.visible")) {
        return NULL;
    }
    return b->getAttribute("clef.visible");
};

void mei::CleffingVisMixIn::setClefVisible(std::string _clefvisible) {
    MeiAttribute *a = new MeiAttribute("clef.visible", _clefvisible);
    b->addAttribute(a);
};

bool mei::CleffingVisMixIn::hasClefVisible() {
    return b->hasAttribute("clef.visible");
};

void mei::CleffingVisMixIn::removeClefVisible() {
    b->removeAttribute("clef.visible");
};

/* include <clef.visiblemixin> */
mei::EpisemaVisMixIn::EpisemaVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::EpisemaVisMixIn::~EpisemaVisMixIn() {}
MeiAttribute* mei::EpisemaVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::EpisemaVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::EpisemaVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::EpisemaVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::EpisemaVisMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::EpisemaVisMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::EpisemaVisMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::EpisemaVisMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::FTremVisMixIn::FTremVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::FTremVisMixIn::~FTremVisMixIn() {}
MeiAttribute* mei::FTremVisMixIn::getBeams() {
    if (!b->hasAttribute("beams")) {
        return NULL;
    }
    return b->getAttribute("beams");
};

void mei::FTremVisMixIn::setBeams(std::string _beams) {
    MeiAttribute *a = new MeiAttribute("beams", _beams);
    b->addAttribute(a);
};

bool mei::FTremVisMixIn::hasBeams() {
    return b->hasAttribute("beams");
};

void mei::FTremVisMixIn::removeBeams() {
    b->removeAttribute("beams");
};
MeiAttribute* mei::FTremVisMixIn::getBeamsFloat() {
    if (!b->hasAttribute("beams.float")) {
        return NULL;
    }
    return b->getAttribute("beams.float");
};

void mei::FTremVisMixIn::setBeamsFloat(std::string _beamsfloat) {
    MeiAttribute *a = new MeiAttribute("beams.float", _beamsfloat);
    b->addAttribute(a);
};

bool mei::FTremVisMixIn::hasBeamsFloat() {
    return b->hasAttribute("beams.float");
};

void mei::FTremVisMixIn::removeBeamsFloat() {
    b->removeAttribute("beams.float");
};
MeiAttribute* mei::FTremVisMixIn::getFloatGap() {
    if (!b->hasAttribute("float.gap")) {
        return NULL;
    }
    return b->getAttribute("float.gap");
};

void mei::FTremVisMixIn::setFloatGap(std::string _floatgap) {
    MeiAttribute *a = new MeiAttribute("float.gap", _floatgap);
    b->addAttribute(a);
};

bool mei::FTremVisMixIn::hasFloatGap() {
    return b->hasAttribute("float.gap");
};

void mei::FTremVisMixIn::removeFloatGap() {
    b->removeAttribute("float.gap");
};

/* include <float.gapmixin> */
mei::FermataVisMixIn::FermataVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::FermataVisMixIn::~FermataVisMixIn() {}
MeiAttribute* mei::FermataVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::FermataVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::FermataVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FermataVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::FermataVisMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        return NULL;
    }
    return b->getAttribute("shape");
};

void mei::FermataVisMixIn::setShape(std::string _shape) {
    MeiAttribute *a = new MeiAttribute("shape", _shape);
    b->addAttribute(a);
};

bool mei::FermataVisMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::FermataVisMixIn::removeShape() {
    b->removeAttribute("shape");
};

/* include <shapemixin> */
mei::FingGrpVisMixIn::FingGrpVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::FingGrpVisMixIn::~FingGrpVisMixIn() {}
MeiAttribute* mei::FingGrpVisMixIn::getOrient() {
    if (!b->hasAttribute("orient")) {
        return NULL;
    }
    return b->getAttribute("orient");
};

void mei::FingGrpVisMixIn::setOrient(std::string _orient) {
    MeiAttribute *a = new MeiAttribute("orient", _orient);
    b->addAttribute(a);
};

bool mei::FingGrpVisMixIn::hasOrient() {
    return b->hasAttribute("orient");
};

void mei::FingGrpVisMixIn::removeOrient() {
    b->removeAttribute("orient");
};

/* include <orientmixin> */
mei::HairpinVisMixIn::HairpinVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::HairpinVisMixIn::~HairpinVisMixIn() {}
MeiAttribute* mei::HairpinVisMixIn::getOpening() {
    if (!b->hasAttribute("opening")) {
        return NULL;
    }
    return b->getAttribute("opening");
};

void mei::HairpinVisMixIn::setOpening(std::string _opening) {
    MeiAttribute *a = new MeiAttribute("opening", _opening);
    b->addAttribute(a);
};

bool mei::HairpinVisMixIn::hasOpening() {
    return b->hasAttribute("opening");
};

void mei::HairpinVisMixIn::removeOpening() {
    b->removeAttribute("opening");
};

/* include <openingmixin> */
mei::HarmVisMixIn::HarmVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarmVisMixIn::~HarmVisMixIn() {}
MeiAttribute* mei::HarmVisMixIn::getRendgrid() {
    if (!b->hasAttribute("rendgrid")) {
        return NULL;
    }
    return b->getAttribute("rendgrid");
};

void mei::HarmVisMixIn::setRendgrid(std::string _rendgrid) {
    MeiAttribute *a = new MeiAttribute("rendgrid", _rendgrid);
    b->addAttribute(a);
};

bool mei::HarmVisMixIn::hasRendgrid() {
    return b->hasAttribute("rendgrid");
};

void mei::HarmVisMixIn::removeRendgrid() {
    b->removeAttribute("rendgrid");
};

/* include <rendgridmixin> */
mei::HispanTickVisMixIn::HispanTickVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::HispanTickVisMixIn::~HispanTickVisMixIn() {}
MeiAttribute* mei::HispanTickVisMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::HispanTickVisMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::HispanTickVisMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::HispanTickVisMixIn::removePlace() {
    b->removeAttribute("place");
};
MeiAttribute* mei::HispanTickVisMixIn::getTilt() {
    if (!b->hasAttribute("tilt")) {
        return NULL;
    }
    return b->getAttribute("tilt");
};

void mei::HispanTickVisMixIn::setTilt(std::string _tilt) {
    MeiAttribute *a = new MeiAttribute("tilt", _tilt);
    b->addAttribute(a);
};

bool mei::HispanTickVisMixIn::hasTilt() {
    return b->hasAttribute("tilt");
};

void mei::HispanTickVisMixIn::removeTilt() {
    b->removeAttribute("tilt");
};

/* include <tiltmixin> */
mei::KeySigVisMixIn::KeySigVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigVisMixIn::~KeySigVisMixIn() {}
MeiAttribute* mei::KeySigVisMixIn::getSigShowchange() {
    if (!b->hasAttribute("sig.showchange")) {
        return NULL;
    }
    return b->getAttribute("sig.showchange");
};

void mei::KeySigVisMixIn::setSigShowchange(std::string _sigshowchange) {
    MeiAttribute *a = new MeiAttribute("sig.showchange", _sigshowchange);
    b->addAttribute(a);
};

bool mei::KeySigVisMixIn::hasSigShowchange() {
    return b->hasAttribute("sig.showchange");
};

void mei::KeySigVisMixIn::removeSigShowchange() {
    b->removeAttribute("sig.showchange");
};

/* include <sig.showchangemixin> */
mei::KeySigDefaultVisMixIn::KeySigDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigDefaultVisMixIn::~KeySigDefaultVisMixIn() {}
MeiAttribute* mei::KeySigDefaultVisMixIn::getKeysigShow() {
    if (!b->hasAttribute("keysig.show")) {
        return NULL;
    }
    return b->getAttribute("keysig.show");
};

void mei::KeySigDefaultVisMixIn::setKeysigShow(std::string _keysigshow) {
    MeiAttribute *a = new MeiAttribute("keysig.show", _keysigshow);
    b->addAttribute(a);
};

bool mei::KeySigDefaultVisMixIn::hasKeysigShow() {
    return b->hasAttribute("keysig.show");
};

void mei::KeySigDefaultVisMixIn::removeKeysigShow() {
    b->removeAttribute("keysig.show");
};
MeiAttribute* mei::KeySigDefaultVisMixIn::getKeysigShowchange() {
    if (!b->hasAttribute("keysig.showchange")) {
        return NULL;
    }
    return b->getAttribute("keysig.showchange");
};

void mei::KeySigDefaultVisMixIn::setKeysigShowchange(std::string _keysigshowchange) {
    MeiAttribute *a = new MeiAttribute("keysig.showchange", _keysigshowchange);
    b->addAttribute(a);
};

bool mei::KeySigDefaultVisMixIn::hasKeysigShowchange() {
    return b->hasAttribute("keysig.showchange");
};

void mei::KeySigDefaultVisMixIn::removeKeysigShowchange() {
    b->removeAttribute("keysig.showchange");
};

/* include <keysig.showchangemixin> */
mei::LigatureVisMixIn::LigatureVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::LigatureVisMixIn::~LigatureVisMixIn() {}
MeiAttribute* mei::LigatureVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::LigatureVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::LigatureVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::LigatureVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::LineVisMixIn::LineVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::LineVisMixIn::~LineVisMixIn() {}
MeiAttribute* mei::LineVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::LineVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::LineVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::LineVisMixIn::getWidth() {
    if (!b->hasAttribute("width")) {
        return NULL;
    }
    return b->getAttribute("width");
};

void mei::LineVisMixIn::setWidth(std::string _width) {
    MeiAttribute *a = new MeiAttribute("width", _width);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasWidth() {
    return b->hasAttribute("width");
};

void mei::LineVisMixIn::removeWidth() {
    b->removeAttribute("width");
};
MeiAttribute* mei::LineVisMixIn::getEndsym() {
    if (!b->hasAttribute("endsym")) {
        return NULL;
    }
    return b->getAttribute("endsym");
};

void mei::LineVisMixIn::setEndsym(std::string _endsym) {
    MeiAttribute *a = new MeiAttribute("endsym", _endsym);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasEndsym() {
    return b->hasAttribute("endsym");
};

void mei::LineVisMixIn::removeEndsym() {
    b->removeAttribute("endsym");
};
MeiAttribute* mei::LineVisMixIn::getEndsymSize() {
    if (!b->hasAttribute("endsym.size")) {
        return NULL;
    }
    return b->getAttribute("endsym.size");
};

void mei::LineVisMixIn::setEndsymSize(std::string _endsymsize) {
    MeiAttribute *a = new MeiAttribute("endsym.size", _endsymsize);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasEndsymSize() {
    return b->hasAttribute("endsym.size");
};

void mei::LineVisMixIn::removeEndsymSize() {
    b->removeAttribute("endsym.size");
};
MeiAttribute* mei::LineVisMixIn::getStartsym() {
    if (!b->hasAttribute("startsym")) {
        return NULL;
    }
    return b->getAttribute("startsym");
};

void mei::LineVisMixIn::setStartsym(std::string _startsym) {
    MeiAttribute *a = new MeiAttribute("startsym", _startsym);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasStartsym() {
    return b->hasAttribute("startsym");
};

void mei::LineVisMixIn::removeStartsym() {
    b->removeAttribute("startsym");
};
MeiAttribute* mei::LineVisMixIn::getStartsymSize() {
    if (!b->hasAttribute("startsym.size")) {
        return NULL;
    }
    return b->getAttribute("startsym.size");
};

void mei::LineVisMixIn::setStartsymSize(std::string _startsymsize) {
    MeiAttribute *a = new MeiAttribute("startsym.size", _startsymsize);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasStartsymSize() {
    return b->hasAttribute("startsym.size");
};

void mei::LineVisMixIn::removeStartsymSize() {
    b->removeAttribute("startsym.size");
};

/* include <startsym.sizemixin> */
mei::LiquescentVisMixIn::LiquescentVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::LiquescentVisMixIn::~LiquescentVisMixIn() {}
MeiAttribute* mei::LiquescentVisMixIn::getCurve() {
    if (!b->hasAttribute("curve")) {
        return NULL;
    }
    return b->getAttribute("curve");
};

void mei::LiquescentVisMixIn::setCurve(std::string _curve) {
    MeiAttribute *a = new MeiAttribute("curve", _curve);
    b->addAttribute(a);
};

bool mei::LiquescentVisMixIn::hasCurve() {
    return b->hasAttribute("curve");
};

void mei::LiquescentVisMixIn::removeCurve() {
    b->removeAttribute("curve");
};
MeiAttribute* mei::LiquescentVisMixIn::getLooped() {
    if (!b->hasAttribute("looped")) {
        return NULL;
    }
    return b->getAttribute("looped");
};

void mei::LiquescentVisMixIn::setLooped(std::string _looped) {
    MeiAttribute *a = new MeiAttribute("looped", _looped);
    b->addAttribute(a);
};

bool mei::LiquescentVisMixIn::hasLooped() {
    return b->hasAttribute("looped");
};

void mei::LiquescentVisMixIn::removeLooped() {
    b->removeAttribute("looped");
};

/* include <loopedmixin> */
mei::MensurVisMixIn::MensurVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensurVisMixIn::~MensurVisMixIn() {}
MeiAttribute* mei::MensurVisMixIn::getDot() {
    if (!b->hasAttribute("dot")) {
        return NULL;
    }
    return b->getAttribute("dot");
};

void mei::MensurVisMixIn::setDot(std::string _dot) {
    MeiAttribute *a = new MeiAttribute("dot", _dot);
    b->addAttribute(a);
};

bool mei::MensurVisMixIn::hasDot() {
    return b->hasAttribute("dot");
};

void mei::MensurVisMixIn::removeDot() {
    b->removeAttribute("dot");
};
MeiAttribute* mei::MensurVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::MensurVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::MensurVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::MensurVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::MensurVisMixIn::getOrient() {
    if (!b->hasAttribute("orient")) {
        return NULL;
    }
    return b->getAttribute("orient");
};

void mei::MensurVisMixIn::setOrient(std::string _orient) {
    MeiAttribute *a = new MeiAttribute("orient", _orient);
    b->addAttribute(a);
};

bool mei::MensurVisMixIn::hasOrient() {
    return b->hasAttribute("orient");
};

void mei::MensurVisMixIn::removeOrient() {
    b->removeAttribute("orient");
};
MeiAttribute* mei::MensurVisMixIn::getSign() {
    if (!b->hasAttribute("sign")) {
        return NULL;
    }
    return b->getAttribute("sign");
};

void mei::MensurVisMixIn::setSign(std::string _sign) {
    MeiAttribute *a = new MeiAttribute("sign", _sign);
    b->addAttribute(a);
};

bool mei::MensurVisMixIn::hasSign() {
    return b->hasAttribute("sign");
};

void mei::MensurVisMixIn::removeSign() {
    b->removeAttribute("sign");
};

/* include <signmixin> */
mei::MensuralVisMixIn::MensuralVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralVisMixIn::~MensuralVisMixIn() {}
MeiAttribute* mei::MensuralVisMixIn::getMensurColor() {
    if (!b->hasAttribute("mensur.color")) {
        return NULL;
    }
    return b->getAttribute("mensur.color");
};

void mei::MensuralVisMixIn::setMensurColor(std::string _mensurcolor) {
    MeiAttribute *a = new MeiAttribute("mensur.color", _mensurcolor);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurColor() {
    return b->hasAttribute("mensur.color");
};

void mei::MensuralVisMixIn::removeMensurColor() {
    b->removeAttribute("mensur.color");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurDot() {
    if (!b->hasAttribute("mensur.dot")) {
        return NULL;
    }
    return b->getAttribute("mensur.dot");
};

void mei::MensuralVisMixIn::setMensurDot(std::string _mensurdot) {
    MeiAttribute *a = new MeiAttribute("mensur.dot", _mensurdot);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurDot() {
    return b->hasAttribute("mensur.dot");
};

void mei::MensuralVisMixIn::removeMensurDot() {
    b->removeAttribute("mensur.dot");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurForm() {
    if (!b->hasAttribute("mensur.form")) {
        return NULL;
    }
    return b->getAttribute("mensur.form");
};

void mei::MensuralVisMixIn::setMensurForm(std::string _mensurform) {
    MeiAttribute *a = new MeiAttribute("mensur.form", _mensurform);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurForm() {
    return b->hasAttribute("mensur.form");
};

void mei::MensuralVisMixIn::removeMensurForm() {
    b->removeAttribute("mensur.form");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurLoc() {
    if (!b->hasAttribute("mensur.loc")) {
        return NULL;
    }
    return b->getAttribute("mensur.loc");
};

void mei::MensuralVisMixIn::setMensurLoc(std::string _mensurloc) {
    MeiAttribute *a = new MeiAttribute("mensur.loc", _mensurloc);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurLoc() {
    return b->hasAttribute("mensur.loc");
};

void mei::MensuralVisMixIn::removeMensurLoc() {
    b->removeAttribute("mensur.loc");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurOrient() {
    if (!b->hasAttribute("mensur.orient")) {
        return NULL;
    }
    return b->getAttribute("mensur.orient");
};

void mei::MensuralVisMixIn::setMensurOrient(std::string _mensurorient) {
    MeiAttribute *a = new MeiAttribute("mensur.orient", _mensurorient);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurOrient() {
    return b->hasAttribute("mensur.orient");
};

void mei::MensuralVisMixIn::removeMensurOrient() {
    b->removeAttribute("mensur.orient");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurSign() {
    if (!b->hasAttribute("mensur.sign")) {
        return NULL;
    }
    return b->getAttribute("mensur.sign");
};

void mei::MensuralVisMixIn::setMensurSign(std::string _mensursign) {
    MeiAttribute *a = new MeiAttribute("mensur.sign", _mensursign);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurSign() {
    return b->hasAttribute("mensur.sign");
};

void mei::MensuralVisMixIn::removeMensurSign() {
    b->removeAttribute("mensur.sign");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurSize() {
    if (!b->hasAttribute("mensur.size")) {
        return NULL;
    }
    return b->getAttribute("mensur.size");
};

void mei::MensuralVisMixIn::setMensurSize(std::string _mensursize) {
    MeiAttribute *a = new MeiAttribute("mensur.size", _mensursize);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurSize() {
    return b->hasAttribute("mensur.size");
};

void mei::MensuralVisMixIn::removeMensurSize() {
    b->removeAttribute("mensur.size");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurSlash() {
    if (!b->hasAttribute("mensur.slash")) {
        return NULL;
    }
    return b->getAttribute("mensur.slash");
};

void mei::MensuralVisMixIn::setMensurSlash(std::string _mensurslash) {
    MeiAttribute *a = new MeiAttribute("mensur.slash", _mensurslash);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurSlash() {
    return b->hasAttribute("mensur.slash");
};

void mei::MensuralVisMixIn::removeMensurSlash() {
    b->removeAttribute("mensur.slash");
};

/* include <mensur.slashmixin> */
mei::MeterSigVisMixIn::MeterSigVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigVisMixIn::~MeterSigVisMixIn() {}
MeiAttribute* mei::MeterSigVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::MeterSigVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::MeterSigVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::MeterSigVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::MeterSigDefaultVisMixIn::MeterSigDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigDefaultVisMixIn::~MeterSigDefaultVisMixIn() {}
MeiAttribute* mei::MeterSigDefaultVisMixIn::getMeterForm() {
    if (!b->hasAttribute("meter.form")) {
        return NULL;
    }
    return b->getAttribute("meter.form");
};

void mei::MeterSigDefaultVisMixIn::setMeterForm(std::string _meterform) {
    MeiAttribute *a = new MeiAttribute("meter.form", _meterform);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultVisMixIn::hasMeterForm() {
    return b->hasAttribute("meter.form");
};

void mei::MeterSigDefaultVisMixIn::removeMeterForm() {
    b->removeAttribute("meter.form");
};
MeiAttribute* mei::MeterSigDefaultVisMixIn::getMeterShowchange() {
    if (!b->hasAttribute("meter.showchange")) {
        return NULL;
    }
    return b->getAttribute("meter.showchange");
};

void mei::MeterSigDefaultVisMixIn::setMeterShowchange(std::string _metershowchange) {
    MeiAttribute *a = new MeiAttribute("meter.showchange", _metershowchange);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultVisMixIn::hasMeterShowchange() {
    return b->hasAttribute("meter.showchange");
};

void mei::MeterSigDefaultVisMixIn::removeMeterShowchange() {
    b->removeAttribute("meter.showchange");
};

/* include <meter.showchangemixin> */
mei::MultiRestVisMixIn::MultiRestVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MultiRestVisMixIn::~MultiRestVisMixIn() {}
MeiAttribute* mei::MultiRestVisMixIn::getBlock() {
    if (!b->hasAttribute("block")) {
        return NULL;
    }
    return b->getAttribute("block");
};

void mei::MultiRestVisMixIn::setBlock(std::string _block) {
    MeiAttribute *a = new MeiAttribute("block", _block);
    b->addAttribute(a);
};

bool mei::MultiRestVisMixIn::hasBlock() {
    return b->hasAttribute("block");
};

void mei::MultiRestVisMixIn::removeBlock() {
    b->removeAttribute("block");
};

/* include <blockmixin> */
mei::PbVisMixIn::PbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::PbVisMixIn::~PbVisMixIn() {}
MeiAttribute* mei::PbVisMixIn::getFolium() {
    if (!b->hasAttribute("folium")) {
        return NULL;
    }
    return b->getAttribute("folium");
};

void mei::PbVisMixIn::setFolium(std::string _folium) {
    MeiAttribute *a = new MeiAttribute("folium", _folium);
    b->addAttribute(a);
};

bool mei::PbVisMixIn::hasFolium() {
    return b->hasAttribute("folium");
};

void mei::PbVisMixIn::removeFolium() {
    b->removeAttribute("folium");
};

/* include <foliummixin> */
mei::PedalVisMixIn::PedalVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::PedalVisMixIn::~PedalVisMixIn() {}
MeiAttribute* mei::PedalVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::PedalVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::PedalVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::PedalVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::QuilismaVisMixIn::QuilismaVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::QuilismaVisMixIn::~QuilismaVisMixIn() {}
MeiAttribute* mei::QuilismaVisMixIn::getWaves() {
    if (!b->hasAttribute("waves")) {
        return NULL;
    }
    return b->getAttribute("waves");
};

void mei::QuilismaVisMixIn::setWaves(std::string _waves) {
    MeiAttribute *a = new MeiAttribute("waves", _waves);
    b->addAttribute(a);
};

bool mei::QuilismaVisMixIn::hasWaves() {
    return b->hasAttribute("waves");
};

void mei::QuilismaVisMixIn::removeWaves() {
    b->removeAttribute("waves");
};

/* include <wavesmixin> */
mei::SbVisMixIn::SbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SbVisMixIn::~SbVisMixIn() {}
MeiAttribute* mei::SbVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::SbVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::SbVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::SbVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::ScoreDefVisMixIn::ScoreDefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoreDefVisMixIn::~ScoreDefVisMixIn() {}
MeiAttribute* mei::ScoreDefVisMixIn::getVuHeight() {
    if (!b->hasAttribute("vu.height")) {
        return NULL;
    }
    return b->getAttribute("vu.height");
};

void mei::ScoreDefVisMixIn::setVuHeight(std::string _vuheight) {
    MeiAttribute *a = new MeiAttribute("vu.height", _vuheight);
    b->addAttribute(a);
};

bool mei::ScoreDefVisMixIn::hasVuHeight() {
    return b->hasAttribute("vu.height");
};

void mei::ScoreDefVisMixIn::removeVuHeight() {
    b->removeAttribute("vu.height");
};

/* include <vu.heightmixin> */
mei::SectionVisMixIn::SectionVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SectionVisMixIn::~SectionVisMixIn() {}
MeiAttribute* mei::SectionVisMixIn::getRestart() {
    if (!b->hasAttribute("restart")) {
        return NULL;
    }
    return b->getAttribute("restart");
};

void mei::SectionVisMixIn::setRestart(std::string _restart) {
    MeiAttribute *a = new MeiAttribute("restart", _restart);
    b->addAttribute(a);
};

bool mei::SectionVisMixIn::hasRestart() {
    return b->hasAttribute("restart");
};

void mei::SectionVisMixIn::removeRestart() {
    b->removeAttribute("restart");
};

/* include <restartmixin> */
mei::SignifLetVisMixIn::SignifLetVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SignifLetVisMixIn::~SignifLetVisMixIn() {}
MeiAttribute* mei::SignifLetVisMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::SignifLetVisMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::SignifLetVisMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::SignifLetVisMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::SpaceVisMixIn::SpaceVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SpaceVisMixIn::~SpaceVisMixIn() {}
MeiAttribute* mei::SpaceVisMixIn::getCompressable() {
    if (!b->hasAttribute("compressable")) {
        return NULL;
    }
    return b->getAttribute("compressable");
};

void mei::SpaceVisMixIn::setCompressable(std::string _compressable) {
    MeiAttribute *a = new MeiAttribute("compressable", _compressable);
    b->addAttribute(a);
};

bool mei::SpaceVisMixIn::hasCompressable() {
    return b->hasAttribute("compressable");
};

void mei::SpaceVisMixIn::removeCompressable() {
    b->removeAttribute("compressable");
};

/* include <compressablemixin> */
mei::StaffDefVisMixIn::StaffDefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffDefVisMixIn::~StaffDefVisMixIn() {}
MeiAttribute* mei::StaffDefVisMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        return NULL;
    }
    return b->getAttribute("grid.show");
};

void mei::StaffDefVisMixIn::setGridShow(std::string _gridshow) {
    MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::StaffDefVisMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};
MeiAttribute* mei::StaffDefVisMixIn::getLayerscheme() {
    if (!b->hasAttribute("layerscheme")) {
        return NULL;
    }
    return b->getAttribute("layerscheme");
};

void mei::StaffDefVisMixIn::setLayerscheme(std::string _layerscheme) {
    MeiAttribute *a = new MeiAttribute("layerscheme", _layerscheme);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasLayerscheme() {
    return b->hasAttribute("layerscheme");
};

void mei::StaffDefVisMixIn::removeLayerscheme() {
    b->removeAttribute("layerscheme");
};
MeiAttribute* mei::StaffDefVisMixIn::getLinesColor() {
    if (!b->hasAttribute("lines.color")) {
        return NULL;
    }
    return b->getAttribute("lines.color");
};

void mei::StaffDefVisMixIn::setLinesColor(std::string _linescolor) {
    MeiAttribute *a = new MeiAttribute("lines.color", _linescolor);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasLinesColor() {
    return b->hasAttribute("lines.color");
};

void mei::StaffDefVisMixIn::removeLinesColor() {
    b->removeAttribute("lines.color");
};
MeiAttribute* mei::StaffDefVisMixIn::getLinesVisible() {
    if (!b->hasAttribute("lines.visible")) {
        return NULL;
    }
    return b->getAttribute("lines.visible");
};

void mei::StaffDefVisMixIn::setLinesVisible(std::string _linesvisible) {
    MeiAttribute *a = new MeiAttribute("lines.visible", _linesvisible);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasLinesVisible() {
    return b->hasAttribute("lines.visible");
};

void mei::StaffDefVisMixIn::removeLinesVisible() {
    b->removeAttribute("lines.visible");
};
MeiAttribute* mei::StaffDefVisMixIn::getSpacing() {
    if (!b->hasAttribute("spacing")) {
        return NULL;
    }
    return b->getAttribute("spacing");
};

void mei::StaffDefVisMixIn::setSpacing(std::string _spacing) {
    MeiAttribute *a = new MeiAttribute("spacing", _spacing);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasSpacing() {
    return b->hasAttribute("spacing");
};

void mei::StaffDefVisMixIn::removeSpacing() {
    b->removeAttribute("spacing");
};

/* include <spacingmixin> */
mei::StaffGrpVisMixIn::StaffGrpVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffGrpVisMixIn::~StaffGrpVisMixIn() {}
MeiAttribute* mei::StaffGrpVisMixIn::getBarThru() {
    if (!b->hasAttribute("bar.thru")) {
        return NULL;
    }
    return b->getAttribute("bar.thru");
};

void mei::StaffGrpVisMixIn::setBarThru(std::string _barthru) {
    MeiAttribute *a = new MeiAttribute("bar.thru", _barthru);
    b->addAttribute(a);
};

bool mei::StaffGrpVisMixIn::hasBarThru() {
    return b->hasAttribute("bar.thru");
};

void mei::StaffGrpVisMixIn::removeBarThru() {
    b->removeAttribute("bar.thru");
};

/* include <bar.thrumixin> */
mei::TupletVisMixIn::TupletVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletVisMixIn::~TupletVisMixIn() {}
MeiAttribute* mei::TupletVisMixIn::getBracketPlace() {
    if (!b->hasAttribute("bracket.place")) {
        return NULL;
    }
    return b->getAttribute("bracket.place");
};

void mei::TupletVisMixIn::setBracketPlace(std::string _bracketplace) {
    MeiAttribute *a = new MeiAttribute("bracket.place", _bracketplace);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasBracketPlace() {
    return b->hasAttribute("bracket.place");
};

void mei::TupletVisMixIn::removeBracketPlace() {
    b->removeAttribute("bracket.place");
};
MeiAttribute* mei::TupletVisMixIn::getBracketVisible() {
    if (!b->hasAttribute("bracket.visible")) {
        return NULL;
    }
    return b->getAttribute("bracket.visible");
};

void mei::TupletVisMixIn::setBracketVisible(std::string _bracketvisible) {
    MeiAttribute *a = new MeiAttribute("bracket.visible", _bracketvisible);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasBracketVisible() {
    return b->hasAttribute("bracket.visible");
};

void mei::TupletVisMixIn::removeBracketVisible() {
    b->removeAttribute("bracket.visible");
};
MeiAttribute* mei::TupletVisMixIn::getDurVisible() {
    if (!b->hasAttribute("dur.visible")) {
        return NULL;
    }
    return b->getAttribute("dur.visible");
};

void mei::TupletVisMixIn::setDurVisible(std::string _durvisible) {
    MeiAttribute *a = new MeiAttribute("dur.visible", _durvisible);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasDurVisible() {
    return b->hasAttribute("dur.visible");
};

void mei::TupletVisMixIn::removeDurVisible() {
    b->removeAttribute("dur.visible");
};
MeiAttribute* mei::TupletVisMixIn::getNumFormat() {
    if (!b->hasAttribute("num.format")) {
        return NULL;
    }
    return b->getAttribute("num.format");
};

void mei::TupletVisMixIn::setNumFormat(std::string _numformat) {
    MeiAttribute *a = new MeiAttribute("num.format", _numformat);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasNumFormat() {
    return b->hasAttribute("num.format");
};

void mei::TupletVisMixIn::removeNumFormat() {
    b->removeAttribute("num.format");
};

/* include <num.formatmixin> */


