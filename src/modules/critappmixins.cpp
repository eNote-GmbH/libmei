#include "critappmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::CritMixIn::CritMixIn(MeiElement *b) {
    this->b = b;
};

mei::CritMixIn::~CritMixIn() {}
MeiAttribute* mei::CritMixIn::getCause() {
    if (!b->hasAttribute("cause")) {
        return NULL;
    }
    return b->getAttribute("cause");
};

void mei::CritMixIn::setCause(std::string _cause) {
    MeiAttribute *a = new MeiAttribute("cause", _cause);
    b->addAttribute(a);
};

bool mei::CritMixIn::hasCause() {
    return b->hasAttribute("cause");
};

void mei::CritMixIn::removeCause() {
    b->removeAttribute("cause");
};

/* include <causemixin> */


