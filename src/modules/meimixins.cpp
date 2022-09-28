#include "meimixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::NotationTypeMixIn::NotationTypeMixIn(MeiElement *b) {
    this->b = b;
};

mei::NotationTypeMixIn::~NotationTypeMixIn() {}
MeiAttribute* mei::NotationTypeMixIn::getNotationtype() {
    if (!b->hasAttribute("notationtype")) {
        return NULL;
    }
    return b->getAttribute("notationtype");
};

void mei::NotationTypeMixIn::setNotationtype(std::string _notationtype) {
    MeiAttribute *a = new MeiAttribute("notationtype", _notationtype);
    b->addAttribute(a);
};

bool mei::NotationTypeMixIn::hasNotationtype() {
    return b->hasAttribute("notationtype");
};

void mei::NotationTypeMixIn::removeNotationtype() {
    b->removeAttribute("notationtype");
};
MeiAttribute* mei::NotationTypeMixIn::getNotationsubtype() {
    if (!b->hasAttribute("notationsubtype")) {
        return NULL;
    }
    return b->getAttribute("notationsubtype");
};

void mei::NotationTypeMixIn::setNotationsubtype(std::string _notationsubtype) {
    MeiAttribute *a = new MeiAttribute("notationsubtype", _notationsubtype);
    b->addAttribute(a);
};

bool mei::NotationTypeMixIn::hasNotationsubtype() {
    return b->hasAttribute("notationsubtype");
};

void mei::NotationTypeMixIn::removeNotationsubtype() {
    b->removeAttribute("notationsubtype");
};

/* include <notationsubtypemixin> */


