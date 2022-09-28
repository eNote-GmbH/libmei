#include "gesturalmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AccidentalGesturalMixIn::AccidentalGesturalMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidentalGesturalMixIn::~AccidentalGesturalMixIn() {}
MeiAttribute* mei::AccidentalGesturalMixIn::getAccidGes() {
    if (!b->hasAttribute("accid.ges")) {
        return NULL;
    }
    return b->getAttribute("accid.ges");
};

void mei::AccidentalGesturalMixIn::setAccidGes(std::string _accidges) {
    MeiAttribute *a = new MeiAttribute("accid.ges", _accidges);
    b->addAttribute(a);
};

bool mei::AccidentalGesturalMixIn::hasAccidGes() {
    return b->hasAttribute("accid.ges");
};

void mei::AccidentalGesturalMixIn::removeAccidGes() {
    b->removeAttribute("accid.ges");
};

/* include <accid.gesmixin> */
mei::ArticulationGesturalMixIn::ArticulationGesturalMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArticulationGesturalMixIn::~ArticulationGesturalMixIn() {}
MeiAttribute* mei::ArticulationGesturalMixIn::getArticGes() {
    if (!b->hasAttribute("artic.ges")) {
        return NULL;
    }
    return b->getAttribute("artic.ges");
};

void mei::ArticulationGesturalMixIn::setArticGes(std::string _articges) {
    MeiAttribute *a = new MeiAttribute("artic.ges", _articges);
    b->addAttribute(a);
};

bool mei::ArticulationGesturalMixIn::hasArticGes() {
    return b->hasAttribute("artic.ges");
};

void mei::ArticulationGesturalMixIn::removeArticGes() {
    b->removeAttribute("artic.ges");
};

/* include <artic.gesmixin> */
mei::BendGesMixIn::BendGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::BendGesMixIn::~BendGesMixIn() {}
MeiAttribute* mei::BendGesMixIn::getAmount() {
    if (!b->hasAttribute("amount")) {
        return NULL;
    }
    return b->getAttribute("amount");
};

void mei::BendGesMixIn::setAmount(std::string _amount) {
    MeiAttribute *a = new MeiAttribute("amount", _amount);
    b->addAttribute(a);
};

bool mei::BendGesMixIn::hasAmount() {
    return b->hasAttribute("amount");
};

void mei::BendGesMixIn::removeAmount() {
    b->removeAttribute("amount");
};

/* include <amountmixin> */
mei::DurationGesturalMixIn::DurationGesturalMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationGesturalMixIn::~DurationGesturalMixIn() {}
MeiAttribute* mei::DurationGesturalMixIn::getDurGes() {
    if (!b->hasAttribute("dur.ges")) {
        return NULL;
    }
    return b->getAttribute("dur.ges");
};

void mei::DurationGesturalMixIn::setDurGes(std::string _durges) {
    MeiAttribute *a = new MeiAttribute("dur.ges", _durges);
    b->addAttribute(a);
};

bool mei::DurationGesturalMixIn::hasDurGes() {
    return b->hasAttribute("dur.ges");
};

void mei::DurationGesturalMixIn::removeDurGes() {
    b->removeAttribute("dur.ges");
};
MeiAttribute* mei::DurationGesturalMixIn::getDotsGes() {
    if (!b->hasAttribute("dots.ges")) {
        return NULL;
    }
    return b->getAttribute("dots.ges");
};

void mei::DurationGesturalMixIn::setDotsGes(std::string _dotsges) {
    MeiAttribute *a = new MeiAttribute("dots.ges", _dotsges);
    b->addAttribute(a);
};

bool mei::DurationGesturalMixIn::hasDotsGes() {
    return b->hasAttribute("dots.ges");
};

void mei::DurationGesturalMixIn::removeDotsGes() {
    b->removeAttribute("dots.ges");
};
MeiAttribute* mei::DurationGesturalMixIn::getDurMetrical() {
    if (!b->hasAttribute("dur.metrical")) {
        return NULL;
    }
    return b->getAttribute("dur.metrical");
};

void mei::DurationGesturalMixIn::setDurMetrical(std::string _durmetrical) {
    MeiAttribute *a = new MeiAttribute("dur.metrical", _durmetrical);
    b->addAttribute(a);
};

bool mei::DurationGesturalMixIn::hasDurMetrical() {
    return b->hasAttribute("dur.metrical");
};

void mei::DurationGesturalMixIn::removeDurMetrical() {
    b->removeAttribute("dur.metrical");
};
MeiAttribute* mei::DurationGesturalMixIn::getDurPpq() {
    if (!b->hasAttribute("dur.ppq")) {
        return NULL;
    }
    return b->getAttribute("dur.ppq");
};

void mei::DurationGesturalMixIn::setDurPpq(std::string _durppq) {
    MeiAttribute *a = new MeiAttribute("dur.ppq", _durppq);
    b->addAttribute(a);
};

bool mei::DurationGesturalMixIn::hasDurPpq() {
    return b->hasAttribute("dur.ppq");
};

void mei::DurationGesturalMixIn::removeDurPpq() {
    b->removeAttribute("dur.ppq");
};
MeiAttribute* mei::DurationGesturalMixIn::getDurReal() {
    if (!b->hasAttribute("dur.real")) {
        return NULL;
    }
    return b->getAttribute("dur.real");
};

void mei::DurationGesturalMixIn::setDurReal(std::string _durreal) {
    MeiAttribute *a = new MeiAttribute("dur.real", _durreal);
    b->addAttribute(a);
};

bool mei::DurationGesturalMixIn::hasDurReal() {
    return b->hasAttribute("dur.real");
};

void mei::DurationGesturalMixIn::removeDurReal() {
    b->removeAttribute("dur.real");
};
MeiAttribute* mei::DurationGesturalMixIn::getDurRecip() {
    if (!b->hasAttribute("dur.recip")) {
        return NULL;
    }
    return b->getAttribute("dur.recip");
};

void mei::DurationGesturalMixIn::setDurRecip(std::string _durrecip) {
    MeiAttribute *a = new MeiAttribute("dur.recip", _durrecip);
    b->addAttribute(a);
};

bool mei::DurationGesturalMixIn::hasDurRecip() {
    return b->hasAttribute("dur.recip");
};

void mei::DurationGesturalMixIn::removeDurRecip() {
    b->removeAttribute("dur.recip");
};

/* include <dur.recipmixin> */
mei::MdivGesMixIn::MdivGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::MdivGesMixIn::~MdivGesMixIn() {}
MeiAttribute* mei::MdivGesMixIn::getAttacca() {
    if (!b->hasAttribute("attacca")) {
        return NULL;
    }
    return b->getAttribute("attacca");
};

void mei::MdivGesMixIn::setAttacca(std::string _attacca) {
    MeiAttribute *a = new MeiAttribute("attacca", _attacca);
    b->addAttribute(a);
};

bool mei::MdivGesMixIn::hasAttacca() {
    return b->hasAttribute("attacca");
};

void mei::MdivGesMixIn::removeAttacca() {
    b->removeAttribute("attacca");
};

/* include <attaccamixin> */
mei::NcGesMixIn::NcGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::NcGesMixIn::~NcGesMixIn() {}
MeiAttribute* mei::NcGesMixIn::getOctGes() {
    if (!b->hasAttribute("oct.ges")) {
        return NULL;
    }
    return b->getAttribute("oct.ges");
};

void mei::NcGesMixIn::setOctGes(std::string _octges) {
    MeiAttribute *a = new MeiAttribute("oct.ges", _octges);
    b->addAttribute(a);
};

bool mei::NcGesMixIn::hasOctGes() {
    return b->hasAttribute("oct.ges");
};

void mei::NcGesMixIn::removeOctGes() {
    b->removeAttribute("oct.ges");
};
MeiAttribute* mei::NcGesMixIn::getPnameGes() {
    if (!b->hasAttribute("pname.ges")) {
        return NULL;
    }
    return b->getAttribute("pname.ges");
};

void mei::NcGesMixIn::setPnameGes(std::string _pnameges) {
    MeiAttribute *a = new MeiAttribute("pname.ges", _pnameges);
    b->addAttribute(a);
};

bool mei::NcGesMixIn::hasPnameGes() {
    return b->hasAttribute("pname.ges");
};

void mei::NcGesMixIn::removePnameGes() {
    b->removeAttribute("pname.ges");
};
MeiAttribute* mei::NcGesMixIn::getPnum() {
    if (!b->hasAttribute("pnum")) {
        return NULL;
    }
    return b->getAttribute("pnum");
};

void mei::NcGesMixIn::setPnum(std::string _pnum) {
    MeiAttribute *a = new MeiAttribute("pnum", _pnum);
    b->addAttribute(a);
};

bool mei::NcGesMixIn::hasPnum() {
    return b->hasAttribute("pnum");
};

void mei::NcGesMixIn::removePnum() {
    b->removeAttribute("pnum");
};

/* include <pnummixin> */
mei::NoteGesMixIn::NoteGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteGesMixIn::~NoteGesMixIn() {}
MeiAttribute* mei::NoteGesMixIn::getExtremis() {
    if (!b->hasAttribute("extremis")) {
        return NULL;
    }
    return b->getAttribute("extremis");
};

void mei::NoteGesMixIn::setExtremis(std::string _extremis) {
    MeiAttribute *a = new MeiAttribute("extremis", _extremis);
    b->addAttribute(a);
};

bool mei::NoteGesMixIn::hasExtremis() {
    return b->hasAttribute("extremis");
};

void mei::NoteGesMixIn::removeExtremis() {
    b->removeAttribute("extremis");
};
MeiAttribute* mei::NoteGesMixIn::getOctGes() {
    if (!b->hasAttribute("oct.ges")) {
        return NULL;
    }
    return b->getAttribute("oct.ges");
};

void mei::NoteGesMixIn::setOctGes(std::string _octges) {
    MeiAttribute *a = new MeiAttribute("oct.ges", _octges);
    b->addAttribute(a);
};

bool mei::NoteGesMixIn::hasOctGes() {
    return b->hasAttribute("oct.ges");
};

void mei::NoteGesMixIn::removeOctGes() {
    b->removeAttribute("oct.ges");
};
MeiAttribute* mei::NoteGesMixIn::getPnameGes() {
    if (!b->hasAttribute("pname.ges")) {
        return NULL;
    }
    return b->getAttribute("pname.ges");
};

void mei::NoteGesMixIn::setPnameGes(std::string _pnameges) {
    MeiAttribute *a = new MeiAttribute("pname.ges", _pnameges);
    b->addAttribute(a);
};

bool mei::NoteGesMixIn::hasPnameGes() {
    return b->hasAttribute("pname.ges");
};

void mei::NoteGesMixIn::removePnameGes() {
    b->removeAttribute("pname.ges");
};
MeiAttribute* mei::NoteGesMixIn::getPnum() {
    if (!b->hasAttribute("pnum")) {
        return NULL;
    }
    return b->getAttribute("pnum");
};

void mei::NoteGesMixIn::setPnum(std::string _pnum) {
    MeiAttribute *a = new MeiAttribute("pnum", _pnum);
    b->addAttribute(a);
};

bool mei::NoteGesMixIn::hasPnum() {
    return b->hasAttribute("pnum");
};

void mei::NoteGesMixIn::removePnum() {
    b->removeAttribute("pnum");
};

/* include <pnummixin> */
mei::ScoreDefGesMixIn::ScoreDefGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoreDefGesMixIn::~ScoreDefGesMixIn() {}
MeiAttribute* mei::ScoreDefGesMixIn::getTunePname() {
    if (!b->hasAttribute("tune.pname")) {
        return NULL;
    }
    return b->getAttribute("tune.pname");
};

void mei::ScoreDefGesMixIn::setTunePname(std::string _tunepname) {
    MeiAttribute *a = new MeiAttribute("tune.pname", _tunepname);
    b->addAttribute(a);
};

bool mei::ScoreDefGesMixIn::hasTunePname() {
    return b->hasAttribute("tune.pname");
};

void mei::ScoreDefGesMixIn::removeTunePname() {
    b->removeAttribute("tune.pname");
};
MeiAttribute* mei::ScoreDefGesMixIn::getTuneHz() {
    if (!b->hasAttribute("tune.Hz")) {
        return NULL;
    }
    return b->getAttribute("tune.Hz");
};

void mei::ScoreDefGesMixIn::setTuneHz(std::string _tuneHz) {
    MeiAttribute *a = new MeiAttribute("tune.Hz", _tuneHz);
    b->addAttribute(a);
};

bool mei::ScoreDefGesMixIn::hasTuneHz() {
    return b->hasAttribute("tune.Hz");
};

void mei::ScoreDefGesMixIn::removeTuneHz() {
    b->removeAttribute("tune.Hz");
};
MeiAttribute* mei::ScoreDefGesMixIn::getTuneTemper() {
    if (!b->hasAttribute("tune.temper")) {
        return NULL;
    }
    return b->getAttribute("tune.temper");
};

void mei::ScoreDefGesMixIn::setTuneTemper(std::string _tunetemper) {
    MeiAttribute *a = new MeiAttribute("tune.temper", _tunetemper);
    b->addAttribute(a);
};

bool mei::ScoreDefGesMixIn::hasTuneTemper() {
    return b->hasAttribute("tune.temper");
};

void mei::ScoreDefGesMixIn::removeTuneTemper() {
    b->removeAttribute("tune.temper");
};

/* include <tune.tempermixin> */
mei::SectionGesMixIn::SectionGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::SectionGesMixIn::~SectionGesMixIn() {}
MeiAttribute* mei::SectionGesMixIn::getAttacca() {
    if (!b->hasAttribute("attacca")) {
        return NULL;
    }
    return b->getAttribute("attacca");
};

void mei::SectionGesMixIn::setAttacca(std::string _attacca) {
    MeiAttribute *a = new MeiAttribute("attacca", _attacca);
    b->addAttribute(a);
};

bool mei::SectionGesMixIn::hasAttacca() {
    return b->hasAttribute("attacca");
};

void mei::SectionGesMixIn::removeAttacca() {
    b->removeAttribute("attacca");
};

/* include <attaccamixin> */
mei::SoundLocationMixIn::SoundLocationMixIn(MeiElement *b) {
    this->b = b;
};

mei::SoundLocationMixIn::~SoundLocationMixIn() {}
MeiAttribute* mei::SoundLocationMixIn::getAzimuth() {
    if (!b->hasAttribute("azimuth")) {
        return NULL;
    }
    return b->getAttribute("azimuth");
};

void mei::SoundLocationMixIn::setAzimuth(std::string _azimuth) {
    MeiAttribute *a = new MeiAttribute("azimuth", _azimuth);
    b->addAttribute(a);
};

bool mei::SoundLocationMixIn::hasAzimuth() {
    return b->hasAttribute("azimuth");
};

void mei::SoundLocationMixIn::removeAzimuth() {
    b->removeAttribute("azimuth");
};
MeiAttribute* mei::SoundLocationMixIn::getElevation() {
    if (!b->hasAttribute("elevation")) {
        return NULL;
    }
    return b->getAttribute("elevation");
};

void mei::SoundLocationMixIn::setElevation(std::string _elevation) {
    MeiAttribute *a = new MeiAttribute("elevation", _elevation);
    b->addAttribute(a);
};

bool mei::SoundLocationMixIn::hasElevation() {
    return b->hasAttribute("elevation");
};

void mei::SoundLocationMixIn::removeElevation() {
    b->removeAttribute("elevation");
};

/* include <elevationmixin> */
mei::TimestampGesturalMixIn::TimestampGesturalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimestampGesturalMixIn::~TimestampGesturalMixIn() {}
MeiAttribute* mei::TimestampGesturalMixIn::getTstampGes() {
    if (!b->hasAttribute("tstamp.ges")) {
        return NULL;
    }
    return b->getAttribute("tstamp.ges");
};

void mei::TimestampGesturalMixIn::setTstampGes(std::string _tstampges) {
    MeiAttribute *a = new MeiAttribute("tstamp.ges", _tstampges);
    b->addAttribute(a);
};

bool mei::TimestampGesturalMixIn::hasTstampGes() {
    return b->hasAttribute("tstamp.ges");
};

void mei::TimestampGesturalMixIn::removeTstampGes() {
    b->removeAttribute("tstamp.ges");
};
MeiAttribute* mei::TimestampGesturalMixIn::getTstampReal() {
    if (!b->hasAttribute("tstamp.real")) {
        return NULL;
    }
    return b->getAttribute("tstamp.real");
};

void mei::TimestampGesturalMixIn::setTstampReal(std::string _tstampreal) {
    MeiAttribute *a = new MeiAttribute("tstamp.real", _tstampreal);
    b->addAttribute(a);
};

bool mei::TimestampGesturalMixIn::hasTstampReal() {
    return b->hasAttribute("tstamp.real");
};

void mei::TimestampGesturalMixIn::removeTstampReal() {
    b->removeAttribute("tstamp.real");
};

/* include <tstamp.realmixin> */
mei::Timestamp2GesturalMixIn::Timestamp2GesturalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Timestamp2GesturalMixIn::~Timestamp2GesturalMixIn() {}
MeiAttribute* mei::Timestamp2GesturalMixIn::getTstamp2Ges() {
    if (!b->hasAttribute("tstamp2.ges")) {
        return NULL;
    }
    return b->getAttribute("tstamp2.ges");
};

void mei::Timestamp2GesturalMixIn::setTstamp2Ges(std::string _tstamp2ges) {
    MeiAttribute *a = new MeiAttribute("tstamp2.ges", _tstamp2ges);
    b->addAttribute(a);
};

bool mei::Timestamp2GesturalMixIn::hasTstamp2Ges() {
    return b->hasAttribute("tstamp2.ges");
};

void mei::Timestamp2GesturalMixIn::removeTstamp2Ges() {
    b->removeAttribute("tstamp2.ges");
};
MeiAttribute* mei::Timestamp2GesturalMixIn::getTstamp2Real() {
    if (!b->hasAttribute("tstamp2.real")) {
        return NULL;
    }
    return b->getAttribute("tstamp2.real");
};

void mei::Timestamp2GesturalMixIn::setTstamp2Real(std::string _tstamp2real) {
    MeiAttribute *a = new MeiAttribute("tstamp2.real", _tstamp2real);
    b->addAttribute(a);
};

bool mei::Timestamp2GesturalMixIn::hasTstamp2Real() {
    return b->hasAttribute("tstamp2.real");
};

void mei::Timestamp2GesturalMixIn::removeTstamp2Real() {
    b->removeAttribute("tstamp2.real");
};

/* include <tstamp2.realmixin> */


