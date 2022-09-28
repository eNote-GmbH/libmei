#include "headermixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::BifoliumSurfacesMixIn::BifoliumSurfacesMixIn(MeiElement *b) {
    this->b = b;
};

mei::BifoliumSurfacesMixIn::~BifoliumSurfacesMixIn() {}
MeiAttribute* mei::BifoliumSurfacesMixIn::getOuterRecto() {
    if (!b->hasAttribute("outer.recto")) {
        return NULL;
    }
    return b->getAttribute("outer.recto");
};

void mei::BifoliumSurfacesMixIn::setOuterRecto(std::string _outerrecto) {
    MeiAttribute *a = new MeiAttribute("outer.recto", _outerrecto);
    b->addAttribute(a);
};

bool mei::BifoliumSurfacesMixIn::hasOuterRecto() {
    return b->hasAttribute("outer.recto");
};

void mei::BifoliumSurfacesMixIn::removeOuterRecto() {
    b->removeAttribute("outer.recto");
};
MeiAttribute* mei::BifoliumSurfacesMixIn::getInnerVerso() {
    if (!b->hasAttribute("inner.verso")) {
        return NULL;
    }
    return b->getAttribute("inner.verso");
};

void mei::BifoliumSurfacesMixIn::setInnerVerso(std::string _innerverso) {
    MeiAttribute *a = new MeiAttribute("inner.verso", _innerverso);
    b->addAttribute(a);
};

bool mei::BifoliumSurfacesMixIn::hasInnerVerso() {
    return b->hasAttribute("inner.verso");
};

void mei::BifoliumSurfacesMixIn::removeInnerVerso() {
    b->removeAttribute("inner.verso");
};
MeiAttribute* mei::BifoliumSurfacesMixIn::getInnerRecto() {
    if (!b->hasAttribute("inner.recto")) {
        return NULL;
    }
    return b->getAttribute("inner.recto");
};

void mei::BifoliumSurfacesMixIn::setInnerRecto(std::string _innerrecto) {
    MeiAttribute *a = new MeiAttribute("inner.recto", _innerrecto);
    b->addAttribute(a);
};

bool mei::BifoliumSurfacesMixIn::hasInnerRecto() {
    return b->hasAttribute("inner.recto");
};

void mei::BifoliumSurfacesMixIn::removeInnerRecto() {
    b->removeAttribute("inner.recto");
};
MeiAttribute* mei::BifoliumSurfacesMixIn::getOuterVerso() {
    if (!b->hasAttribute("outer.verso")) {
        return NULL;
    }
    return b->getAttribute("outer.verso");
};

void mei::BifoliumSurfacesMixIn::setOuterVerso(std::string _outerverso) {
    MeiAttribute *a = new MeiAttribute("outer.verso", _outerverso);
    b->addAttribute(a);
};

bool mei::BifoliumSurfacesMixIn::hasOuterVerso() {
    return b->hasAttribute("outer.verso");
};

void mei::BifoliumSurfacesMixIn::removeOuterVerso() {
    b->removeAttribute("outer.verso");
};

/* include <outer.versomixin> */
mei::FoliumSurfacesMixIn::FoliumSurfacesMixIn(MeiElement *b) {
    this->b = b;
};

mei::FoliumSurfacesMixIn::~FoliumSurfacesMixIn() {}
MeiAttribute* mei::FoliumSurfacesMixIn::getRecto() {
    if (!b->hasAttribute("recto")) {
        return NULL;
    }
    return b->getAttribute("recto");
};

void mei::FoliumSurfacesMixIn::setRecto(std::string _recto) {
    MeiAttribute *a = new MeiAttribute("recto", _recto);
    b->addAttribute(a);
};

bool mei::FoliumSurfacesMixIn::hasRecto() {
    return b->hasAttribute("recto");
};

void mei::FoliumSurfacesMixIn::removeRecto() {
    b->removeAttribute("recto");
};
MeiAttribute* mei::FoliumSurfacesMixIn::getVerso() {
    if (!b->hasAttribute("verso")) {
        return NULL;
    }
    return b->getAttribute("verso");
};

void mei::FoliumSurfacesMixIn::setVerso(std::string _verso) {
    MeiAttribute *a = new MeiAttribute("verso", _verso);
    b->addAttribute(a);
};

bool mei::FoliumSurfacesMixIn::hasVerso() {
    return b->hasAttribute("verso");
};

void mei::FoliumSurfacesMixIn::removeVerso() {
    b->removeAttribute("verso");
};

/* include <versomixin> */
mei::RecordTypeMixIn::RecordTypeMixIn(MeiElement *b) {
    this->b = b;
};

mei::RecordTypeMixIn::~RecordTypeMixIn() {}
MeiAttribute* mei::RecordTypeMixIn::getRecordtype() {
    if (!b->hasAttribute("recordtype")) {
        return NULL;
    }
    return b->getAttribute("recordtype");
};

void mei::RecordTypeMixIn::setRecordtype(std::string _recordtype) {
    MeiAttribute *a = new MeiAttribute("recordtype", _recordtype);
    b->addAttribute(a);
};

bool mei::RecordTypeMixIn::hasRecordtype() {
    return b->hasAttribute("recordtype");
};

void mei::RecordTypeMixIn::removeRecordtype() {
    b->removeAttribute("recordtype");
};

/* include <recordtypemixin> */
mei::RegularMethodMixIn::RegularMethodMixIn(MeiElement *b) {
    this->b = b;
};

mei::RegularMethodMixIn::~RegularMethodMixIn() {}
MeiAttribute* mei::RegularMethodMixIn::getMethod() {
    if (!b->hasAttribute("method")) {
        return NULL;
    }
    return b->getAttribute("method");
};

void mei::RegularMethodMixIn::setMethod(std::string _method) {
    MeiAttribute *a = new MeiAttribute("method", _method);
    b->addAttribute(a);
};

bool mei::RegularMethodMixIn::hasMethod() {
    return b->hasAttribute("method");
};

void mei::RegularMethodMixIn::removeMethod() {
    b->removeAttribute("method");
};

/* include <methodmixin> */


