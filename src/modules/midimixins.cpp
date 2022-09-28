#include "midimixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ChannelizedMixIn::ChannelizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::ChannelizedMixIn::~ChannelizedMixIn() {}
MeiAttribute* mei::ChannelizedMixIn::getMidiChannel() {
    if (!b->hasAttribute("midi.channel")) {
        return NULL;
    }
    return b->getAttribute("midi.channel");
};

void mei::ChannelizedMixIn::setMidiChannel(std::string _midichannel) {
    MeiAttribute *a = new MeiAttribute("midi.channel", _midichannel);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiChannel() {
    return b->hasAttribute("midi.channel");
};

void mei::ChannelizedMixIn::removeMidiChannel() {
    b->removeAttribute("midi.channel");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiDuty() {
    if (!b->hasAttribute("midi.duty")) {
        return NULL;
    }
    return b->getAttribute("midi.duty");
};

void mei::ChannelizedMixIn::setMidiDuty(std::string _mididuty) {
    MeiAttribute *a = new MeiAttribute("midi.duty", _mididuty);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiDuty() {
    return b->hasAttribute("midi.duty");
};

void mei::ChannelizedMixIn::removeMidiDuty() {
    b->removeAttribute("midi.duty");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiPort() {
    if (!b->hasAttribute("midi.port")) {
        return NULL;
    }
    return b->getAttribute("midi.port");
};

void mei::ChannelizedMixIn::setMidiPort(std::string _midiport) {
    MeiAttribute *a = new MeiAttribute("midi.port", _midiport);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiPort() {
    return b->hasAttribute("midi.port");
};

void mei::ChannelizedMixIn::removeMidiPort() {
    b->removeAttribute("midi.port");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiTrack() {
    if (!b->hasAttribute("midi.track")) {
        return NULL;
    }
    return b->getAttribute("midi.track");
};

void mei::ChannelizedMixIn::setMidiTrack(std::string _miditrack) {
    MeiAttribute *a = new MeiAttribute("midi.track", _miditrack);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiTrack() {
    return b->hasAttribute("midi.track");
};

void mei::ChannelizedMixIn::removeMidiTrack() {
    b->removeAttribute("midi.track");
};

/* include <midi.trackmixin> */
mei::InstrumentIdentMixIn::InstrumentIdentMixIn(MeiElement *b) {
    this->b = b;
};

mei::InstrumentIdentMixIn::~InstrumentIdentMixIn() {}
MeiAttribute* mei::InstrumentIdentMixIn::getInstr() {
    if (!b->hasAttribute("instr")) {
        return NULL;
    }
    return b->getAttribute("instr");
};

void mei::InstrumentIdentMixIn::setInstr(std::string _instr) {
    MeiAttribute *a = new MeiAttribute("instr", _instr);
    b->addAttribute(a);
};

bool mei::InstrumentIdentMixIn::hasInstr() {
    return b->hasAttribute("instr");
};

void mei::InstrumentIdentMixIn::removeInstr() {
    b->removeAttribute("instr");
};

/* include <instrmixin> */
mei::MidiInstrumentMixIn::MidiInstrumentMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiInstrumentMixIn::~MidiInstrumentMixIn() {}
MeiAttribute* mei::MidiInstrumentMixIn::getMidiInstrnum() {
    if (!b->hasAttribute("midi.instrnum")) {
        return NULL;
    }
    return b->getAttribute("midi.instrnum");
};

void mei::MidiInstrumentMixIn::setMidiInstrnum(std::string _midiinstrnum) {
    MeiAttribute *a = new MeiAttribute("midi.instrnum", _midiinstrnum);
    b->addAttribute(a);
};

bool mei::MidiInstrumentMixIn::hasMidiInstrnum() {
    return b->hasAttribute("midi.instrnum");
};

void mei::MidiInstrumentMixIn::removeMidiInstrnum() {
    b->removeAttribute("midi.instrnum");
};
MeiAttribute* mei::MidiInstrumentMixIn::getMidiInstrname() {
    if (!b->hasAttribute("midi.instrname")) {
        return NULL;
    }
    return b->getAttribute("midi.instrname");
};

void mei::MidiInstrumentMixIn::setMidiInstrname(std::string _midiinstrname) {
    MeiAttribute *a = new MeiAttribute("midi.instrname", _midiinstrname);
    b->addAttribute(a);
};

bool mei::MidiInstrumentMixIn::hasMidiInstrname() {
    return b->hasAttribute("midi.instrname");
};

void mei::MidiInstrumentMixIn::removeMidiInstrname() {
    b->removeAttribute("midi.instrname");
};
MeiAttribute* mei::MidiInstrumentMixIn::getMidiPan() {
    if (!b->hasAttribute("midi.pan")) {
        return NULL;
    }
    return b->getAttribute("midi.pan");
};

void mei::MidiInstrumentMixIn::setMidiPan(std::string _midipan) {
    MeiAttribute *a = new MeiAttribute("midi.pan", _midipan);
    b->addAttribute(a);
};

bool mei::MidiInstrumentMixIn::hasMidiPan() {
    return b->hasAttribute("midi.pan");
};

void mei::MidiInstrumentMixIn::removeMidiPan() {
    b->removeAttribute("midi.pan");
};
MeiAttribute* mei::MidiInstrumentMixIn::getMidiPatchname() {
    if (!b->hasAttribute("midi.patchname")) {
        return NULL;
    }
    return b->getAttribute("midi.patchname");
};

void mei::MidiInstrumentMixIn::setMidiPatchname(std::string _midipatchname) {
    MeiAttribute *a = new MeiAttribute("midi.patchname", _midipatchname);
    b->addAttribute(a);
};

bool mei::MidiInstrumentMixIn::hasMidiPatchname() {
    return b->hasAttribute("midi.patchname");
};

void mei::MidiInstrumentMixIn::removeMidiPatchname() {
    b->removeAttribute("midi.patchname");
};
MeiAttribute* mei::MidiInstrumentMixIn::getMidiPatchnum() {
    if (!b->hasAttribute("midi.patchnum")) {
        return NULL;
    }
    return b->getAttribute("midi.patchnum");
};

void mei::MidiInstrumentMixIn::setMidiPatchnum(std::string _midipatchnum) {
    MeiAttribute *a = new MeiAttribute("midi.patchnum", _midipatchnum);
    b->addAttribute(a);
};

bool mei::MidiInstrumentMixIn::hasMidiPatchnum() {
    return b->hasAttribute("midi.patchnum");
};

void mei::MidiInstrumentMixIn::removeMidiPatchnum() {
    b->removeAttribute("midi.patchnum");
};
MeiAttribute* mei::MidiInstrumentMixIn::getMidiVolume() {
    if (!b->hasAttribute("midi.volume")) {
        return NULL;
    }
    return b->getAttribute("midi.volume");
};

void mei::MidiInstrumentMixIn::setMidiVolume(std::string _midivolume) {
    MeiAttribute *a = new MeiAttribute("midi.volume", _midivolume);
    b->addAttribute(a);
};

bool mei::MidiInstrumentMixIn::hasMidiVolume() {
    return b->hasAttribute("midi.volume");
};

void mei::MidiInstrumentMixIn::removeMidiVolume() {
    b->removeAttribute("midi.volume");
};

/* include <midi.volumemixin> */
mei::MidiNumberMixIn::MidiNumberMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiNumberMixIn::~MidiNumberMixIn() {}
MeiAttribute* mei::MidiNumberMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        return NULL;
    }
    return b->getAttribute("num");
};

void mei::MidiNumberMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::MidiNumberMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::MidiNumberMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::MidiTempoMixIn::MidiTempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiTempoMixIn::~MidiTempoMixIn() {}
MeiAttribute* mei::MidiTempoMixIn::getMidiBpm() {
    if (!b->hasAttribute("midi.bpm")) {
        return NULL;
    }
    return b->getAttribute("midi.bpm");
};

void mei::MidiTempoMixIn::setMidiBpm(std::string _midibpm) {
    MeiAttribute *a = new MeiAttribute("midi.bpm", _midibpm);
    b->addAttribute(a);
};

bool mei::MidiTempoMixIn::hasMidiBpm() {
    return b->hasAttribute("midi.bpm");
};

void mei::MidiTempoMixIn::removeMidiBpm() {
    b->removeAttribute("midi.bpm");
};
MeiAttribute* mei::MidiTempoMixIn::getMidiMspb() {
    if (!b->hasAttribute("midi.mspb")) {
        return NULL;
    }
    return b->getAttribute("midi.mspb");
};

void mei::MidiTempoMixIn::setMidiMspb(std::string _midimspb) {
    MeiAttribute *a = new MeiAttribute("midi.mspb", _midimspb);
    b->addAttribute(a);
};

bool mei::MidiTempoMixIn::hasMidiMspb() {
    return b->hasAttribute("midi.mspb");
};

void mei::MidiTempoMixIn::removeMidiMspb() {
    b->removeAttribute("midi.mspb");
};

/* include <midi.mspbmixin> */
mei::MidiValueMixIn::MidiValueMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiValueMixIn::~MidiValueMixIn() {}
MeiAttribute* mei::MidiValueMixIn::getVal() {
    if (!b->hasAttribute("val")) {
        return NULL;
    }
    return b->getAttribute("val");
};

void mei::MidiValueMixIn::setVal(std::string _val) {
    MeiAttribute *a = new MeiAttribute("val", _val);
    b->addAttribute(a);
};

bool mei::MidiValueMixIn::hasVal() {
    return b->hasAttribute("val");
};

void mei::MidiValueMixIn::removeVal() {
    b->removeAttribute("val");
};

/* include <valmixin> */
mei::MidiValue2MixIn::MidiValue2MixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiValue2MixIn::~MidiValue2MixIn() {}
MeiAttribute* mei::MidiValue2MixIn::getVal2() {
    if (!b->hasAttribute("val2")) {
        return NULL;
    }
    return b->getAttribute("val2");
};

void mei::MidiValue2MixIn::setVal2(std::string _val2) {
    MeiAttribute *a = new MeiAttribute("val2", _val2);
    b->addAttribute(a);
};

bool mei::MidiValue2MixIn::hasVal2() {
    return b->hasAttribute("val2");
};

void mei::MidiValue2MixIn::removeVal2() {
    b->removeAttribute("val2");
};

/* include <val2mixin> */
mei::MidiVelocityMixIn::MidiVelocityMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiVelocityMixIn::~MidiVelocityMixIn() {}
MeiAttribute* mei::MidiVelocityMixIn::getVel() {
    if (!b->hasAttribute("vel")) {
        return NULL;
    }
    return b->getAttribute("vel");
};

void mei::MidiVelocityMixIn::setVel(std::string _vel) {
    MeiAttribute *a = new MeiAttribute("vel", _vel);
    b->addAttribute(a);
};

bool mei::MidiVelocityMixIn::hasVel() {
    return b->hasAttribute("vel");
};

void mei::MidiVelocityMixIn::removeVel() {
    b->removeAttribute("vel");
};

/* include <velmixin> */
mei::TimeBaseMixIn::TimeBaseMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimeBaseMixIn::~TimeBaseMixIn() {}
MeiAttribute* mei::TimeBaseMixIn::getPpq() {
    if (!b->hasAttribute("ppq")) {
        return NULL;
    }
    return b->getAttribute("ppq");
};

void mei::TimeBaseMixIn::setPpq(std::string _ppq) {
    MeiAttribute *a = new MeiAttribute("ppq", _ppq);
    b->addAttribute(a);
};

bool mei::TimeBaseMixIn::hasPpq() {
    return b->hasAttribute("ppq");
};

void mei::TimeBaseMixIn::removePpq() {
    b->removeAttribute("ppq");
};

/* include <ppqmixin> */


