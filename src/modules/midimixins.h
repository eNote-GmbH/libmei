/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef MIDIMIXIN_H_
#define MIDIMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class ChannelizedMixIn {
    public:
        explicit ChannelizedMixIn(MeiElement *b);
        virtual ~ChannelizedMixIn();
        /** \brief Records a MIDI channel value.
         */
        MeiAttribute* getMidiChannel();
        void setMidiChannel(std::string _midichannel);
        bool hasMidiChannel();
        void removeMidiChannel();
        /** \brief Specifies the 'on' part of the duty cycle as a percentage of a note’s duration.
         */
        MeiAttribute* getMidiDuty();
        void setMidiDuty(std::string _mididuty);
        bool hasMidiDuty();
        void removeMidiDuty();
        /** \brief Sets the MIDI port value.
         */
        MeiAttribute* getMidiPort();
        void setMidiPort(std::string _midiport);
        bool hasMidiPort();
        void removeMidiPort();
        /** \brief Sets the MIDI track.
         */
        MeiAttribute* getMidiTrack();
        void setMidiTrack(std::string _miditrack);
        bool hasMidiTrack();
        void removeMidiTrack();

/* include <midi.trackmixin> */

    private:
        MeiElement *b;
};

class InstrumentIdentMixIn {
    public:
        explicit InstrumentIdentMixIn(MeiElement *b);
        virtual ~InstrumentIdentMixIn();
        /** \brief Provides a way of pointing to a MIDI instrument definition.
         * 
         *  It must contain the ID of an instrDef element elsewhere in the document.
         */
        MeiAttribute* getInstr();
        void setInstr(std::string _instr);
        bool hasInstr();
        void removeInstr();

/* include <instrmixin> */

    private:
        MeiElement *b;
};

class MidiInstrumentMixIn {
    public:
        explicit MidiInstrumentMixIn(MeiElement *b);
        virtual ~MidiInstrumentMixIn();
        /** \brief Captures the General MIDI instrument number.
         * 
         *  Use an integer for a 0-based value. An integer preceded by "in" indicates a
         *  1-based value.
         */
        MeiAttribute* getMidiInstrnum();
        void setMidiInstrnum(std::string _midiinstrnum);
        bool hasMidiInstrnum();
        void removeMidiInstrnum();
        /** \brief Provides a General MIDI label for the MIDI instrument.
         */
        MeiAttribute* getMidiInstrname();
        void setMidiInstrname(std::string _midiinstrname);
        bool hasMidiInstrname();
        void removeMidiInstrname();
        /** \brief Sets the instrument’s position in a stereo field.
         * 
         *  MIDI values of 0 and 1 both pan left, 127 or 128 pans right, and 63 or 64 pans
         *  to the center. Positve percentage values pan to the right, negative ones to the
         *  left. 0% is centered.
         */
        MeiAttribute* getMidiPan();
        void setMidiPan(std::string _midipan);
        bool hasMidiPan();
        void removeMidiPan();
        /** \brief Records a non-General MIDI patch/instrument name.
         */
        MeiAttribute* getMidiPatchname();
        void setMidiPatchname(std::string _midipatchname);
        bool hasMidiPatchname();
        void removeMidiPatchname();
        /** \brief Records a non-General MIDI patch/instrument number.
         */
        MeiAttribute* getMidiPatchnum();
        void setMidiPatchnum(std::string _midipatchnum);
        bool hasMidiPatchnum();
        void removeMidiPatchnum();
        /** \brief Sets the instrument’s volume.
         */
        MeiAttribute* getMidiVolume();
        void setMidiVolume(std::string _midivolume);
        bool hasMidiVolume();
        void removeMidiVolume();

/* include <midi.volumemixin> */

    private:
        MeiElement *b;
};

class MidiNumberMixIn {
    public:
        explicit MidiNumberMixIn(MeiElement *b);
        virtual ~MidiNumberMixIn();
        /** \brief Records a number or count accompanying a notational feature.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <nummixin> */

    private:
        MeiElement *b;
};

class MidiTempoMixIn {
    public:
        explicit MidiTempoMixIn(MeiElement *b);
        virtual ~MidiTempoMixIn();
        /** \brief Captures the number of *quarter notes* per minute.
         * 
         *  In MIDI, a beat is always defined as a quarter note, *not the numerator of the
         *  time signature or the metronomic indication*.
         */
        MeiAttribute* getMidiBpm();
        void setMidiBpm(std::string _midibpm);
        bool hasMidiBpm();
        void removeMidiBpm();
        /** \brief Records the number of microseconds per *quarter note*.
         * 
         *  In MIDI, a beat is always defined as a quarter note, *not the numerator of the
         *  time signature or the metronomic indication*. At 120 quarter notes per minute,
         *  each quarter note will last 500,000 microseconds.
         */
        MeiAttribute* getMidiMspb();
        void setMidiMspb(std::string _midimspb);
        bool hasMidiMspb();
        void removeMidiMspb();

/* include <midi.mspbmixin> */

    private:
        MeiElement *b;
};

class MidiValueMixIn {
    public:
        explicit MidiValueMixIn(MeiElement *b);
        virtual ~MidiValueMixIn();
        /** \brief MIDI number.
         */
        MeiAttribute* getVal();
        void setVal(std::string _val);
        bool hasVal();
        void removeVal();

/* include <valmixin> */

    private:
        MeiElement *b;
};

class MidiValue2MixIn {
    public:
        explicit MidiValue2MixIn(MeiElement *b);
        virtual ~MidiValue2MixIn();
        /** \brief MIDI number.
         */
        MeiAttribute* getVal2();
        void setVal2(std::string _val2);
        bool hasVal2();
        void removeVal2();

/* include <val2mixin> */

    private:
        MeiElement *b;
};

class MidiVelocityMixIn {
    public:
        explicit MidiVelocityMixIn(MeiElement *b);
        virtual ~MidiVelocityMixIn();
        /** \brief MIDI Note-on/off velocity.
         */
        MeiAttribute* getVel();
        void setVel(std::string _vel);
        bool hasVel();
        void removeVel();

/* include <velmixin> */

    private:
        MeiElement *b;
};

class TimeBaseMixIn {
    public:
        explicit TimeBaseMixIn(MeiElement *b);
        virtual ~TimeBaseMixIn();
        /** \brief Indicates the number of pulses (sometimes referred to as ticks or divisions) per
         *  quarter note.
         * 
         *  Unlike MIDI, MEI permits different values for a score and individual staves.
         */
        MeiAttribute* getPpq();
        void setPpq(std::string _ppq);
        bool hasPpq();
        void removePpq();

/* include <ppqmixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // MIDIMIXIN_H_
