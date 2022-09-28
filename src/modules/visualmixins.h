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

#ifndef VISUALMIXIN_H_
#define VISUALMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AnnotVisMixIn {
    public:
        explicit AnnotVisMixIn(MeiElement *b);
        virtual ~AnnotVisMixIn();
        /** \brief Records the placement of the beam relative to the events it affects.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

/* include <placemixin> */

    private:
        MeiElement *b;
};

class ArpegVisMixIn {
    public:
        explicit ArpegVisMixIn(MeiElement *b);
        virtual ~ArpegVisMixIn();
        /** \brief Indicates if an arrowhead is to be drawn as part of the arpeggiation symbol.
         */
        MeiAttribute* getArrow();
        void setArrow(std::string _arrow);
        bool hasArrow();
        void removeArrow();
        /** \brief Symbol rendered at end of the line.
         */
        MeiAttribute* getArrowShape();
        void setArrowShape(std::string _arrowshape);
        bool hasArrowShape();
        void removeArrowShape();
        /** \brief Holds the relative size of the arrow symbol.
         */
        MeiAttribute* getArrowSize();
        void setArrowSize(std::string _arrowsize);
        bool hasArrowSize();
        void removeArrowSize();
        /** \brief Captures the overall color of the arrow.
         */
        MeiAttribute* getArrowColor();
        void setArrowColor(std::string _arrowcolor);
        bool hasArrowColor();
        void removeArrowColor();
        /** \brief Captures the fill color of the arrow if different from the line color.
         */
        MeiAttribute* getArrowFillcolor();
        void setArrowFillcolor(std::string _arrowfillcolor);
        bool hasArrowFillcolor();
        void removeArrowFillcolor();
        /** \brief Visual form of the line.
         */
        MeiAttribute* getLineForm();
        void setLineForm(std::string _lineform);
        bool hasLineForm();
        void removeLineForm();
        /** \brief Width of the line.
         */
        MeiAttribute* getLineWidth();
        void setLineWidth(std::string _linewidth);
        bool hasLineWidth();
        void removeLineWidth();

/* include <line.widthmixin> */

    private:
        MeiElement *b;
};

class BarLineVisMixIn {
    public:
        explicit BarLineVisMixIn(MeiElement *b);
        virtual ~BarLineVisMixIn();
        /** \brief Encodes the stem length.
         */
        MeiAttribute* getLen();
        void setLen(std::string _len);
        bool hasLen();
        void removeLen();
        /** \brief Indicates the method employed to mark corrections and normalizations.
         */
        MeiAttribute* getMethod();
        void setMethod(std::string _method);
        bool hasMethod();
        void removeMethod();
        /** \brief Records the placement of the beam relative to the events it affects.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

/* include <placemixin> */

    private:
        MeiElement *b;
};

class BeamingVisMixIn {
    public:
        explicit BeamingVisMixIn(MeiElement *b);
        virtual ~BeamingVisMixIn();
        /** \brief Color of beams, including those associated with tuplets.
         */
        MeiAttribute* getBeamColor();
        void setBeamColor(std::string _beamcolor);
        bool hasBeamColor();
        void removeBeamColor();
        /** \brief Encodes whether a beam is "feathered" and in which direction.
         */
        MeiAttribute* getBeamRend();
        void setBeamRend(std::string _beamrend);
        bool hasBeamRend();
        void removeBeamRend();
        /** \brief Captures beam slope.
         */
        MeiAttribute* getBeamSlope();
        void setBeamSlope(std::string _beamslope);
        bool hasBeamSlope();
        void removeBeamSlope();

/* include <beam.slopemixin> */

    private:
        MeiElement *b;
};

class BeatRptVisMixIn {
    public:
        explicit BeatRptVisMixIn(MeiElement *b);
        virtual ~BeatRptVisMixIn();
        /** \brief Indicates presence of slash through the beam.
         */
        MeiAttribute* getSlash();
        void setSlash(std::string _slash);
        bool hasSlash();
        void removeSlash();

/* include <slashmixin> */

    private:
        MeiElement *b;
};

class ChordVisMixIn {
    public:
        explicit ChordVisMixIn(MeiElement *b);
        virtual ~ChordVisMixIn();
        /** \brief Indicates a single, alternative note head should be displayed instead of
         *  individual note heads.
         * 
         *  The highest and lowest notes of the chord usually indicate the upper and lower
         *  boundaries of the cluster note head.
         */
        MeiAttribute* getCluster();
        void setCluster(std::string _cluster);
        bool hasCluster();
        void removeCluster();

/* include <clustermixin> */

    private:
        MeiElement *b;
};

class CleffingVisMixIn {
    public:
        explicit CleffingVisMixIn(MeiElement *b);
        virtual ~CleffingVisMixIn();
        /** \brief Describes the color of the clef.
         */
        MeiAttribute* getClefColor();
        void setClefColor(std::string _clefcolor);
        bool hasClefColor();
        void removeClefColor();
        /** \brief Determines whether the clef is to be displayed.
         */
        MeiAttribute* getClefVisible();
        void setClefVisible(std::string _clefvisible);
        bool hasClefVisible();
        void removeClefVisible();

/* include <clef.visiblemixin> */

    private:
        MeiElement *b;
};

class EpisemaVisMixIn {
    public:
        explicit EpisemaVisMixIn(MeiElement *b);
        virtual ~EpisemaVisMixIn();
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

/* include <placemixin> */

    private:
        MeiElement *b;
};

class FTremVisMixIn {
    public:
        explicit FTremVisMixIn(MeiElement *b);
        virtual ~FTremVisMixIn();
        /** \brief Indicates the number of beams present.
         */
        MeiAttribute* getBeams();
        void setBeams(std::string _beams);
        bool hasBeams();
        void removeBeams();
        /** \brief Captures the number of "floating" beams, i.e., those not attached to stems.
         */
        MeiAttribute* getBeamsFloat();
        void setBeamsFloat(std::string _beamsfloat);
        bool hasBeamsFloat();
        void removeBeamsFloat();
        /** \brief Records the amount of separation between floating beams and stems.
         */
        MeiAttribute* getFloatGap();
        void setFloatGap(std::string _floatgap);
        bool hasFloatGap();
        void removeFloatGap();

/* include <float.gapmixin> */

    private:
        MeiElement *b;
};

class FermataVisMixIn {
    public:
        explicit FermataVisMixIn(MeiElement *b);
        virtual ~FermataVisMixIn();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Describes a clef’s shape.
         */
        MeiAttribute* getShape();
        void setShape(std::string _shape);
        bool hasShape();
        void removeShape();

/* include <shapemixin> */

    private:
        MeiElement *b;
};

class FingGrpVisMixIn {
    public:
        explicit FingGrpVisMixIn(MeiElement *b);
        virtual ~FingGrpVisMixIn();
        /** \brief Describes the rotation or reflection of the base symbol.
         */
        MeiAttribute* getOrient();
        void setOrient(std::string _orient);
        bool hasOrient();
        void removeOrient();

/* include <orientmixin> */

    private:
        MeiElement *b;
};

class HairpinVisMixIn {
    public:
        explicit HairpinVisMixIn(MeiElement *b);
        virtual ~HairpinVisMixIn();
        /** \brief Specifies the distance between the lines at the open end of a hairpin dynamic
         *  mark.
         */
        MeiAttribute* getOpening();
        void setOpening(std::string _opening);
        bool hasOpening();
        void removeOpening();

/* include <openingmixin> */

    private:
        MeiElement *b;
};

class HarmVisMixIn {
    public:
        explicit HarmVisMixIn(MeiElement *b);
        virtual ~HarmVisMixIn();
        /** \brief Describes how the harmonic indication should be rendered.
         */
        MeiAttribute* getRendgrid();
        void setRendgrid(std::string _rendgrid);
        bool hasRendgrid();
        void removeRendgrid();

/* include <rendgridmixin> */

    private:
        MeiElement *b;
};

class HispanTickVisMixIn {
    public:
        explicit HispanTickVisMixIn(MeiElement *b);
        virtual ~HispanTickVisMixIn();
        /** \brief Records the placement of the beam relative to the events it affects.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();
        /** \brief Direction of the pen stroke.
         */
        MeiAttribute* getTilt();
        void setTilt(std::string _tilt);
        bool hasTilt();
        void removeTilt();

/* include <tiltmixin> */

    private:
        MeiElement *b;
};

class KeySigVisMixIn {
    public:
        explicit KeySigVisMixIn(MeiElement *b);
        virtual ~KeySigVisMixIn();
        /** \brief Determines whether cautionary accidentals should be displayed at a key change.
         */
        MeiAttribute* getSigShowchange();
        void setSigShowchange(std::string _sigshowchange);
        bool hasSigShowchange();
        void removeSigShowchange();

/* include <sig.showchangemixin> */

    private:
        MeiElement *b;
};

class KeySigDefaultVisMixIn {
    public:
        explicit KeySigDefaultVisMixIn(MeiElement *b);
        virtual ~KeySigDefaultVisMixIn();
        /** \brief Indicates whether the key signature should be displayed.
         */
        MeiAttribute* getKeysigShow();
        void setKeysigShow(std::string _keysigshow);
        bool hasKeysigShow();
        void removeKeysigShow();
        /** \brief Determines whether cautionary accidentals should be displayed at a key change.
         */
        MeiAttribute* getKeysigShowchange();
        void setKeysigShowchange(std::string _keysigshowchange);
        bool hasKeysigShowchange();
        void removeKeysigShowchange();

/* include <keysig.showchangemixin> */

    private:
        MeiElement *b;
};

class LigatureVisMixIn {
    public:
        explicit LigatureVisMixIn(MeiElement *b);
        virtual ~LigatureVisMixIn();
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

class LineVisMixIn {
    public:
        explicit LineVisMixIn(MeiElement *b);
        virtual ~LineVisMixIn();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Measurement of the horizontal dimension of an entity.
         */
        MeiAttribute* getWidth();
        void setWidth(std::string _width);
        bool hasWidth();
        void removeWidth();
        /** \brief Symbol rendered at end of line.
         */
        MeiAttribute* getEndsym();
        void setEndsym(std::string _endsym);
        bool hasEndsym();
        void removeEndsym();
        /** \brief Holds the relative size of the line-end symbol.
         */
        MeiAttribute* getEndsymSize();
        void setEndsymSize(std::string _endsymsize);
        bool hasEndsymSize();
        void removeEndsymSize();
        /** \brief Symbol rendered at start of line.
         */
        MeiAttribute* getStartsym();
        void setStartsym(std::string _startsym);
        bool hasStartsym();
        void removeStartsym();
        /** \brief Holds the relative size of the line-start symbol.
         */
        MeiAttribute* getStartsymSize();
        void setStartsymSize(std::string _startsymsize);
        bool hasStartsymSize();
        void removeStartsymSize();

/* include <startsym.sizemixin> */

    private:
        MeiElement *b;
};

class LiquescentVisMixIn {
    public:
        explicit LiquescentVisMixIn(MeiElement *b);
        virtual ~LiquescentVisMixIn();
        /** \brief Records direction of curvature.
         */
        MeiAttribute* getCurve();
        void setCurve(std::string _curve);
        bool hasCurve();
        void removeCurve();
        /** \brief Indicates whether curve is closed.
         */
        MeiAttribute* getLooped();
        void setLooped(std::string _looped);
        bool hasLooped();
        void removeLooped();

/* include <loopedmixin> */

    private:
        MeiElement *b;
};

class MensurVisMixIn {
    public:
        explicit MensurVisMixIn(MeiElement *b);
        virtual ~MensurVisMixIn();
        /** \brief Specifies whether a dot is to be added to the base symbol.
         */
        MeiAttribute* getDot();
        void setDot(std::string _dot);
        bool hasDot();
        void removeDot();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Describes the rotation or reflection of the base symbol.
         */
        MeiAttribute* getOrient();
        void setOrient(std::string _orient);
        bool hasOrient();
        void removeOrient();
        /** \brief The base symbol in the mensuration sign/time signature of mensural notation.
         */
        MeiAttribute* getSign();
        void setSign(std::string _sign);
        bool hasSign();
        void removeSign();

/* include <signmixin> */

    private:
        MeiElement *b;
};

class MensuralVisMixIn {
    public:
        explicit MensuralVisMixIn(MeiElement *b);
        virtual ~MensuralVisMixIn();
        /** \brief Records the color of the mensuration sign.
         * 
         *  Do not confuse this with the musical term 'color' as used in pre-CMN notation.
         */
        MeiAttribute* getMensurColor();
        void setMensurColor(std::string _mensurcolor);
        bool hasMensurColor();
        void removeMensurColor();
        /** \brief Determines if a dot is to be added to the base symbol.
         */
        MeiAttribute* getMensurDot();
        void setMensurDot(std::string _mensurdot);
        bool hasMensurDot();
        void removeMensurDot();
        /** \brief Indicates whether the base symbol is written vertically or horizontally.
         */
        MeiAttribute* getMensurForm();
        void setMensurForm(std::string _mensurform);
        bool hasMensurForm();
        void removeMensurForm();
        /** \brief Holds the staff location of the mensuration sign.
         */
        MeiAttribute* getMensurLoc();
        void setMensurLoc(std::string _mensurloc);
        bool hasMensurLoc();
        void removeMensurLoc();
        /** \brief Describes the rotation or reflection of the base symbol.
         */
        MeiAttribute* getMensurOrient();
        void setMensurOrient(std::string _mensurorient);
        bool hasMensurOrient();
        void removeMensurOrient();
        /** \brief The base symbol in the mensuration sign/time signature of mensural notation.
         */
        MeiAttribute* getMensurSign();
        void setMensurSign(std::string _mensursign);
        bool hasMensurSign();
        void removeMensurSign();
        /** \brief Describes the relative size of the mensuration sign.
         */
        MeiAttribute* getMensurSize();
        void setMensurSize(std::string _mensursize);
        bool hasMensurSize();
        void removeMensurSize();
        /** \brief Indicates the number lines added to the mensuration sign.
         * 
         *  For example, one slash is added for what we now call 'alla breve'.
         */
        MeiAttribute* getMensurSlash();
        void setMensurSlash(std::string _mensurslash);
        bool hasMensurSlash();
        void removeMensurSlash();

/* include <mensur.slashmixin> */

    private:
        MeiElement *b;
};

class MeterSigVisMixIn {
    public:
        explicit MeterSigVisMixIn(MeiElement *b);
        virtual ~MeterSigVisMixIn();
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

class MeterSigDefaultVisMixIn {
    public:
        explicit MeterSigDefaultVisMixIn(MeiElement *b);
        virtual ~MeterSigDefaultVisMixIn();
        /** \brief Contains an indication of how the meter signature should be rendered.
         */
        MeiAttribute* getMeterForm();
        void setMeterForm(std::string _meterform);
        bool hasMeterForm();
        void removeMeterForm();
        /** \brief Determines whether the old meter signature should be displayed when the meter
         *  signature changes.
         */
        MeiAttribute* getMeterShowchange();
        void setMeterShowchange(std::string _metershowchange);
        bool hasMeterShowchange();
        void removeMeterShowchange();

/* include <meter.showchangemixin> */

    private:
        MeiElement *b;
};

class MultiRestVisMixIn {
    public:
        explicit MultiRestVisMixIn(MeiElement *b);
        virtual ~MultiRestVisMixIn();
        /** \brief The block attribute controls whether the multimeasure rest should be rendered as
         *  a block rest or as church rests ("Kirchenpausen"), that are combinations of
         *  longa, breve and semibreve rests.
         */
        MeiAttribute* getBlock();
        void setBlock(std::string _block);
        bool hasBlock();
        void removeBlock();

/* include <blockmixin> */

    private:
        MeiElement *b;
};

class PbVisMixIn {
    public:
        explicit PbVisMixIn(MeiElement *b);
        virtual ~PbVisMixIn();
        /** \brief States the side of a leaf (as in a manuscript) on which the content following
         *  the pb element occurs.
         */
        MeiAttribute* getFolium();
        void setFolium(std::string _folium);
        bool hasFolium();
        void removeFolium();

/* include <foliummixin> */

    private:
        MeiElement *b;
};

class PedalVisMixIn {
    public:
        explicit PedalVisMixIn(MeiElement *b);
        virtual ~PedalVisMixIn();
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

class QuilismaVisMixIn {
    public:
        explicit QuilismaVisMixIn(MeiElement *b);
        virtual ~QuilismaVisMixIn();
        /** \brief Number of "crests" of a wavy line.
         */
        MeiAttribute* getWaves();
        void setWaves(std::string _waves);
        bool hasWaves();
        void removeWaves();

/* include <wavesmixin> */

    private:
        MeiElement *b;
};

class SbVisMixIn {
    public:
        explicit SbVisMixIn(MeiElement *b);
        virtual ~SbVisMixIn();
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

class ScoreDefVisMixIn {
    public:
        explicit ScoreDefVisMixIn(MeiElement *b);
        virtual ~ScoreDefVisMixIn();
        /** \brief Defines the height of a "virtual unit" (vu) in terms of real-world units.
         * 
         *  A single vu is half the distance between adjacent staff lines where the
         *  interline space is measured from the middle of a staff line.
         */
        MeiAttribute* getVuHeight();
        void setVuHeight(std::string _vuheight);
        bool hasVuHeight();
        void removeVuHeight();

/* include <vu.heightmixin> */

    private:
        MeiElement *b;
};

class SectionVisMixIn {
    public:
        explicit SectionVisMixIn(MeiElement *b);
        virtual ~SectionVisMixIn();
        /** \brief Indicates that staves begin again with this section.
         */
        MeiAttribute* getRestart();
        void setRestart(std::string _restart);
        bool hasRestart();
        void removeRestart();

/* include <restartmixin> */

    private:
        MeiElement *b;
};

class SignifLetVisMixIn {
    public:
        explicit SignifLetVisMixIn(MeiElement *b);
        virtual ~SignifLetVisMixIn();
        /** \brief Records the placement of the beam relative to the events it affects.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

/* include <placemixin> */

    private:
        MeiElement *b;
};

class SpaceVisMixIn {
    public:
        explicit SpaceVisMixIn(MeiElement *b);
        virtual ~SpaceVisMixIn();
        /** \brief Indicates whether a space is 'compressible', i.e., if it may be removed at the
         *  discretion of processing software.
         */
        MeiAttribute* getCompressable();
        void setCompressable(std::string _compressable);
        bool hasCompressable();
        void removeCompressable();

/* include <compressablemixin> */

    private:
        MeiElement *b;
};

class StaffDefVisMixIn {
    public:
        explicit StaffDefVisMixIn(MeiElement *b);
        virtual ~StaffDefVisMixIn();
        /** \brief Determines whether to display guitar chord grids.
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();
        /** \brief Indicates the number of layers and their stem directions.
         */
        MeiAttribute* getLayerscheme();
        void setLayerscheme(std::string _layerscheme);
        bool hasLayerscheme();
        void removeLayerscheme();
        /** \brief Captures the colors of the staff lines.
         */
        MeiAttribute* getLinesColor();
        void setLinesColor(std::string _linescolor);
        bool hasLinesColor();
        void removeLinesColor();
        /** \brief Records whether all staff lines are visible.
         */
        MeiAttribute* getLinesVisible();
        void setLinesVisible(std::string _linesvisible);
        bool hasLinesVisible();
        void removeLinesVisible();
        /** \brief Records the absolute distance (as opposed to the relative distances recorded in
         *  scoreDef elements) between this staff and the preceding one in the same system.
         * 
         *  This value is meaningless for the first staff in a system since the
         *  spacing.system attribute indicates the spacing between systems.
         */
        MeiAttribute* getSpacing();
        void setSpacing(std::string _spacing);
        bool hasSpacing();
        void removeSpacing();

/* include <spacingmixin> */

    private:
        MeiElement *b;
};

class StaffGrpVisMixIn {
    public:
        explicit StaffGrpVisMixIn(MeiElement *b);
        virtual ~StaffGrpVisMixIn();
        /** \brief Indicates whether bar lines go across the space between staves (true) or are
         *  only drawn across the lines of each staff (false).
         */
        MeiAttribute* getBarThru();
        void setBarThru(std::string _barthru);
        bool hasBarThru();
        void removeBarThru();

/* include <bar.thrumixin> */

    private:
        MeiElement *b;
};

class TupletVisMixIn {
    public:
        explicit TupletVisMixIn(MeiElement *b);
        virtual ~TupletVisMixIn();
        /** \brief Used to state where a tuplet bracket will be placed in relation to the note
         *  heads.
         */
        MeiAttribute* getBracketPlace();
        void setBracketPlace(std::string _bracketplace);
        bool hasBracketPlace();
        void removeBracketPlace();
        /** \brief States whether a bracket should be rendered with a tuplet.
         */
        MeiAttribute* getBracketVisible();
        void setBracketVisible(std::string _bracketvisible);
        bool hasBracketVisible();
        void removeBracketVisible();
        /** \brief Determines if the tuplet duration is visible.
         */
        MeiAttribute* getDurVisible();
        void setDurVisible(std::string _durvisible);
        bool hasDurVisible();
        void removeDurVisible();
        /** \brief Controls how the num:numbase ratio is to be displayed.
         */
        MeiAttribute* getNumFormat();
        void setNumFormat(std::string _numformat);
        bool hasNumFormat();
        void removeNumFormat();

/* include <num.formatmixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // VISUALMIXIN_H_
