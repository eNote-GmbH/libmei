#include "mensuralmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::DurationQualityMixIn::DurationQualityMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationQualityMixIn::~DurationQualityMixIn() {}
MeiAttribute* mei::DurationQualityMixIn::getDurQuality() {
    if (!b->hasAttribute("dur.quality")) {
        return NULL;
    }
    return b->getAttribute("dur.quality");
};

void mei::DurationQualityMixIn::setDurQuality(std::string _durquality) {
    MeiAttribute *a = new MeiAttribute("dur.quality", _durquality);
    b->addAttribute(a);
};

bool mei::DurationQualityMixIn::hasDurQuality() {
    return b->hasAttribute("dur.quality");
};

void mei::DurationQualityMixIn::removeDurQuality() {
    b->removeAttribute("dur.quality");
};

/* include <dur.qualitymixin> */
mei::MensuralLogMixIn::MensuralLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralLogMixIn::~MensuralLogMixIn() {}
MeiAttribute* mei::MensuralLogMixIn::getProportNum() {
    if (!b->hasAttribute("proport.num")) {
        return NULL;
    }
    return b->getAttribute("proport.num");
};

void mei::MensuralLogMixIn::setProportNum(std::string _proportnum) {
    MeiAttribute *a = new MeiAttribute("proport.num", _proportnum);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasProportNum() {
    return b->hasAttribute("proport.num");
};

void mei::MensuralLogMixIn::removeProportNum() {
    b->removeAttribute("proport.num");
};
MeiAttribute* mei::MensuralLogMixIn::getProportNumbase() {
    if (!b->hasAttribute("proport.numbase")) {
        return NULL;
    }
    return b->getAttribute("proport.numbase");
};

void mei::MensuralLogMixIn::setProportNumbase(std::string _proportnumbase) {
    MeiAttribute *a = new MeiAttribute("proport.numbase", _proportnumbase);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasProportNumbase() {
    return b->hasAttribute("proport.numbase");
};

void mei::MensuralLogMixIn::removeProportNumbase() {
    b->removeAttribute("proport.numbase");
};

/* include <proport.numbasemixin> */
mei::MensuralSharedMixIn::MensuralSharedMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralSharedMixIn::~MensuralSharedMixIn() {}
MeiAttribute* mei::MensuralSharedMixIn::getModusmaior() {
    if (!b->hasAttribute("modusmaior")) {
        return NULL;
    }
    return b->getAttribute("modusmaior");
};

void mei::MensuralSharedMixIn::setModusmaior(std::string _modusmaior) {
    MeiAttribute *a = new MeiAttribute("modusmaior", _modusmaior);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasModusmaior() {
    return b->hasAttribute("modusmaior");
};

void mei::MensuralSharedMixIn::removeModusmaior() {
    b->removeAttribute("modusmaior");
};
MeiAttribute* mei::MensuralSharedMixIn::getModusminor() {
    if (!b->hasAttribute("modusminor")) {
        return NULL;
    }
    return b->getAttribute("modusminor");
};

void mei::MensuralSharedMixIn::setModusminor(std::string _modusminor) {
    MeiAttribute *a = new MeiAttribute("modusminor", _modusminor);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasModusminor() {
    return b->hasAttribute("modusminor");
};

void mei::MensuralSharedMixIn::removeModusminor() {
    b->removeAttribute("modusminor");
};
MeiAttribute* mei::MensuralSharedMixIn::getProlatio() {
    if (!b->hasAttribute("prolatio")) {
        return NULL;
    }
    return b->getAttribute("prolatio");
};

void mei::MensuralSharedMixIn::setProlatio(std::string _prolatio) {
    MeiAttribute *a = new MeiAttribute("prolatio", _prolatio);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasProlatio() {
    return b->hasAttribute("prolatio");
};

void mei::MensuralSharedMixIn::removeProlatio() {
    b->removeAttribute("prolatio");
};
MeiAttribute* mei::MensuralSharedMixIn::getTempus() {
    if (!b->hasAttribute("tempus")) {
        return NULL;
    }
    return b->getAttribute("tempus");
};

void mei::MensuralSharedMixIn::setTempus(std::string _tempus) {
    MeiAttribute *a = new MeiAttribute("tempus", _tempus);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasTempus() {
    return b->hasAttribute("tempus");
};

void mei::MensuralSharedMixIn::removeTempus() {
    b->removeAttribute("tempus");
};
MeiAttribute* mei::MensuralSharedMixIn::getDivisio() {
    if (!b->hasAttribute("divisio")) {
        return NULL;
    }
    return b->getAttribute("divisio");
};

void mei::MensuralSharedMixIn::setDivisio(std::string _divisio) {
    MeiAttribute *a = new MeiAttribute("divisio", _divisio);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasDivisio() {
    return b->hasAttribute("divisio");
};

void mei::MensuralSharedMixIn::removeDivisio() {
    b->removeAttribute("divisio");
};

/* include <divisiomixin> */
mei::NoteVisMensuralMixIn::NoteVisMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteVisMensuralMixIn::~NoteVisMensuralMixIn() {}
MeiAttribute* mei::NoteVisMensuralMixIn::getLig() {
    if (!b->hasAttribute("lig")) {
        return NULL;
    }
    return b->getAttribute("lig");
};

void mei::NoteVisMensuralMixIn::setLig(std::string _lig) {
    MeiAttribute *a = new MeiAttribute("lig", _lig);
    b->addAttribute(a);
};

bool mei::NoteVisMensuralMixIn::hasLig() {
    return b->hasAttribute("lig");
};

void mei::NoteVisMensuralMixIn::removeLig() {
    b->removeAttribute("lig");
};

/* include <ligmixin> */
mei::PlicaVisMixIn::PlicaVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlicaVisMixIn::~PlicaVisMixIn() {}
MeiAttribute* mei::PlicaVisMixIn::getDir() {
    if (!b->hasAttribute("dir")) {
        return NULL;
    }
    return b->getAttribute("dir");
};

void mei::PlicaVisMixIn::setDir(std::string _dir) {
    MeiAttribute *a = new MeiAttribute("dir", _dir);
    b->addAttribute(a);
};

bool mei::PlicaVisMixIn::hasDir() {
    return b->hasAttribute("dir");
};

void mei::PlicaVisMixIn::removeDir() {
    b->removeAttribute("dir");
};
MeiAttribute* mei::PlicaVisMixIn::getLen() {
    if (!b->hasAttribute("len")) {
        return NULL;
    }
    return b->getAttribute("len");
};

void mei::PlicaVisMixIn::setLen(std::string _len) {
    MeiAttribute *a = new MeiAttribute("len", _len);
    b->addAttribute(a);
};

bool mei::PlicaVisMixIn::hasLen() {
    return b->hasAttribute("len");
};

void mei::PlicaVisMixIn::removeLen() {
    b->removeAttribute("len");
};

/* include <lenmixin> */
mei::RestVisMensuralMixIn::RestVisMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::RestVisMensuralMixIn::~RestVisMensuralMixIn() {}
MeiAttribute* mei::RestVisMensuralMixIn::getSpaces() {
    if (!b->hasAttribute("spaces")) {
        return NULL;
    }
    return b->getAttribute("spaces");
};

void mei::RestVisMensuralMixIn::setSpaces(std::string _spaces) {
    MeiAttribute *a = new MeiAttribute("spaces", _spaces);
    b->addAttribute(a);
};

bool mei::RestVisMensuralMixIn::hasSpaces() {
    return b->hasAttribute("spaces");
};

void mei::RestVisMensuralMixIn::removeSpaces() {
    b->removeAttribute("spaces");
};

/* include <spacesmixin> */
mei::StemVisMixIn::StemVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemVisMixIn::~StemVisMixIn() {}
MeiAttribute* mei::StemVisMixIn::getPos() {
    if (!b->hasAttribute("pos")) {
        return NULL;
    }
    return b->getAttribute("pos");
};

void mei::StemVisMixIn::setPos(std::string _pos) {
    MeiAttribute *a = new MeiAttribute("pos", _pos);
    b->addAttribute(a);
};

bool mei::StemVisMixIn::hasPos() {
    return b->hasAttribute("pos");
};

void mei::StemVisMixIn::removePos() {
    b->removeAttribute("pos");
};
MeiAttribute* mei::StemVisMixIn::getLen() {
    if (!b->hasAttribute("len")) {
        return NULL;
    }
    return b->getAttribute("len");
};

void mei::StemVisMixIn::setLen(std::string _len) {
    MeiAttribute *a = new MeiAttribute("len", _len);
    b->addAttribute(a);
};

bool mei::StemVisMixIn::hasLen() {
    return b->hasAttribute("len");
};

void mei::StemVisMixIn::removeLen() {
    b->removeAttribute("len");
};
MeiAttribute* mei::StemVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::StemVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::StemVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::StemVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::StemVisMixIn::getDir() {
    if (!b->hasAttribute("dir")) {
        return NULL;
    }
    return b->getAttribute("dir");
};

void mei::StemVisMixIn::setDir(std::string _dir) {
    MeiAttribute *a = new MeiAttribute("dir", _dir);
    b->addAttribute(a);
};

bool mei::StemVisMixIn::hasDir() {
    return b->hasAttribute("dir");
};

void mei::StemVisMixIn::removeDir() {
    b->removeAttribute("dir");
};
MeiAttribute* mei::StemVisMixIn::getFlagPos() {
    if (!b->hasAttribute("flag.pos")) {
        return NULL;
    }
    return b->getAttribute("flag.pos");
};

void mei::StemVisMixIn::setFlagPos(std::string _flagpos) {
    MeiAttribute *a = new MeiAttribute("flag.pos", _flagpos);
    b->addAttribute(a);
};

bool mei::StemVisMixIn::hasFlagPos() {
    return b->hasAttribute("flag.pos");
};

void mei::StemVisMixIn::removeFlagPos() {
    b->removeAttribute("flag.pos");
};
MeiAttribute* mei::StemVisMixIn::getFlagForm() {
    if (!b->hasAttribute("flag.form")) {
        return NULL;
    }
    return b->getAttribute("flag.form");
};

void mei::StemVisMixIn::setFlagForm(std::string _flagform) {
    MeiAttribute *a = new MeiAttribute("flag.form", _flagform);
    b->addAttribute(a);
};

bool mei::StemVisMixIn::hasFlagForm() {
    return b->hasAttribute("flag.form");
};

void mei::StemVisMixIn::removeFlagForm() {
    b->removeAttribute("flag.form");
};

/* include <flag.formmixin> */
mei::StemsMensuralMixIn::StemsMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemsMensuralMixIn::~StemsMensuralMixIn() {}
MeiAttribute* mei::StemsMensuralMixIn::getStemForm() {
    if (!b->hasAttribute("stem.form")) {
        return NULL;
    }
    return b->getAttribute("stem.form");
};

void mei::StemsMensuralMixIn::setStemForm(std::string _stemform) {
    MeiAttribute *a = new MeiAttribute("stem.form", _stemform);
    b->addAttribute(a);
};

bool mei::StemsMensuralMixIn::hasStemForm() {
    return b->hasAttribute("stem.form");
};

void mei::StemsMensuralMixIn::removeStemForm() {
    b->removeAttribute("stem.form");
};

/* include <stem.formmixin> */


