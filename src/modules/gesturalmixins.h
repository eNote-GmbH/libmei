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

#ifndef GESTURALMIXIN_H_
#define GESTURALMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AccidentalGesturalMixIn {
    public:
        explicit AccidentalGesturalMixIn(MeiElement *b);
        virtual ~AccidentalGesturalMixIn();
        /** \brief Records the performed pitch inflection.
         */
        MeiAttribute* getAccidGes();
        void setAccidGes(std::string _accidges);
        bool hasAccidGes();
        void removeAccidGes();

/* include <accid.gesmixin> */

    private:
        MeiElement *b;
};

class ArticulationGesturalMixIn {
    public:
        explicit ArticulationGesturalMixIn(MeiElement *b);
        virtual ~ArticulationGesturalMixIn();
        /** \brief Records performed articulation that differs from the written value.
         */
        MeiAttribute* getArticGes();
        void setArticGes(std::string _articges);
        bool hasArticGes();
        void removeArticGes();

/* include <artic.gesmixin> */

    private:
        MeiElement *b;
};

class BendGesMixIn {
    public:
        explicit BendGesMixIn(MeiElement *b);
        virtual ~BendGesMixIn();
        /** \brief Records the amount of detuning.
         * 
         *  The decimal values should be rendered as a fraction (or an integer plus a
         *  fraction) along with the bend symbol.
         */
        MeiAttribute* getAmount();
        void setAmount(std::string _amount);
        bool hasAmount();
        void removeAmount();

/* include <amountmixin> */

    private:
        MeiElement *b;
};

class DurationGesturalMixIn {
    public:
        explicit DurationGesturalMixIn(MeiElement *b);
        virtual ~DurationGesturalMixIn();
        /** \brief Records performed duration information that differs from the written duration.
         */
        MeiAttribute* getDurGes();
        void setDurGes(std::string _durges);
        bool hasDurGes();
        void removeDurGes();
        /** \brief Number of dots required for a gestural duration when different from that of the
         *  written duration.
         */
        MeiAttribute* getDotsGes();
        void setDotsGes(std::string _dotsges);
        bool hasDotsGes();
        void removeDotsGes();
        /** \brief Duration as a count of units provided in the time signature denominator.
         */
        MeiAttribute* getDurMetrical();
        void setDurMetrical(std::string _durmetrical);
        bool hasDurMetrical();
        void removeDurMetrical();
        /** \brief Duration recorded as pulses-per-quarter note, e.g., MIDI clicks or MusicXML
         *  divisions.
         */
        MeiAttribute* getDurPpq();
        void setDurPpq(std::string _durppq);
        bool hasDurPpq();
        void removeDurPpq();
        /** \brief Duration in seconds, e.g., 1.732.
         */
        MeiAttribute* getDurReal();
        void setDurReal(std::string _durreal);
        bool hasDurReal();
        void removeDurReal();
        /** \brief Duration as an optionally dotted Humdrum **recip value.
         */
        MeiAttribute* getDurRecip();
        void setDurRecip(std::string _durrecip);
        bool hasDurRecip();
        void removeDurRecip();

/* include <dur.recipmixin> */

    private:
        MeiElement *b;
};

class MdivGesMixIn {
    public:
        explicit MdivGesMixIn(MeiElement *b);
        virtual ~MdivGesMixIn();
        /** \brief Indicates that the performance of the next musical division should begin
         *  immediately following this one.
         */
        MeiAttribute* getAttacca();
        void setAttacca(std::string _attacca);
        bool hasAttacca();
        void removeAttacca();

/* include <attaccamixin> */

    private:
        MeiElement *b;
};

class NcGesMixIn {
    public:
        explicit NcGesMixIn(MeiElement *b);
        virtual ~NcGesMixIn();
        /** \brief Records performed octave information that differs from the written value.
         */
        MeiAttribute* getOctGes();
        void setOctGes(std::string _octges);
        bool hasOctGes();
        void removeOctGes();
        /** \brief Contains a performed pitch name that differs from the written value.
         */
        MeiAttribute* getPnameGes();
        void setPnameGes(std::string _pnameges);
        bool hasPnameGes();
        void removePnameGes();
        /** \brief Holds a pitch-to-number mapping, a base-40 or MIDI note number, for example.
         */
        MeiAttribute* getPnum();
        void setPnum(std::string _pnum);
        bool hasPnum();
        void removePnum();

/* include <pnummixin> */

    private:
        MeiElement *b;
};

class NoteGesMixIn {
    public:
        explicit NoteGesMixIn(MeiElement *b);
        virtual ~NoteGesMixIn();
        /** \brief Indicates an extreme, indefinite performed pitch.
         */
        MeiAttribute* getExtremis();
        void setExtremis(std::string _extremis);
        bool hasExtremis();
        void removeExtremis();
        /** \brief Records performed octave information that differs from the written value.
         */
        MeiAttribute* getOctGes();
        void setOctGes(std::string _octges);
        bool hasOctGes();
        void removeOctGes();
        /** \brief Contains a performed pitch name that differs from the written value.
         */
        MeiAttribute* getPnameGes();
        void setPnameGes(std::string _pnameges);
        bool hasPnameGes();
        void removePnameGes();
        /** \brief Holds a pitch-to-number mapping, a base-40 or MIDI note number, for example.
         */
        MeiAttribute* getPnum();
        void setPnum(std::string _pnum);
        bool hasPnum();
        void removePnum();

/* include <pnummixin> */

    private:
        MeiElement *b;
};

class ScoreDefGesMixIn {
    public:
        explicit ScoreDefGesMixIn(MeiElement *b);
        virtual ~ScoreDefGesMixIn();
        /** \brief Holds the pitch name of a tuning reference pitch.
         */
        MeiAttribute* getTunePname();
        void setTunePname(std::string _tunepname);
        bool hasTunePname();
        void removeTunePname();
        /** \brief Holds a value for cycles per second, i.e., Hertz, for a tuning reference pitch.
         */
        MeiAttribute* getTuneHz();
        void setTuneHz(std::string _tuneHz);
        bool hasTuneHz();
        void removeTuneHz();
        /** \brief Provides an indication of the tuning system, 'just', for example.
         */
        MeiAttribute* getTuneTemper();
        void setTuneTemper(std::string _tunetemper);
        bool hasTuneTemper();
        void removeTuneTemper();

/* include <tune.tempermixin> */

    private:
        MeiElement *b;
};

class SectionGesMixIn {
    public:
        explicit SectionGesMixIn(MeiElement *b);
        virtual ~SectionGesMixIn();
        /** \brief Indicates that the performance of the next musical division should begin
         *  immediately following this one.
         */
        MeiAttribute* getAttacca();
        void setAttacca(std::string _attacca);
        bool hasAttacca();
        void removeAttacca();

/* include <attaccamixin> */

    private:
        MeiElement *b;
};

class SoundLocationMixIn {
    public:
        explicit SoundLocationMixIn(MeiElement *b);
        virtual ~SoundLocationMixIn();
        /** \brief The lateral or left-to-right plane.
         */
        MeiAttribute* getAzimuth();
        void setAzimuth(std::string _azimuth);
        bool hasAzimuth();
        void removeAzimuth();
        /** \brief The above-to-below axis.
         */
        MeiAttribute* getElevation();
        void setElevation(std::string _elevation);
        bool hasElevation();
        void removeElevation();

/* include <elevationmixin> */

    private:
        MeiElement *b;
};

class TimestampGesturalMixIn {
    public:
        explicit TimestampGesturalMixIn(MeiElement *b);
        virtual ~TimestampGesturalMixIn();
        /** \brief Encodes the onset time in terms of musical time, i.e., beats[.fractional beat
         *  part], as expressed in the written time signature.
         */
        MeiAttribute* getTstampGes();
        void setTstampGes(std::string _tstampges);
        bool hasTstampGes();
        void removeTstampGes();
        /** \brief Records the onset time in terms of ISO time.
         */
        MeiAttribute* getTstampReal();
        void setTstampReal(std::string _tstampreal);
        bool hasTstampReal();
        void removeTstampReal();

/* include <tstamp.realmixin> */

    private:
        MeiElement *b;
};

class Timestamp2GesturalMixIn {
    public:
        explicit Timestamp2GesturalMixIn(MeiElement *b);
        virtual ~Timestamp2GesturalMixIn();
        /** \brief Encodes the ending point of an event, i.e., a count of measures plus a beat
         *  location in the ending measure.
         */
        MeiAttribute* getTstamp2Ges();
        void setTstamp2Ges(std::string _tstamp2ges);
        bool hasTstamp2Ges();
        void removeTstamp2Ges();
        /** \brief Records the ending point of an event in terms of ISO time.
         */
        MeiAttribute* getTstamp2Real();
        void setTstamp2Real(std::string _tstamp2real);
        bool hasTstamp2Real();
        void removeTstamp2Real();

/* include <tstamp2.realmixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // GESTURALMIXIN_H_
