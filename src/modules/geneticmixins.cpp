#include "geneticmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::GeneticStateMixIn::GeneticStateMixIn(MeiElement *b) {
    this->b = b;
};

mei::GeneticStateMixIn::~GeneticStateMixIn() {}
MeiAttribute* mei::GeneticStateMixIn::getInstant() {
    if (!b->hasAttribute("instant")) {
        return NULL;
    }
    return b->getAttribute("instant");
};

void mei::GeneticStateMixIn::setInstant(std::string _instant) {
    MeiAttribute *a = new MeiAttribute("instant", _instant);
    b->addAttribute(a);
};

bool mei::GeneticStateMixIn::hasInstant() {
    return b->hasAttribute("instant");
};

void mei::GeneticStateMixIn::removeInstant() {
    b->removeAttribute("instant");
};
MeiAttribute* mei::GeneticStateMixIn::getState() {
    if (!b->hasAttribute("state")) {
        return NULL;
    }
    return b->getAttribute("state");
};

void mei::GeneticStateMixIn::setState(std::string _state) {
    MeiAttribute *a = new MeiAttribute("state", _state);
    b->addAttribute(a);
};

bool mei::GeneticStateMixIn::hasState() {
    return b->hasAttribute("state");
};

void mei::GeneticStateMixIn::removeState() {
    b->removeAttribute("state");
};

/* include <statemixin> */


