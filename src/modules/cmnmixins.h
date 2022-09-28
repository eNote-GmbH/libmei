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

#ifndef CMNMIXIN_H_
#define CMNMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class ArpegLogMixIn {
    public:
        explicit ArpegLogMixIn(MeiElement *b);
        virtual ~ArpegLogMixIn();
        /** \brief Describes the direction in which an arpeggio is to be performed.
         */
        MeiAttribute* getOrder();
        void setOrder(std::string _order);
        bool hasOrder();
        void removeOrder();

/* include <ordermixin> */

    private:
        MeiElement *b;
};

class BTremLogMixIn {
    public:
        explicit BTremLogMixIn(MeiElement *b);
        virtual ~BTremLogMixIn();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class BeamPresentMixIn {
    public:
        explicit BeamPresentMixIn(MeiElement *b);
        virtual ~BeamPresentMixIn();
        /** \brief Indicates that this event is "under a beam".
         */
        MeiAttribute* getBeam();
        void setBeam(std::string _beam);
        bool hasBeam();
        void removeBeam();

/* include <beammixin> */

    private:
        MeiElement *b;
};

class BeamRendMixIn {
    public:
        explicit BeamRendMixIn(MeiElement *b);
        virtual ~BeamRendMixIn();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Records the placement of the beam relative to the events it affects.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();
        /** \brief Indicates presence of slash through the beam.
         */
        MeiAttribute* getSlash();
        void setSlash(std::string _slash);
        bool hasSlash();
        void removeSlash();
        /** \brief Records the slope of the beam.
         */
        MeiAttribute* getSlope();
        void setSlope(std::string _slope);
        bool hasSlope();
        void removeSlope();

/* include <slopemixin> */

    private:
        MeiElement *b;
};

class BeamSecondaryMixIn {
    public:
        explicit BeamSecondaryMixIn(MeiElement *b);
        virtual ~BeamSecondaryMixIn();
        /** \brief Presence of this attribute indicates that the secondary beam should be broken
         *  following this note/chord.
         * 
         *  The value of the attribute records the number of beams which should remain
         *  unbroken.
         */
        MeiAttribute* getBreaksec();
        void setBreaksec(std::string _breaksec);
        bool hasBreaksec();
        void removeBreaksec();

/* include <breaksecmixin> */

    private:
        MeiElement *b;
};

class BeamedWithMixIn {
    public:
        explicit BeamedWithMixIn(MeiElement *b);
        virtual ~BeamedWithMixIn();
        /** \brief In the case of cross-staff beams, the beam.with attribute is used to indicate
         *  which staff the beam is connected to; that is, the staff above or the staff
         *  below.
         */
        MeiAttribute* getBeamWith();
        void setBeamWith(std::string _beamwith);
        bool hasBeamWith();
        void removeBeamWith();

/* include <beam.withmixin> */

    private:
        MeiElement *b;
};

class BeamingLogMixIn {
    public:
        explicit BeamingLogMixIn(MeiElement *b);
        virtual ~BeamingLogMixIn();
        /** \brief Provides an example of how automated beaming (including secondary beams) is to
         *  be performed.
         */
        MeiAttribute* getBeamGroup();
        void setBeamGroup(std::string _beamgroup);
        bool hasBeamGroup();
        void removeBeamGroup();
        /** \brief Indicates whether automatically-drawn beams should include rests shorter than a
         *  quarter note duration.
         */
        MeiAttribute* getBeamRests();
        void setBeamRests(std::string _beamrests);
        bool hasBeamRests();
        void removeBeamRests();

/* include <beam.restsmixin> */

    private:
        MeiElement *b;
};

class BeatRptLogMixIn {
    public:
        explicit BeatRptLogMixIn(MeiElement *b);
        virtual ~BeatRptLogMixIn();
        /** \brief Indicates the performed duration represented by the beatRpt symbol; expressed in
         *  time signature denominator units.
         */
        MeiAttribute* getBeatdef();
        void setBeatdef(std::string _beatdef);
        bool hasBeatdef();
        void removeBeatdef();

/* include <beatdefmixin> */

    private:
        MeiElement *b;
};

class BracketSpanLogMixIn {
    public:
        explicit BracketSpanLogMixIn(MeiElement *b);
        virtual ~BracketSpanLogMixIn();
        /** \brief Describes the function of the bracketed event sequence.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class CutoutMixIn {
    public:
        explicit CutoutMixIn(MeiElement *b);
        virtual ~CutoutMixIn();
        /** \brief "Cut-out" style.
         */
        MeiAttribute* getCutout();
        void setCutout(std::string _cutout);
        bool hasCutout();
        void removeCutout();

/* include <cutoutmixin> */

    private:
        MeiElement *b;
};

class ExpandableMixIn {
    public:
        explicit ExpandableMixIn(MeiElement *b);
        virtual ~ExpandableMixIn();
        /** \brief Indicates whether to render a repeat symbol or the source material to which it
         *  refers.
         * 
         *  A value of 'true' renders the source material, while 'false' displays the repeat
         *  symbol.
         */
        MeiAttribute* getExpand();
        void setExpand(std::string _expand);
        bool hasExpand();
        void removeExpand();

/* include <expandmixin> */

    private:
        MeiElement *b;
};

class FTremLogMixIn {
    public:
        explicit FTremLogMixIn(MeiElement *b);
        virtual ~FTremLogMixIn();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class GlissPresentMixIn {
    public:
        explicit GlissPresentMixIn(MeiElement *b);
        virtual ~GlissPresentMixIn();
        /** \brief Indicates that this element participates in a glissando.
         * 
         *  If visual information about the glissando needs to be recorded, then a gliss
         *  element should be employed instead.
         */
        MeiAttribute* getGliss();
        void setGliss(std::string _gliss);
        bool hasGliss();
        void removeGliss();

/* include <glissmixin> */

    private:
        MeiElement *b;
};

class GraceGrpLogMixIn {
    public:
        explicit GraceGrpLogMixIn(MeiElement *b);
        virtual ~GraceGrpLogMixIn();
        /** \brief Records whether the grace note group is attached to the following event or to
         *  the preceding one.
         * 
         *  The usual name for the latter is "Nachschlag".
         */
        MeiAttribute* getAttach();
        void setAttach(std::string _attach);
        bool hasAttach();
        void removeAttach();

/* include <attachmixin> */

    private:
        MeiElement *b;
};

class GracedMixIn {
    public:
        explicit GracedMixIn(MeiElement *b);
        virtual ~GracedMixIn();
        /** \brief Marks a note or chord as a "grace" (without a definite performed duration) and
         *  records from which other note/chord it should "steal" time.
         */
        MeiAttribute* getGrace();
        void setGrace(std::string _grace);
        bool hasGrace();
        void removeGrace();
        /** \brief Records the amount of time to be "stolen" from a non-grace note/chord.
         */
        MeiAttribute* getGraceTime();
        void setGraceTime(std::string _gracetime);
        bool hasGraceTime();
        void removeGraceTime();

/* include <grace.timemixin> */

    private:
        MeiElement *b;
};

class HairpinLogMixIn {
    public:
        explicit HairpinLogMixIn(MeiElement *b);
        virtual ~HairpinLogMixIn();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Indicates that the hairpin starts from or ends in silence.
         * 
         *  Often rendered as a small circle attached to the closed end of the hairpin. See
         *  Gould, p. 108.
         */
        MeiAttribute* getNiente();
        void setNiente(std::string _niente);
        bool hasNiente();
        void removeNiente();

/* include <nientemixin> */

    private:
        MeiElement *b;
};

class HarpPedalLogMixIn {
    public:
        explicit HarpPedalLogMixIn(MeiElement *b);
        virtual ~HarpPedalLogMixIn();
        /** \brief Indicates the pedal setting for the harp’s C strings.
         */
        MeiAttribute* getC();
        void setC(std::string _c);
        bool hasC();
        void removeC();
        /** \brief Indicates the pedal setting for the harp’s D strings.
         */
        MeiAttribute* getD();
        void setD(std::string _d);
        bool hasD();
        void removeD();
        /** \brief Indicates the pedal setting for the harp’s E strings.
         */
        MeiAttribute* getE();
        void setE(std::string _e);
        bool hasE();
        void removeE();
        /** \brief Indicates the pedal setting for the harp’s F strings.
         */
        MeiAttribute* getF();
        void setF(std::string _f);
        bool hasF();
        void removeF();
        /** \brief Indicates the pedal setting for the harp’s G strings.
         */
        MeiAttribute* getG();
        void setG(std::string _g);
        bool hasG();
        void removeG();
        /** \brief Indicates the pedal setting for the harp’s A strings.
         */
        MeiAttribute* getA();
        void setA(std::string _a);
        bool hasA();
        void removeA();
        /** \brief Indicates the pedal setting for the harp’s B strings.
         */
        MeiAttribute* getB();
        void setB(std::string _b);
        bool hasB();
        void removeB();

/* include <bmixin> */

    private:
        MeiElement *b;
};

class LvPresentMixIn {
    public:
        explicit LvPresentMixIn(MeiElement *b);
        virtual ~LvPresentMixIn();
        /** \brief Indicates the attachment of an l.v.
         * 
         *  (laissez vibrer) sign to this element.
         */
        MeiAttribute* getLv();
        void setLv(std::string _lv);
        bool hasLv();
        void removeLv();

/* include <lvmixin> */

    private:
        MeiElement *b;
};

class MeasureLogMixIn {
    public:
        explicit MeasureLogMixIn(MeiElement *b);
        virtual ~MeasureLogMixIn();
        /** \brief Indicates the visual rendition of the left bar line.
         * 
         *  It is present here only for facilitation of translation from legacy encodings
         *  which use it. Usually, it can be safely ignored.
         */
        MeiAttribute* getLeft();
        void setLeft(std::string _left);
        bool hasLeft();
        void removeLeft();
        /** \brief Indicates the function of the right bar line and is structurally important.
         */
        MeiAttribute* getRight();
        void setRight(std::string _right);
        bool hasRight();
        void removeRight();

/* include <rightmixin> */

    private:
        MeiElement *b;
};

class MeterSigGrpLogMixIn {
    public:
        explicit MeterSigGrpLogMixIn(MeiElement *b);
        virtual ~MeterSigGrpLogMixIn();
        /** \brief Describes the function of the bracketed event sequence.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class NumberPlacementMixIn {
    public:
        explicit NumberPlacementMixIn(MeiElement *b);
        virtual ~NumberPlacementMixIn();
        /** \brief States where the tuplet number will be placed in relation to the note heads.
         */
        MeiAttribute* getNumPlace();
        void setNumPlace(std::string _numplace);
        bool hasNumPlace();
        void removeNumPlace();
        /** \brief Determines if the tuplet number is visible.
         */
        MeiAttribute* getNumVisible();
        void setNumVisible(std::string _numvisible);
        bool hasNumVisible();
        void removeNumVisible();

/* include <num.visiblemixin> */

    private:
        MeiElement *b;
};

class NumberedMixIn {
    public:
        explicit NumberedMixIn(MeiElement *b);
        virtual ~NumberedMixIn();
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

class OctaveLogMixIn {
    public:
        explicit OctaveLogMixIn(MeiElement *b);
        virtual ~OctaveLogMixIn();
        /** \brief Indicates whether the octave displacement should be performed simultaneously
         *  with the written notes, i.e., "coll' ottava".
         * 
         *  Unlike other octave signs which are indicated by broken lines, coll' ottava
         *  typically uses an unbroken line or a series of longer broken lines, ending with
         *  a short vertical stroke. See Read, p. 47-48.
         */
        MeiAttribute* getColl();
        void setColl(std::string _coll);
        bool hasColl();
        void removeColl();

/* include <collmixin> */

    private:
        MeiElement *b;
};

class PedalLogMixIn {
    public:
        explicit PedalLogMixIn(MeiElement *b);
        virtual ~PedalLogMixIn();
        /** \brief Records the position of the piano damper pedal.
         */
        MeiAttribute* getDir();
        void setDir(std::string _dir);
        bool hasDir();
        void removeDir();
        /** \brief Describes the function of the bracketed event sequence.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class PianoPedalsMixIn {
    public:
        explicit PianoPedalsMixIn(MeiElement *b);
        virtual ~PianoPedalsMixIn();
        /** \brief Determines whether piano pedal marks should be rendered as lines or as terms.
         */
        MeiAttribute* getPedalStyle();
        void setPedalStyle(std::string _pedalstyle);
        bool hasPedalStyle();
        void removePedalStyle();

/* include <pedal.stylemixin> */

    private:
        MeiElement *b;
};

class RehearsalMixIn {
    public:
        explicit RehearsalMixIn(MeiElement *b);
        virtual ~RehearsalMixIn();
        /** \brief Describes the enclosing shape for rehearsal marks.
         */
        MeiAttribute* getRehEnclose();
        void setRehEnclose(std::string _rehenclose);
        bool hasRehEnclose();
        void removeRehEnclose();

/* include <reh.enclosemixin> */

    private:
        MeiElement *b;
};

class ScoreDefVisCmnMixIn {
    public:
        explicit ScoreDefVisCmnMixIn(MeiElement *b);
        virtual ~ScoreDefVisCmnMixIn();
        /** \brief Determines whether to display guitar chord grids.
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();

/* include <grid.showmixin> */

    private:
        MeiElement *b;
};

class SlurRendMixIn {
    public:
        explicit SlurRendMixIn(MeiElement *b);
        virtual ~SlurRendMixIn();
        /** \brief 
         */
        MeiAttribute* getSlurLform();
        void setSlurLform(std::string _slurlform);
        bool hasSlurLform();
        void removeSlurLform();
        /** \brief 
         */
        MeiAttribute* getSlurLwidth();
        void setSlurLwidth(std::string _slurlwidth);
        bool hasSlurLwidth();
        void removeSlurLwidth();

/* include <slur.lwidthmixin> */

    private:
        MeiElement *b;
};

class StemsCmnMixIn {
    public:
        explicit StemsCmnMixIn(MeiElement *b);
        virtual ~StemsCmnMixIn();
        /** \brief Contains an indication of which staff a note or chord that logically belongs to
         *  the current staff should be visually placed on; that is, the one above or the
         *  one below.
         */
        MeiAttribute* getStemWith();
        void setStemWith(std::string _stemwith);
        bool hasStemWith();
        void removeStemWith();

/* include <stem.withmixin> */

    private:
        MeiElement *b;
};

class TieRendMixIn {
    public:
        explicit TieRendMixIn(MeiElement *b);
        virtual ~TieRendMixIn();
        /** \brief 
         */
        MeiAttribute* getTieLform();
        void setTieLform(std::string _tielform);
        bool hasTieLform();
        void removeTieLform();
        /** \brief 
         */
        MeiAttribute* getTieLwidth();
        void setTieLwidth(std::string _tielwidth);
        bool hasTieLwidth();
        void removeTieLwidth();

/* include <tie.lwidthmixin> */

    private:
        MeiElement *b;
};

class TremMeasuredMixIn {
    public:
        explicit TremMeasuredMixIn(MeiElement *b);
        virtual ~TremMeasuredMixIn();
        /** \brief The performed duration of an individual note in a measured tremolo.
         */
        MeiAttribute* getUnitdur();
        void setUnitdur(std::string _unitdur);
        bool hasUnitdur();
        void removeUnitdur();

/* include <unitdurmixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // CMNMIXIN_H_
