#include "fingeringmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::FingGrpLogMixIn::FingGrpLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::FingGrpLogMixIn::~FingGrpLogMixIn() {}
MeiAttribute* mei::FingGrpLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::FingGrpLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::FingGrpLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FingGrpLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */


