#include "neumesmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::NcLogMixIn::NcLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::NcLogMixIn::~NcLogMixIn() {}
MeiAttribute* mei::NcLogMixIn::getOct() {
    if (!b->hasAttribute("oct")) {
        return NULL;
    }
    return b->getAttribute("oct");
};

void mei::NcLogMixIn::setOct(std::string _oct) {
    MeiAttribute *a = new MeiAttribute("oct", _oct);
    b->addAttribute(a);
};

bool mei::NcLogMixIn::hasOct() {
    return b->hasAttribute("oct");
};

void mei::NcLogMixIn::removeOct() {
    b->removeAttribute("oct");
};
MeiAttribute* mei::NcLogMixIn::getPname() {
    if (!b->hasAttribute("pname")) {
        return NULL;
    }
    return b->getAttribute("pname");
};

void mei::NcLogMixIn::setPname(std::string _pname) {
    MeiAttribute *a = new MeiAttribute("pname", _pname);
    b->addAttribute(a);
};

bool mei::NcLogMixIn::hasPname() {
    return b->hasAttribute("pname");
};

void mei::NcLogMixIn::removePname() {
    b->removeAttribute("pname");
};

/* include <pnamemixin> */
mei::NcFormMixIn::NcFormMixIn(MeiElement *b) {
    this->b = b;
};

mei::NcFormMixIn::~NcFormMixIn() {}
MeiAttribute* mei::NcFormMixIn::getAngled() {
    if (!b->hasAttribute("angled")) {
        return NULL;
    }
    return b->getAttribute("angled");
};

void mei::NcFormMixIn::setAngled(std::string _angled) {
    MeiAttribute *a = new MeiAttribute("angled", _angled);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasAngled() {
    return b->hasAttribute("angled");
};

void mei::NcFormMixIn::removeAngled() {
    b->removeAttribute("angled");
};
MeiAttribute* mei::NcFormMixIn::getCon() {
    if (!b->hasAttribute("con")) {
        return NULL;
    }
    return b->getAttribute("con");
};

void mei::NcFormMixIn::setCon(std::string _con) {
    MeiAttribute *a = new MeiAttribute("con", _con);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasCon() {
    return b->hasAttribute("con");
};

void mei::NcFormMixIn::removeCon() {
    b->removeAttribute("con");
};
MeiAttribute* mei::NcFormMixIn::getCurve() {
    if (!b->hasAttribute("curve")) {
        return NULL;
    }
    return b->getAttribute("curve");
};

void mei::NcFormMixIn::setCurve(std::string _curve) {
    MeiAttribute *a = new MeiAttribute("curve", _curve);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasCurve() {
    return b->hasAttribute("curve");
};

void mei::NcFormMixIn::removeCurve() {
    b->removeAttribute("curve");
};
MeiAttribute* mei::NcFormMixIn::getHooked() {
    if (!b->hasAttribute("hooked")) {
        return NULL;
    }
    return b->getAttribute("hooked");
};

void mei::NcFormMixIn::setHooked(std::string _hooked) {
    MeiAttribute *a = new MeiAttribute("hooked", _hooked);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasHooked() {
    return b->hasAttribute("hooked");
};

void mei::NcFormMixIn::removeHooked() {
    b->removeAttribute("hooked");
};
MeiAttribute* mei::NcFormMixIn::getLigated() {
    if (!b->hasAttribute("ligated")) {
        return NULL;
    }
    return b->getAttribute("ligated");
};

void mei::NcFormMixIn::setLigated(std::string _ligated) {
    MeiAttribute *a = new MeiAttribute("ligated", _ligated);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasLigated() {
    return b->hasAttribute("ligated");
};

void mei::NcFormMixIn::removeLigated() {
    b->removeAttribute("ligated");
};
MeiAttribute* mei::NcFormMixIn::getRellen() {
    if (!b->hasAttribute("rellen")) {
        return NULL;
    }
    return b->getAttribute("rellen");
};

void mei::NcFormMixIn::setRellen(std::string _rellen) {
    MeiAttribute *a = new MeiAttribute("rellen", _rellen);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasRellen() {
    return b->hasAttribute("rellen");
};

void mei::NcFormMixIn::removeRellen() {
    b->removeAttribute("rellen");
};
MeiAttribute* mei::NcFormMixIn::getSShape() {
    if (!b->hasAttribute("sShape")) {
        return NULL;
    }
    return b->getAttribute("sShape");
};

void mei::NcFormMixIn::setSShape(std::string _sShape) {
    MeiAttribute *a = new MeiAttribute("sShape", _sShape);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasSShape() {
    return b->hasAttribute("sShape");
};

void mei::NcFormMixIn::removeSShape() {
    b->removeAttribute("sShape");
};
MeiAttribute* mei::NcFormMixIn::getTilt() {
    if (!b->hasAttribute("tilt")) {
        return NULL;
    }
    return b->getAttribute("tilt");
};

void mei::NcFormMixIn::setTilt(std::string _tilt) {
    MeiAttribute *a = new MeiAttribute("tilt", _tilt);
    b->addAttribute(a);
};

bool mei::NcFormMixIn::hasTilt() {
    return b->hasAttribute("tilt");
};

void mei::NcFormMixIn::removeTilt() {
    b->removeAttribute("tilt");
};

/* include <tiltmixin> */


