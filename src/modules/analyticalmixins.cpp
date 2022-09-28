#include "analyticalmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::HarmAnlMixIn::HarmAnlMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarmAnlMixIn::~HarmAnlMixIn() {}
MeiAttribute* mei::HarmAnlMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::HarmAnlMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::HarmAnlMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::HarmAnlMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::HarmonicFunctionMixIn::HarmonicFunctionMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarmonicFunctionMixIn::~HarmonicFunctionMixIn() {}
MeiAttribute* mei::HarmonicFunctionMixIn::getDeg() {
    if (!b->hasAttribute("deg")) {
        return NULL;
    }
    return b->getAttribute("deg");
};

void mei::HarmonicFunctionMixIn::setDeg(std::string _deg) {
    MeiAttribute *a = new MeiAttribute("deg", _deg);
    b->addAttribute(a);
};

bool mei::HarmonicFunctionMixIn::hasDeg() {
    return b->hasAttribute("deg");
};

void mei::HarmonicFunctionMixIn::removeDeg() {
    b->removeAttribute("deg");
};

/* include <degmixin> */
mei::IntervalHarmonicMixIn::IntervalHarmonicMixIn(MeiElement *b) {
    this->b = b;
};

mei::IntervalHarmonicMixIn::~IntervalHarmonicMixIn() {}
MeiAttribute* mei::IntervalHarmonicMixIn::getInth() {
    if (!b->hasAttribute("inth")) {
        return NULL;
    }
    return b->getAttribute("inth");
};

void mei::IntervalHarmonicMixIn::setInth(std::string _inth) {
    MeiAttribute *a = new MeiAttribute("inth", _inth);
    b->addAttribute(a);
};

bool mei::IntervalHarmonicMixIn::hasInth() {
    return b->hasAttribute("inth");
};

void mei::IntervalHarmonicMixIn::removeInth() {
    b->removeAttribute("inth");
};

/* include <inthmixin> */
mei::IntervalMelodicMixIn::IntervalMelodicMixIn(MeiElement *b) {
    this->b = b;
};

mei::IntervalMelodicMixIn::~IntervalMelodicMixIn() {}
MeiAttribute* mei::IntervalMelodicMixIn::getIntm() {
    if (!b->hasAttribute("intm")) {
        return NULL;
    }
    return b->getAttribute("intm");
};

void mei::IntervalMelodicMixIn::setIntm(std::string _intm) {
    MeiAttribute *a = new MeiAttribute("intm", _intm);
    b->addAttribute(a);
};

bool mei::IntervalMelodicMixIn::hasIntm() {
    return b->hasAttribute("intm");
};

void mei::IntervalMelodicMixIn::removeIntm() {
    b->removeAttribute("intm");
};

/* include <intmmixin> */
mei::KeySigAnlMixIn::KeySigAnlMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigAnlMixIn::~KeySigAnlMixIn() {}
MeiAttribute* mei::KeySigAnlMixIn::getMode() {
    if (!b->hasAttribute("mode")) {
        return NULL;
    }
    return b->getAttribute("mode");
};

void mei::KeySigAnlMixIn::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    b->addAttribute(a);
};

bool mei::KeySigAnlMixIn::hasMode() {
    return b->hasAttribute("mode");
};

void mei::KeySigAnlMixIn::removeMode() {
    b->removeAttribute("mode");
};

/* include <modemixin> */
mei::KeySigDefaultAnlMixIn::KeySigDefaultAnlMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigDefaultAnlMixIn::~KeySigDefaultAnlMixIn() {}
MeiAttribute* mei::KeySigDefaultAnlMixIn::getKeyAccid() {
    if (!b->hasAttribute("key.accid")) {
        return NULL;
    }
    return b->getAttribute("key.accid");
};

void mei::KeySigDefaultAnlMixIn::setKeyAccid(std::string _keyaccid) {
    MeiAttribute *a = new MeiAttribute("key.accid", _keyaccid);
    b->addAttribute(a);
};

bool mei::KeySigDefaultAnlMixIn::hasKeyAccid() {
    return b->hasAttribute("key.accid");
};

void mei::KeySigDefaultAnlMixIn::removeKeyAccid() {
    b->removeAttribute("key.accid");
};
MeiAttribute* mei::KeySigDefaultAnlMixIn::getKeyMode() {
    if (!b->hasAttribute("key.mode")) {
        return NULL;
    }
    return b->getAttribute("key.mode");
};

void mei::KeySigDefaultAnlMixIn::setKeyMode(std::string _keymode) {
    MeiAttribute *a = new MeiAttribute("key.mode", _keymode);
    b->addAttribute(a);
};

bool mei::KeySigDefaultAnlMixIn::hasKeyMode() {
    return b->hasAttribute("key.mode");
};

void mei::KeySigDefaultAnlMixIn::removeKeyMode() {
    b->removeAttribute("key.mode");
};
MeiAttribute* mei::KeySigDefaultAnlMixIn::getKeyPname() {
    if (!b->hasAttribute("key.pname")) {
        return NULL;
    }
    return b->getAttribute("key.pname");
};

void mei::KeySigDefaultAnlMixIn::setKeyPname(std::string _keypname) {
    MeiAttribute *a = new MeiAttribute("key.pname", _keypname);
    b->addAttribute(a);
};

bool mei::KeySigDefaultAnlMixIn::hasKeyPname() {
    return b->hasAttribute("key.pname");
};

void mei::KeySigDefaultAnlMixIn::removeKeyPname() {
    b->removeAttribute("key.pname");
};

/* include <key.pnamemixin> */
mei::MelodicFunctionMixIn::MelodicFunctionMixIn(MeiElement *b) {
    this->b = b;
};

mei::MelodicFunctionMixIn::~MelodicFunctionMixIn() {}
MeiAttribute* mei::MelodicFunctionMixIn::getMfunc() {
    if (!b->hasAttribute("mfunc")) {
        return NULL;
    }
    return b->getAttribute("mfunc");
};

void mei::MelodicFunctionMixIn::setMfunc(std::string _mfunc) {
    MeiAttribute *a = new MeiAttribute("mfunc", _mfunc);
    b->addAttribute(a);
};

bool mei::MelodicFunctionMixIn::hasMfunc() {
    return b->hasAttribute("mfunc");
};

void mei::MelodicFunctionMixIn::removeMfunc() {
    b->removeAttribute("mfunc");
};

/* include <mfuncmixin> */
mei::PitchClassMixIn::PitchClassMixIn(MeiElement *b) {
    this->b = b;
};

mei::PitchClassMixIn::~PitchClassMixIn() {}
MeiAttribute* mei::PitchClassMixIn::getPclass() {
    if (!b->hasAttribute("pclass")) {
        return NULL;
    }
    return b->getAttribute("pclass");
};

void mei::PitchClassMixIn::setPclass(std::string _pclass) {
    MeiAttribute *a = new MeiAttribute("pclass", _pclass);
    b->addAttribute(a);
};

bool mei::PitchClassMixIn::hasPclass() {
    return b->hasAttribute("pclass");
};

void mei::PitchClassMixIn::removePclass() {
    b->removeAttribute("pclass");
};

/* include <pclassmixin> */
mei::SolfaMixIn::SolfaMixIn(MeiElement *b) {
    this->b = b;
};

mei::SolfaMixIn::~SolfaMixIn() {}
MeiAttribute* mei::SolfaMixIn::getPsolfa() {
    if (!b->hasAttribute("psolfa")) {
        return NULL;
    }
    return b->getAttribute("psolfa");
};

void mei::SolfaMixIn::setPsolfa(std::string _psolfa) {
    MeiAttribute *a = new MeiAttribute("psolfa", _psolfa);
    b->addAttribute(a);
};

bool mei::SolfaMixIn::hasPsolfa() {
    return b->hasAttribute("psolfa");
};

void mei::SolfaMixIn::removePsolfa() {
    b->removeAttribute("psolfa");
};

/* include <psolfamixin> */


