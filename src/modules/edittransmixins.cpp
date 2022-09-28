#include "edittransmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AgentIdentMixIn::AgentIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::AgentIdentMixIn::~AgentIdentMixIn() {}
MeiAttribute* mei::AgentIdentMixIn::getAgent() {
    if (!b->hasAttribute("agent")) {
        return NULL;
    }
    return b->getAttribute("agent");
};

void mei::AgentIdentMixIn::setAgent(std::string _agent) {
    MeiAttribute *a = new MeiAttribute("agent", _agent);
    b->addAttribute(a);
};

bool mei::AgentIdentMixIn::hasAgent() {
    return b->hasAttribute("agent");
};

void mei::AgentIdentMixIn::removeAgent() {
    b->removeAttribute("agent");
};

/* include <agentmixin> */
mei::ReasonIdentMixIn::ReasonIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::ReasonIdentMixIn::~ReasonIdentMixIn() {}
MeiAttribute* mei::ReasonIdentMixIn::getReason() {
    if (!b->hasAttribute("reason")) {
        return NULL;
    }
    return b->getAttribute("reason");
};

void mei::ReasonIdentMixIn::setReason(std::string _reason) {
    MeiAttribute *a = new MeiAttribute("reason", _reason);
    b->addAttribute(a);
};

bool mei::ReasonIdentMixIn::hasReason() {
    return b->hasAttribute("reason");
};

void mei::ReasonIdentMixIn::removeReason() {
    b->removeAttribute("reason");
};

/* include <reasonmixin> */


