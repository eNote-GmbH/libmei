#include "msdescmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ComponentTypeMixIn::ComponentTypeMixIn(MeiElement *b) {
    this->b = b;
};

mei::ComponentTypeMixIn::~ComponentTypeMixIn() {}
MeiAttribute* mei::ComponentTypeMixIn::getComptype() {
    if (!b->hasAttribute("comptype")) {
        return NULL;
    }
    return b->getAttribute("comptype");
};

void mei::ComponentTypeMixIn::setComptype(std::string _comptype) {
    MeiAttribute *a = new MeiAttribute("comptype", _comptype);
    b->addAttribute(a);
};

bool mei::ComponentTypeMixIn::hasComptype() {
    return b->hasAttribute("comptype");
};

void mei::ComponentTypeMixIn::removeComptype() {
    b->removeAttribute("comptype");
};

/* include <comptypemixin> */


