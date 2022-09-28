#include "cmnornamentsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::MordentLogMixIn::MordentLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MordentLogMixIn::~MordentLogMixIn() {}
MeiAttribute* mei::MordentLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::MordentLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::MordentLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::MordentLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::MordentLogMixIn::getLong() {
    if (!b->hasAttribute("long")) {
        return NULL;
    }
    return b->getAttribute("long");
};

void mei::MordentLogMixIn::setLong(std::string _long) {
    MeiAttribute *a = new MeiAttribute("long", _long);
    b->addAttribute(a);
};

bool mei::MordentLogMixIn::hasLong() {
    return b->hasAttribute("long");
};

void mei::MordentLogMixIn::removeLong() {
    b->removeAttribute("long");
};

/* include <longmixin> */
mei::OrnamPresentMixIn::OrnamPresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::OrnamPresentMixIn::~OrnamPresentMixIn() {}
MeiAttribute* mei::OrnamPresentMixIn::getOrnam() {
    if (!b->hasAttribute("ornam")) {
        return NULL;
    }
    return b->getAttribute("ornam");
};

void mei::OrnamPresentMixIn::setOrnam(std::string _ornam) {
    MeiAttribute *a = new MeiAttribute("ornam", _ornam);
    b->addAttribute(a);
};

bool mei::OrnamPresentMixIn::hasOrnam() {
    return b->hasAttribute("ornam");
};

void mei::OrnamPresentMixIn::removeOrnam() {
    b->removeAttribute("ornam");
};

/* include <ornammixin> */
mei::OrnamentAccidMixIn::OrnamentAccidMixIn(MeiElement *b) {
    this->b = b;
};

mei::OrnamentAccidMixIn::~OrnamentAccidMixIn() {}
MeiAttribute* mei::OrnamentAccidMixIn::getAccidupper() {
    if (!b->hasAttribute("accidupper")) {
        return NULL;
    }
    return b->getAttribute("accidupper");
};

void mei::OrnamentAccidMixIn::setAccidupper(std::string _accidupper) {
    MeiAttribute *a = new MeiAttribute("accidupper", _accidupper);
    b->addAttribute(a);
};

bool mei::OrnamentAccidMixIn::hasAccidupper() {
    return b->hasAttribute("accidupper");
};

void mei::OrnamentAccidMixIn::removeAccidupper() {
    b->removeAttribute("accidupper");
};
MeiAttribute* mei::OrnamentAccidMixIn::getAccidlower() {
    if (!b->hasAttribute("accidlower")) {
        return NULL;
    }
    return b->getAttribute("accidlower");
};

void mei::OrnamentAccidMixIn::setAccidlower(std::string _accidlower) {
    MeiAttribute *a = new MeiAttribute("accidlower", _accidlower);
    b->addAttribute(a);
};

bool mei::OrnamentAccidMixIn::hasAccidlower() {
    return b->hasAttribute("accidlower");
};

void mei::OrnamentAccidMixIn::removeAccidlower() {
    b->removeAttribute("accidlower");
};

/* include <accidlowermixin> */
mei::TurnLogMixIn::TurnLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::TurnLogMixIn::~TurnLogMixIn() {}
MeiAttribute* mei::TurnLogMixIn::getDelayed() {
    if (!b->hasAttribute("delayed")) {
        return NULL;
    }
    return b->getAttribute("delayed");
};

void mei::TurnLogMixIn::setDelayed(std::string _delayed) {
    MeiAttribute *a = new MeiAttribute("delayed", _delayed);
    b->addAttribute(a);
};

bool mei::TurnLogMixIn::hasDelayed() {
    return b->hasAttribute("delayed");
};

void mei::TurnLogMixIn::removeDelayed() {
    b->removeAttribute("delayed");
};
MeiAttribute* mei::TurnLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::TurnLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::TurnLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::TurnLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */


