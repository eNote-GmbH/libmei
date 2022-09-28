#include "usersymbolsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AltSymMixIn::AltSymMixIn(MeiElement *b) {
    this->b = b;
};

mei::AltSymMixIn::~AltSymMixIn() {}
MeiAttribute* mei::AltSymMixIn::getAltsym() {
    if (!b->hasAttribute("altsym")) {
        return NULL;
    }
    return b->getAttribute("altsym");
};

void mei::AltSymMixIn::setAltsym(std::string _altsym) {
    MeiAttribute *a = new MeiAttribute("altsym", _altsym);
    b->addAttribute(a);
};

bool mei::AltSymMixIn::hasAltsym() {
    return b->hasAttribute("altsym");
};

void mei::AltSymMixIn::removeAltsym() {
    b->removeAttribute("altsym");
};

/* include <altsymmixin> */
mei::AnchoredTextLogMixIn::AnchoredTextLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::AnchoredTextLogMixIn::~AnchoredTextLogMixIn() {}
MeiAttribute* mei::AnchoredTextLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::AnchoredTextLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::AnchoredTextLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::AnchoredTextLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::CurveLogMixIn::CurveLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::CurveLogMixIn::~CurveLogMixIn() {}
MeiAttribute* mei::CurveLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::CurveLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::CurveLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::CurveLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::LineLogMixIn::LineLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::LineLogMixIn::~LineLogMixIn() {}
MeiAttribute* mei::LineLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::LineLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::LineLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::LineLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */


