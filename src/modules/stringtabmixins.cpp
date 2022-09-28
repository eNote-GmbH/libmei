#include "stringtabmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::StringtabMixIn::StringtabMixIn(MeiElement *b) {
    this->b = b;
};

mei::StringtabMixIn::~StringtabMixIn() {}
MeiAttribute* mei::StringtabMixIn::getTabFing() {
    if (!b->hasAttribute("tab.fing")) {
        return NULL;
    }
    return b->getAttribute("tab.fing");
};

void mei::StringtabMixIn::setTabFing(std::string _tabfing) {
    MeiAttribute *a = new MeiAttribute("tab.fing", _tabfing);
    b->addAttribute(a);
};

bool mei::StringtabMixIn::hasTabFing() {
    return b->hasAttribute("tab.fing");
};

void mei::StringtabMixIn::removeTabFing() {
    b->removeAttribute("tab.fing");
};
MeiAttribute* mei::StringtabMixIn::getTabFret() {
    if (!b->hasAttribute("tab.fret")) {
        return NULL;
    }
    return b->getAttribute("tab.fret");
};

void mei::StringtabMixIn::setTabFret(std::string _tabfret) {
    MeiAttribute *a = new MeiAttribute("tab.fret", _tabfret);
    b->addAttribute(a);
};

bool mei::StringtabMixIn::hasTabFret() {
    return b->hasAttribute("tab.fret");
};

void mei::StringtabMixIn::removeTabFret() {
    b->removeAttribute("tab.fret");
};
MeiAttribute* mei::StringtabMixIn::getTabString() {
    if (!b->hasAttribute("tab.string")) {
        return NULL;
    }
    return b->getAttribute("tab.string");
};

void mei::StringtabMixIn::setTabString(std::string _tabstring) {
    MeiAttribute *a = new MeiAttribute("tab.string", _tabstring);
    b->addAttribute(a);
};

bool mei::StringtabMixIn::hasTabString() {
    return b->hasAttribute("tab.string");
};

void mei::StringtabMixIn::removeTabString() {
    b->removeAttribute("tab.string");
};

/* include <tab.stringmixin> */
mei::StringtabPositionMixIn::StringtabPositionMixIn(MeiElement *b) {
    this->b = b;
};

mei::StringtabPositionMixIn::~StringtabPositionMixIn() {}
MeiAttribute* mei::StringtabPositionMixIn::getTabPos() {
    if (!b->hasAttribute("tab.pos")) {
        return NULL;
    }
    return b->getAttribute("tab.pos");
};

void mei::StringtabPositionMixIn::setTabPos(std::string _tabpos) {
    MeiAttribute *a = new MeiAttribute("tab.pos", _tabpos);
    b->addAttribute(a);
};

bool mei::StringtabPositionMixIn::hasTabPos() {
    return b->hasAttribute("tab.pos");
};

void mei::StringtabPositionMixIn::removeTabPos() {
    b->removeAttribute("tab.pos");
};

/* include <tab.posmixin> */
mei::StringtabTuningMixIn::StringtabTuningMixIn(MeiElement *b) {
    this->b = b;
};

mei::StringtabTuningMixIn::~StringtabTuningMixIn() {}
MeiAttribute* mei::StringtabTuningMixIn::getTabStrings() {
    if (!b->hasAttribute("tab.strings")) {
        return NULL;
    }
    return b->getAttribute("tab.strings");
};

void mei::StringtabTuningMixIn::setTabStrings(std::string _tabstrings) {
    MeiAttribute *a = new MeiAttribute("tab.strings", _tabstrings);
    b->addAttribute(a);
};

bool mei::StringtabTuningMixIn::hasTabStrings() {
    return b->hasAttribute("tab.strings");
};

void mei::StringtabTuningMixIn::removeTabStrings() {
    b->removeAttribute("tab.strings");
};

/* include <tab.stringsmixin> */


