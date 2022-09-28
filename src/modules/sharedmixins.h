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

#ifndef SHAREDMIXIN_H_
#define SHAREDMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AccidLogMixIn {
    public:
        explicit AccidLogMixIn(MeiElement *b);
        virtual ~AccidLogMixIn();
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

class AccidentalMixIn {
    public:
        explicit AccidentalMixIn(MeiElement *b);
        virtual ~AccidentalMixIn();
        /** \brief Captures a written accidental.
         */
        MeiAttribute* getAccid();
        void setAccid(std::string _accid);
        bool hasAccid();
        void removeAccid();

/* include <accidmixin> */

    private:
        MeiElement *b;
};

class ArticulationMixIn {
    public:
        explicit ArticulationMixIn(MeiElement *b);
        virtual ~ArticulationMixIn();
        /** \brief Encodes the written articulation(s).
         * 
         *  Articulations are normally encoded in order from the note head outward; that is,
         *  away from the stem. See additional notes at att.vis.note. Only articulations
         *  should be encoded in the artic attribute; for example, fingerings should be
         *  encoded using the fing element.
         */
        MeiAttribute* getArtic();
        void setArtic(std::string _artic);
        bool hasArtic();
        void removeArtic();

/* include <articmixin> */

    private:
        MeiElement *b;
};

class AttaccaLogMixIn {
    public:
        explicit AttaccaLogMixIn(MeiElement *b);
        virtual ~AttaccaLogMixIn();
        /** \brief Indicates the next section or movement to be performed.
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <targetmixin> */

    private:
        MeiElement *b;
};

class AudienceMixIn {
    public:
        explicit AudienceMixIn(MeiElement *b);
        virtual ~AudienceMixIn();
        /** \brief The intended audience.
         */
        MeiAttribute* getAudience();
        void setAudience(std::string _audience);
        bool hasAudience();
        void removeAudience();

/* include <audiencemixin> */

    private:
        MeiElement *b;
};

class AugmentDotsMixIn {
    public:
        explicit AugmentDotsMixIn(MeiElement *b);
        virtual ~AugmentDotsMixIn();
        /** \brief Records the number of augmentation dots required by a written dotted duration.
         */
        MeiAttribute* getDots();
        void setDots(std::string _dots);
        bool hasDots();
        void removeDots();

/* include <dotsmixin> */

    private:
        MeiElement *b;
};

class AuthorizedMixIn {
    public:
        explicit AuthorizedMixIn(MeiElement *b);
        virtual ~AuthorizedMixIn();
        /** \brief A name or label associated with a controlled vocabulary or other authoritative
         *  source for this element or its content.
         */
        MeiAttribute* getAuth();
        void setAuth(std::string _auth);
        bool hasAuth();
        void removeAuth();
        /** \brief A web-accessible location of the controlled vocabulary or other authoritative
         *  source of identification or definition for this element or its content.
         * 
         *  This attribute may contain a complete URI or a partial URI which is completed by
         *  the value of the codedval attribute.
         */
        MeiAttribute* getAuthUri();
        void setAuthUri(std::string _authuri);
        bool hasAuthUri();
        void removeAuthUri();

/* include <auth.urimixin> */

    private:
        MeiElement *b;
};

class BarLineLogMixIn {
    public:
        explicit BarLineLogMixIn(MeiElement *b);
        virtual ~BarLineLogMixIn();
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

class BarringMixIn {
    public:
        explicit BarringMixIn(MeiElement *b);
        virtual ~BarringMixIn();
        /** \brief States the length of barlines in virtual units.
         * 
         *  The value must be greater than 0 and is typically equal to 2 times (the number
         *  of staff lines - 1); e.g., a value of 8 for a 5-line staff.
         */
        MeiAttribute* getBarLen();
        void setBarLen(std::string _barlen);
        bool hasBarLen();
        void removeBarLen();
        /** \brief Records the method of barring.
         */
        MeiAttribute* getBarMethod();
        void setBarMethod(std::string _barmethod);
        bool hasBarMethod();
        void removeBarMethod();
        /** \brief Denotes the staff location of bar lines, if the length is non-standard; that is,
         *  not equal to 2 times (the number of staff lines - 1).
         */
        MeiAttribute* getBarPlace();
        void setBarPlace(std::string _barplace);
        bool hasBarPlace();
        void removeBarPlace();

/* include <bar.placemixin> */

    private:
        MeiElement *b;
};

class BasicMixIn {
    public:
        explicit BasicMixIn(MeiElement *b);
        virtual ~BasicMixIn();
        /** \brief 
         */
        MeiAttribute* getBase();
        void setBase(std::string _base);
        bool hasBase();
        void removeBase();

/* include <basemixin> */

    private:
        MeiElement *b;
};

class BiblMixIn {
    public:
        explicit BiblMixIn(MeiElement *b);
        virtual ~BiblMixIn();
        /** \brief Contains a reference to a field or element in another descriptive encoding
         *  system to which this MEI element is comparable.
         */
        MeiAttribute* getAnalog();
        void setAnalog(std::string _analog);
        bool hasAnalog();
        void removeAnalog();

/* include <analogmixin> */

    private:
        MeiElement *b;
};

class CalendaredMixIn {
    public:
        explicit CalendaredMixIn(MeiElement *b);
        virtual ~CalendaredMixIn();
        /** \brief Indicates the calendar system to which a date belongs, for example, Gregorian,
         *  Julian, Roman, Mosaic, Revolutionary, Islamic, etc.
         */
        MeiAttribute* getCalendar();
        void setCalendar(std::string _calendar);
        bool hasCalendar();
        void removeCalendar();

/* include <calendarmixin> */

    private:
        MeiElement *b;
};

class CanonicalMixIn {
    public:
        explicit CanonicalMixIn(MeiElement *b);
        virtual ~CanonicalMixIn();
        /** \brief A value that represents or identifies other data.
         * 
         *  Often, it is a primary key in the database or a unique value in the coded list
         *  identified by the auth or auth.uri attributes.
         */
        MeiAttribute* getCodedval();
        void setCodedval(std::string _codedval);
        bool hasCodedval();
        void removeCodedval();

/* include <codedvalmixin> */

    private:
        MeiElement *b;
};

class ClassedMixIn {
    public:
        explicit ClassedMixIn(MeiElement *b);
        virtual ~ClassedMixIn();
        /** \brief Contains one or more URIs which denote classification terms that apply to the
         *  entity bearing this attribute.
         */
        MeiAttribute* getClass();
        void setClass(std::string _class);
        bool hasClass();
        void removeClass();

/* include <classmixin> */

    private:
        MeiElement *b;
};

class ClefLogMixIn {
    public:
        explicit ClefLogMixIn(MeiElement *b);
        virtual ~ClefLogMixIn();
        /** \brief Records the function of the clef.
         * 
         *  A "cautionary" clef does not change the following pitches.
         */
        MeiAttribute* getCautionary();
        void setCautionary(std::string _cautionary);
        bool hasCautionary();
        void removeCautionary();

/* include <cautionarymixin> */

    private:
        MeiElement *b;
};

class ClefShapeMixIn {
    public:
        explicit ClefShapeMixIn(MeiElement *b);
        virtual ~ClefShapeMixIn();
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

class CleffingLogMixIn {
    public:
        explicit CleffingLogMixIn(MeiElement *b);
        virtual ~CleffingLogMixIn();
        /** \brief Encodes a value for the clef symbol.
         */
        MeiAttribute* getClefShape();
        void setClefShape(std::string _clefshape);
        bool hasClefShape();
        void removeClefShape();
        /** \brief Contains a default value for the position of the clef.
         * 
         *  The value must be in the range between 1 and the number of lines on the staff.
         *  The numbering of lines starts with the lowest line of the staff.
         */
        MeiAttribute* getClefLine();
        void setClefLine(std::string _clefline);
        bool hasClefLine();
        void removeClefLine();
        /** \brief Records the amount of octave displacement to be applied to the clef.
         */
        MeiAttribute* getClefDis();
        void setClefDis(std::string _clefdis);
        bool hasClefDis();
        void removeClefDis();
        /** \brief Records the direction of octave displacement to be applied to the clef.
         */
        MeiAttribute* getClefDisPlace();
        void setClefDisPlace(std::string _clefdisplace);
        bool hasClefDisPlace();
        void removeClefDisPlace();

/* include <clef.dis.placemixin> */

    private:
        MeiElement *b;
};

class ColorMixIn {
    public:
        explicit ColorMixIn(MeiElement *b);
        virtual ~ColorMixIn();
        /** \brief Used to indicate visual appearance.
         * 
         *  Do not confuse this with the musical term 'color' as used in pre-CMN notation.
         */
        MeiAttribute* getColor();
        void setColor(std::string _color);
        bool hasColor();
        void removeColor();

/* include <colormixin> */

    private:
        MeiElement *b;
};

class ColorationMixIn {
    public:
        explicit ColorationMixIn(MeiElement *b);
        virtual ~ColorationMixIn();
        /** \brief Indicates this feature is 'colored'; that is, it is a participant in a change in
         *  rhythmic values.
         * 
         *  In mensural notation, coloration is indicated by colored notes (red, black,
         *  etc.) where void notes would otherwise occur. In CMN, coloration is indicated by
         *  an inverse color; that is, the note head is void when it would otherwise be
         *  filled and vice versa.
         */
        MeiAttribute* getColored();
        void setColored(std::string _colored);
        bool hasColored();
        void removeColored();

/* include <coloredmixin> */

    private:
        MeiElement *b;
};

class CoordinatedMixIn {
    public:
        explicit CoordinatedMixIn(MeiElement *b);
        virtual ~CoordinatedMixIn();
        /** \brief Indicates the upper-left corner x coordinate.
         */
        MeiAttribute* getUlx();
        void setUlx(std::string _ulx);
        bool hasUlx();
        void removeUlx();
        /** \brief Indicates the upper-left corner y coordinate.
         */
        MeiAttribute* getUly();
        void setUly(std::string _uly);
        bool hasUly();
        void removeUly();
        /** \brief Indicates the lower-right corner x coordinate.
         */
        MeiAttribute* getLrx();
        void setLrx(std::string _lrx);
        bool hasLrx();
        void removeLrx();
        /** \brief Indicates the lower-left corner x coordinate.
         */
        MeiAttribute* getLry();
        void setLry(std::string _lry);
        bool hasLry();
        void removeLry();
        /** \brief Indicates the amount by which the contents of this element have been rotated
         *  clockwise or, if applicable, how the orientation of the element self should be
         *  interpreted, with respect to the normal orientation of the parent surface.
         * 
         *  The orientation is expressed in arc degrees.
         */
        MeiAttribute* getRotate();
        void setRotate(std::string _rotate);
        bool hasRotate();
        void removeRotate();

/* include <rotatemixin> */

    private:
        MeiElement *b;
};

class CueMixIn {
    public:
        explicit CueMixIn(MeiElement *b);
        virtual ~CueMixIn();
        /** \brief 
         */
        MeiAttribute* getCue();
        void setCue(std::string _cue);
        bool hasCue();
        void removeCue();

/* include <cuemixin> */

    private:
        MeiElement *b;
};

class CurvatureMixIn {
    public:
        explicit CurvatureMixIn(MeiElement *b);
        virtual ~CurvatureMixIn();
        /** \brief Records the placement of Bezier control points as a series of pairs of space-
         *  separated values; e.g., 19 45 -32 118.
         */
        MeiAttribute* getBezier();
        void setBezier(std::string _bezier);
        bool hasBezier();
        void removeBezier();
        /** \brief Describes a curve as one or more pairs of values with respect to an imaginary
         *  line connecting the starting and ending points of the curve.
         * 
         *  The first value captures a distance to the left (positive value) or right
         *  (negative value) of the line, expressed in virtual units. The second value of
         *  each pair represents a point along the line, expressed as a percentage of the
         *  line’s length. N.B. An MEI virtual unit (vu) is half the distance between
         *  adjacent staff lines where the interline space is measured from the middle of a
         *  staff line.
         */
        MeiAttribute* getBulge();
        void setBulge(std::string _bulge);
        bool hasBulge();
        void removeBulge();
        /** \brief Describes a curve with a generic term indicating the direction of curvature.
         */
        MeiAttribute* getCurvedir();
        void setCurvedir(std::string _curvedir);
        bool hasCurvedir();
        void removeCurvedir();

/* include <curvedirmixin> */

    private:
        MeiElement *b;
};

class CurveRendMixIn {
    public:
        explicit CurveRendMixIn(MeiElement *b);
        virtual ~CurveRendMixIn();
        /** \brief Describes the line style of a curve.
         */
        MeiAttribute* getLform();
        void setLform(std::string _lform);
        bool hasLform();
        void removeLform();
        /** \brief Width of a curved line.
         */
        MeiAttribute* getLwidth();
        void setLwidth(std::string _lwidth);
        bool hasLwidth();
        void removeLwidth();

/* include <lwidthmixin> */

    private:
        MeiElement *b;
};

class CustosLogMixIn {
    public:
        explicit CustosLogMixIn(MeiElement *b);
        virtual ~CustosLogMixIn();
        /** \brief Indicates the next section or movement to be performed.
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <targetmixin> */

    private:
        MeiElement *b;
};

class DataPointingMixIn {
    public:
        explicit DataPointingMixIn(MeiElement *b);
        virtual ~DataPointingMixIn();
        /** \brief Used to link metadata elements to one or more data-containing elements.
         */
        MeiAttribute* getData();
        void setData(std::string _data);
        bool hasData();
        void removeData();

/* include <datamixin> */

    private:
        MeiElement *b;
};

class DatableMixIn {
    public:
        explicit DatableMixIn(MeiElement *b);
        virtual ~DatableMixIn();
        /** \brief Contains the end point of a date range in standard ISO form.
         */
        MeiAttribute* getEnddate();
        void setEnddate(std::string _enddate);
        bool hasEnddate();
        void removeEnddate();
        /** \brief Provides the value of a textual date in standard ISO form.
         */
        MeiAttribute* getIsodate();
        void setIsodate(std::string _isodate);
        bool hasIsodate();
        void removeIsodate();
        /** \brief Contains an upper boundary for an uncertain date in standard ISO form.
         */
        MeiAttribute* getNotafter();
        void setNotafter(std::string _notafter);
        bool hasNotafter();
        void removeNotafter();
        /** \brief Contains a lower boundary, in standard ISO form, for an uncertain date.
         */
        MeiAttribute* getNotbefore();
        void setNotbefore(std::string _notbefore);
        bool hasNotbefore();
        void removeNotbefore();
        /** \brief Contains the starting point of a date range in standard ISO form.
         */
        MeiAttribute* getStartdate();
        void setStartdate(std::string _startdate);
        bool hasStartdate();
        void removeStartdate();

/* include <startdatemixin> */

    private:
        MeiElement *b;
};

class DistancesMixIn {
    public:
        explicit DistancesMixIn(MeiElement *b);
        virtual ~DistancesMixIn();
        /** \brief Records the default distance from the staff for dynamic marks.
         */
        MeiAttribute* getDynamDist();
        void setDynamDist(std::string _dynamdist);
        bool hasDynamDist();
        void removeDynamDist();
        /** \brief Records the default distance from the staff of harmonic indications, such as
         *  guitar chord grids or functional labels.
         */
        MeiAttribute* getHarmDist();
        void setHarmDist(std::string _harmdist);
        bool hasHarmDist();
        void removeHarmDist();
        /** \brief Determines how far from the staff to render text elements.
         */
        MeiAttribute* getTextDist();
        void setTextDist(std::string _textdist);
        bool hasTextDist();
        void removeTextDist();

/* include <text.distmixin> */

    private:
        MeiElement *b;
};

class DotLogMixIn {
    public:
        explicit DotLogMixIn(MeiElement *b);
        virtual ~DotLogMixIn();
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

class DurationAdditiveMixIn {
    public:
        explicit DurationAdditiveMixIn(MeiElement *b);
        virtual ~DurationAdditiveMixIn();
        /** \brief When a duration cannot be represented as a single power-of-two value, multiple
         *  space-separated values that add up to the total duration may be used.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

/* include <durmixin> */

    private:
        MeiElement *b;
};

class DurationDefaultMixIn {
    public:
        explicit DurationDefaultMixIn(MeiElement *b);
        virtual ~DurationDefaultMixIn();
        /** \brief Contains a default duration in those situations when the first note, rest,
         *  chord, etc.
         * 
         *  in a measure does not have a duration specified.
         */
        MeiAttribute* getDurDefault();
        void setDurDefault(std::string _durdefault);
        bool hasDurDefault();
        void removeDurDefault();
        /** \brief Along with numbase.default, describes the default duration as a ratio.
         * 
         *  num.default is the first value in the ratio.
         */
        MeiAttribute* getNumDefault();
        void setNumDefault(std::string _numdefault);
        bool hasNumDefault();
        void removeNumDefault();
        /** \brief Along with num.default, describes the default duration as a ratio.
         * 
         *  numbase.default is the second value in the ratio.
         */
        MeiAttribute* getNumbaseDefault();
        void setNumbaseDefault(std::string _numbasedefault);
        bool hasNumbaseDefault();
        void removeNumbaseDefault();

/* include <numbase.defaultmixin> */

    private:
        MeiElement *b;
};

class DurationLogicalMixIn {
    public:
        explicit DurationLogicalMixIn(MeiElement *b);
        virtual ~DurationLogicalMixIn();
        /** \brief When a duration cannot be represented as a single power-of-two value, multiple
         *  space-separated values that add up to the total duration may be used.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

/* include <durmixin> */

    private:
        MeiElement *b;
};

class DurationRatioMixIn {
    public:
        explicit DurationRatioMixIn(MeiElement *b);
        virtual ~DurationRatioMixIn();
        /** \brief Records a number or count accompanying a notational feature.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();
        /** \brief Along with num, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNumbase();
        void setNumbase(std::string _numbase);
        bool hasNumbase();
        void removeNumbase();

/* include <numbasemixin> */

    private:
        MeiElement *b;
};

class EnclosingCharsMixIn {
    public:
        explicit EnclosingCharsMixIn(MeiElement *b);
        virtual ~EnclosingCharsMixIn();
        /** \brief Records the characters often used to mark accidentals, articulations, and
         *  sometimes notes as having a cautionary or editorial function.
         * 
         *  For an example of cautionary accidentals enclosed in parentheses, see Read, p.
         *  131, ex. 9-14.
         */
        MeiAttribute* getEnclose();
        void setEnclose(std::string _enclose);
        bool hasEnclose();
        void removeEnclose();

/* include <enclosemixin> */

    private:
        MeiElement *b;
};

class EndingsMixIn {
    public:
        explicit EndingsMixIn(MeiElement *b);
        virtual ~EndingsMixIn();
        /** \brief Describes where ending marks should be displayed.
         */
        MeiAttribute* getEndingRend();
        void setEndingRend(std::string _endingrend);
        bool hasEndingRend();
        void removeEndingRend();

/* include <ending.rendmixin> */

    private:
        MeiElement *b;
};

class EvidenceMixIn {
    public:
        explicit EvidenceMixIn(MeiElement *b);
        virtual ~EvidenceMixIn();
        /** \brief Signifies the degree of certainty or precision associated with a feature.
         */
        MeiAttribute* getCert();
        void setCert(std::string _cert);
        bool hasCert();
        void removeCert();
        /** \brief Indicates the nature of the evidence supporting the reliability or accuracy of
         *  the intervention or interpretation.
         */
        MeiAttribute* getEvidence();
        void setEvidence(std::string _evidence);
        bool hasEvidence();
        void removeEvidence();

/* include <evidencemixin> */

    private:
        MeiElement *b;
};

class ExtenderMixIn {
    public:
        explicit ExtenderMixIn(MeiElement *b);
        virtual ~ExtenderMixIn();
        /** \brief Indicates the presence of an extension symbol, typically a line.
         */
        MeiAttribute* getExtender();
        void setExtender(std::string _extender);
        bool hasExtender();
        void removeExtender();

/* include <extendermixin> */

    private:
        MeiElement *b;
};

class ExtentMixIn {
    public:
        explicit ExtentMixIn(MeiElement *b);
        virtual ~ExtentMixIn();
        /** \brief Captures a measurement, count, or description.
         * 
         *  When extent contains a numeric value, use the unit attribute to indicate the
         *  measurement unit.
         */
        MeiAttribute* getExtent();
        void setExtent(std::string _extent);
        bool hasExtent();
        void removeExtent();

/* include <extentmixin> */

    private:
        MeiElement *b;
};

class FermataPresentMixIn {
    public:
        explicit FermataPresentMixIn(MeiElement *b);
        virtual ~FermataPresentMixIn();
        /** \brief Indicates the attachment of a fermata to this element.
         * 
         *  If visual information about the fermata needs to be recorded, then a fermata
         *  element should be employed instead.
         */
        MeiAttribute* getFermata();
        void setFermata(std::string _fermata);
        bool hasFermata();
        void removeFermata();

/* include <fermatamixin> */

    private:
        MeiElement *b;
};

class FilingMixIn {
    public:
        explicit FilingMixIn(MeiElement *b);
        virtual ~FilingMixIn();
        /** \brief Holds the number of initial characters (such as those constituting an article or
         *  preposition) that should not be used for sorting a title or name.
         */
        MeiAttribute* getNonfiling();
        void setNonfiling(std::string _nonfiling);
        bool hasNonfiling();
        void removeNonfiling();

/* include <nonfilingmixin> */

    private:
        MeiElement *b;
};

class GrpSymLogMixIn {
    public:
        explicit GrpSymLogMixIn(MeiElement *b);
        virtual ~GrpSymLogMixIn();
        /** \brief Indicates the nesting level of staff grouping symbols.
         */
        MeiAttribute* getLevel();
        void setLevel(std::string _level);
        bool hasLevel();
        void removeLevel();

/* include <levelmixin> */

    private:
        MeiElement *b;
};

class HandIdentMixIn {
    public:
        explicit HandIdentMixIn(MeiElement *b);
        virtual ~HandIdentMixIn();
        /** \brief Signifies the hand responsible for an action.
         * 
         *  The value must be the ID of a hand element declared in the header.
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();

/* include <handmixin> */

    private:
        MeiElement *b;
};

class HeightMixIn {
    public:
        explicit HeightMixIn(MeiElement *b);
        virtual ~HeightMixIn();
        /** \brief Measurement of the vertical dimension of an entity.
         */
        MeiAttribute* getHeight();
        void setHeight(std::string _height);
        bool hasHeight();
        void removeHeight();

/* include <heightmixin> */

    private:
        MeiElement *b;
};

class HorizontalAlignMixIn {
    public:
        explicit HorizontalAlignMixIn(MeiElement *b);
        virtual ~HorizontalAlignMixIn();
        /** \brief Records horizontal alignment.
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

/* include <halignmixin> */

    private:
        MeiElement *b;
};

class InternetMediaMixIn {
    public:
        explicit InternetMediaMixIn(MeiElement *b);
        virtual ~InternetMediaMixIn();
        /** \brief Specifies the applicable MIME (multimedia internet mail extension) type.
         * 
         *  The value should be a valid MIME media type defined by the Internet Engineering
         *  Task Force in RFC 2046.
         */
        MeiAttribute* getMimetype();
        void setMimetype(std::string _mimetype);
        bool hasMimetype();
        void removeMimetype();

/* include <mimetypemixin> */

    private:
        MeiElement *b;
};

class JoinedMixIn {
    public:
        explicit JoinedMixIn(MeiElement *b);
        virtual ~JoinedMixIn();
        /** \brief Used for linking visually separate entities that form a single logical entity,
         *  for example, multiple slurs broken across a system break that form a single
         *  musical phrase.
         * 
         *  Also used to indicate a measure which metrically completes the current one.
         *  Record the identifiers of the separately encoded components, excluding the one
         *  carrying the attribute.
         */
        MeiAttribute* getJoin();
        void setJoin(std::string _join);
        bool hasJoin();
        void removeJoin();

/* include <joinmixin> */

    private:
        MeiElement *b;
};

class KeySigLogMixIn {
    public:
        explicit KeySigLogMixIn(MeiElement *b);
        virtual ~KeySigLogMixIn();
        /** \brief Written key signature.
         */
        MeiAttribute* getSig();
        void setSig(std::string _sig);
        bool hasSig();
        void removeSig();

/* include <sigmixin> */

    private:
        MeiElement *b;
};

class KeySigDefaultLogMixIn {
    public:
        explicit KeySigDefaultLogMixIn(MeiElement *b);
        virtual ~KeySigDefaultLogMixIn();
        /** \brief Written key signature.
         */
        MeiAttribute* getKeySig();
        void setKeySig(std::string _keysig);
        bool hasKeySig();
        void removeKeySig();

/* include <key.sigmixin> */

    private:
        MeiElement *b;
};

class LabelledMixIn {
    public:
        explicit LabelledMixIn(MeiElement *b);
        virtual ~LabelledMixIn();
        /** \brief Captures text to be used to generate a label for the element to which it’s
         *  attached, a "tool tip" or prefatory text, for example.
         * 
         *  Should not be used to record document content.
         */
        MeiAttribute* getLabel();
        void setLabel(std::string _label);
        bool hasLabel();
        void removeLabel();

/* include <labelmixin> */

    private:
        MeiElement *b;
};

class LangMixIn {
    public:
        explicit LangMixIn(MeiElement *b);
        virtual ~LangMixIn();
        /** \brief 
         */
        MeiAttribute* getLang();
        void setLang(std::string _lang);
        bool hasLang();
        void removeLang();
        /** \brief Specifies the transliteration technique used.
         */
        MeiAttribute* getTranslit();
        void setTranslit(std::string _translit);
        bool hasTranslit();
        void removeTranslit();

/* include <translitmixin> */

    private:
        MeiElement *b;
};

class LayerLogMixIn {
    public:
        explicit LayerLogMixIn(MeiElement *b);
        virtual ~LayerLogMixIn();
        /** \brief Provides a mechanism for linking the layer to a layerDef element.
         */
        MeiAttribute* getDef();
        void setDef(std::string _def);
        bool hasDef();
        void removeDef();

/* include <defmixin> */

    private:
        MeiElement *b;
};

class LayerIdentMixIn {
    public:
        explicit LayerIdentMixIn(MeiElement *b);
        virtual ~LayerIdentMixIn();
        /** \brief Identifies the layer to which a feature applies.
         */
        MeiAttribute* getLayer();
        void setLayer(std::string _layer);
        bool hasLayer();
        void removeLayer();

/* include <layermixin> */

    private:
        MeiElement *b;
};

class LineLocMixIn {
    public:
        explicit LineLocMixIn(MeiElement *b);
        virtual ~LineLocMixIn();
        /** \brief Indicates the line upon which a feature stands.
         * 
         *  The value must be in the range between 1 and the number of lines on the staff.
         *  The numbering of lines starts with the lowest line of the staff.
         */
        MeiAttribute* getLine();
        void setLine(std::string _line);
        bool hasLine();
        void removeLine();

/* include <linemixin> */

    private:
        MeiElement *b;
};

class LineRendMixIn {
    public:
        explicit LineRendMixIn(MeiElement *b);
        virtual ~LineRendMixIn();
        /** \brief Symbol rendered at end of line.
         */
        MeiAttribute* getLendsym();
        void setLendsym(std::string _lendsym);
        bool hasLendsym();
        void removeLendsym();
        /** \brief Holds the relative size of the line-end symbol.
         */
        MeiAttribute* getLendsymSize();
        void setLendsymSize(std::string _lendsymsize);
        bool hasLendsymSize();
        void removeLendsymSize();
        /** \brief Symbol rendered at start of line.
         */
        MeiAttribute* getLstartsym();
        void setLstartsym(std::string _lstartsym);
        bool hasLstartsym();
        void removeLstartsym();
        /** \brief Holds the relative size of the line-start symbol.
         */
        MeiAttribute* getLstartsymSize();
        void setLstartsymSize(std::string _lstartsymsize);
        bool hasLstartsymSize();
        void removeLstartsymSize();

/* include <lstartsym.sizemixin> */

    private:
        MeiElement *b;
};

class LineRendBaseMixIn {
    public:
        explicit LineRendBaseMixIn(MeiElement *b);
        virtual ~LineRendBaseMixIn();
        /** \brief Describes the line style of a curve.
         */
        MeiAttribute* getLform();
        void setLform(std::string _lform);
        bool hasLform();
        void removeLform();
        /** \brief Describes the number of segments into which a dashed or dotted line may be
         *  divided, or the number of "peaks" of a wavy line; a pair of space-separated
         *  values (minimum and maximum, respectively) provides a range between which a
         *  rendering system-supplied value may fall, while a single value indicates a fixed
         *  amount of space; that is, the minimum and maximum values are equal.
         */
        MeiAttribute* getLsegs();
        void setLsegs(std::string _lsegs);
        bool hasLsegs();
        void removeLsegs();
        /** \brief Width of a curved line.
         */
        MeiAttribute* getLwidth();
        void setLwidth(std::string _lwidth);
        bool hasLwidth();
        void removeLwidth();

/* include <lwidthmixin> */

    private:
        MeiElement *b;
};

class LinkingMixIn {
    public:
        explicit LinkingMixIn(MeiElement *b);
        virtual ~LinkingMixIn();
        /** \brief Points to an element of which the current element is a copy.
         */
        MeiAttribute* getCopyof();
        void setCopyof(std::string _copyof);
        bool hasCopyof();
        void removeCopyof();
        /** \brief Used to point to other elements that correspond to this one in a generic
         *  fashion.
         */
        MeiAttribute* getCorresp();
        void setCorresp(std::string _corresp);
        bool hasCorresp();
        void removeCorresp();
        /** \brief points to one or more events in a user-defined collection that are known to be
         *  predecessors of the current element.
         */
        MeiAttribute* getFollows();
        void setFollows(std::string _follows);
        bool hasFollows();
        void removeFollows();
        /** \brief Used to point to the next event(s) in a user-defined collection.
         */
        MeiAttribute* getNext();
        void setNext(std::string _next);
        bool hasNext();
        void removeNext();
        /** \brief Points to one or more events in a user-defined collection that are known to be
         *  successors of the current element.
         */
        MeiAttribute* getPrecedes();
        void setPrecedes(std::string _precedes);
        bool hasPrecedes();
        void removePrecedes();
        /** \brief Points to the previous event(s) in a user-defined collection.
         */
        MeiAttribute* getPrev();
        void setPrev(std::string _prev);
        bool hasPrev();
        void removePrev();
        /** \brief Points to an element that is the same as the current element but is not a
         *  literal copy of the current element.
         */
        MeiAttribute* getSameas();
        void setSameas(std::string _sameas);
        bool hasSameas();
        void removeSameas();
        /** \brief Points to elements that are synchronous with the current element.
         */
        MeiAttribute* getSynch();
        void setSynch(std::string _synch);
        bool hasSynch();
        void removeSynch();

/* include <synchmixin> */

    private:
        MeiElement *b;
};

class LyricStyleMixIn {
    public:
        explicit LyricStyleMixIn(MeiElement *b);
        virtual ~LyricStyleMixIn();
        /** \brief Describes the alignment of lyric syllables associated with a note or chord.
         */
        MeiAttribute* getLyricAlign();
        void setLyricAlign(std::string _lyricalign);
        bool hasLyricAlign();
        void removeLyricAlign();
        /** \brief Sets the font family default value for lyrics.
         */
        MeiAttribute* getLyricFam();
        void setLyricFam(std::string _lyricfam);
        bool hasLyricFam();
        void removeLyricFam();
        /** \brief Sets the font name default value for lyrics.
         */
        MeiAttribute* getLyricName();
        void setLyricName(std::string _lyricname);
        bool hasLyricName();
        void removeLyricName();
        /** \brief Sets the default font size value for lyrics.
         */
        MeiAttribute* getLyricSize();
        void setLyricSize(std::string _lyricsize);
        bool hasLyricSize();
        void removeLyricSize();
        /** \brief Sets the default font style value for lyrics.
         */
        MeiAttribute* getLyricStyle();
        void setLyricStyle(std::string _lyricstyle);
        bool hasLyricStyle();
        void removeLyricStyle();
        /** \brief Sets the default font weight value for lyrics.
         */
        MeiAttribute* getLyricWeight();
        void setLyricWeight(std::string _lyricweight);
        bool hasLyricWeight();
        void removeLyricWeight();

/* include <lyric.weightmixin> */

    private:
        MeiElement *b;
};

class MeasureNumbersMixIn {
    public:
        explicit MeasureNumbersMixIn(MeiElement *b);
        virtual ~MeasureNumbersMixIn();
        /** \brief Indicates whether measure numbers should be displayed.
         */
        MeiAttribute* getMnumVisible();
        void setMnumVisible(std::string _mnumvisible);
        bool hasMnumVisible();
        void removeMnumVisible();

/* include <mnum.visiblemixin> */

    private:
        MeiElement *b;
};

class MeasurementMixIn {
    public:
        explicit MeasurementMixIn(MeiElement *b);
        virtual ~MeasurementMixIn();
        /** \brief Indicates the unit of measurement.
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

/* include <unitmixin> */

    private:
        MeiElement *b;
};

class MediaBoundsMixIn {
    public:
        explicit MediaBoundsMixIn(MeiElement *b);
        virtual ~MediaBoundsMixIn();
        /** \brief Specifies a point where the relevant content begins.
         * 
         *  A numerical value must be less and a time value must be earlier than that given
         *  by the end attribute.
         */
        MeiAttribute* getBegin();
        void setBegin(std::string _begin);
        bool hasBegin();
        void removeBegin();
        /** \brief Specifies a point where the relevant content ends.
         * 
         *  If not specified, the end of the content is assumed to be the end point. A
         *  numerical value must be greater and a time value must be later than that given
         *  by the begin attribute.
         */
        MeiAttribute* getEnd();
        void setEnd(std::string _end);
        bool hasEnd();
        void removeEnd();
        /** \brief Type of values used in the begin/end attributes.
         * 
         *  The begin and end attributes can only be interpreted meaningfully in conjunction
         *  with this attribute.
         */
        MeiAttribute* getBetype();
        void setBetype(std::string _betype);
        bool hasBetype();
        void removeBetype();

/* include <betypemixin> */

    private:
        MeiElement *b;
};

class MediumMixIn {
    public:
        explicit MediumMixIn(MeiElement *b);
        virtual ~MediumMixIn();
        /** \brief Describes the writing medium.
         */
        MeiAttribute* getMedium();
        void setMedium(std::string _medium);
        bool hasMedium();
        void removeMedium();

/* include <mediummixin> */

    private:
        MeiElement *b;
};

class MeiVersionMixIn {
    public:
        explicit MeiVersionMixIn(MeiElement *b);
        virtual ~MeiVersionMixIn();
        /** \brief Specifies a generic MEI version label.
         */
        MeiAttribute* getMeiversion();
        void setMeiversion(std::string _meiversion);
        bool hasMeiversion();
        void removeMeiversion();

/* include <meiversionmixin> */

    private:
        MeiElement *b;
};

class MetadataPointingMixIn {
    public:
        explicit MetadataPointingMixIn(MeiElement *b);
        virtual ~MetadataPointingMixIn();
        /** \brief Identifies one or more metadata elements (other than classification terms)
         *  within the header, which are understood to apply to the element bearing this
         *  attribute and its content.
         */
        MeiAttribute* getDecls();
        void setDecls(std::string _decls);
        bool hasDecls();
        void removeDecls();

/* include <declsmixin> */

    private:
        MeiElement *b;
};

class MeterConformanceMixIn {
    public:
        explicit MeterConformanceMixIn(MeiElement *b);
        virtual ~MeterConformanceMixIn();
        /** \brief Indicates the relationship between the content of a staff or layer and the
         *  prevailing meter.
         */
        MeiAttribute* getMetcon();
        void setMetcon(std::string _metcon);
        bool hasMetcon();
        void removeMetcon();

/* include <metconmixin> */

    private:
        MeiElement *b;
};

class MeterConformanceBarMixIn {
    public:
        explicit MeterConformanceBarMixIn(MeiElement *b);
        virtual ~MeterConformanceBarMixIn();
        /** \brief Indicates the relationship between the content of a staff or layer and the
         *  prevailing meter.
         */
        MeiAttribute* getMetcon();
        void setMetcon(std::string _metcon);
        bool hasMetcon();
        void removeMetcon();
        /** \brief Indicates whether or not a bar line is "controlling"; that is, if it indicates a
         *  point of alignment across all the parts.
         * 
         *  Bar lines within a score are usually controlling; that is, they "line up". Bar
         *  lines within parts may or may not be controlling. When applied to measure, this
         *  attribute indicates the nature of the right barline but not the left.
         */
        MeiAttribute* getControl();
        void setControl(std::string _control);
        bool hasControl();
        void removeControl();

/* include <controlmixin> */

    private:
        MeiElement *b;
};

class MeterSigLogMixIn {
    public:
        explicit MeterSigLogMixIn(MeiElement *b);
        virtual ~MeterSigLogMixIn();
        /** \brief Indicates the number of performers.
         */
        MeiAttribute* getCount();
        void setCount(std::string _count);
        bool hasCount();
        void removeCount();
        /** \brief Indicates the use of a meter symbol instead of a numeric meter signature, that
         *  is, 'C' for common time or 'C' with a slash for cut time.
         */
        MeiAttribute* getSym();
        void setSym(std::string _sym);
        bool hasSym();
        void removeSym();
        /** \brief Indicates the unit of measurement.
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

/* include <unitmixin> */

    private:
        MeiElement *b;
};

class MeterSigDefaultLogMixIn {
    public:
        explicit MeterSigDefaultLogMixIn(MeiElement *b);
        virtual ~MeterSigDefaultLogMixIn();
        /** \brief Captures the number of beats in a measure, that is, the top number of the meter
         *  signature.
         * 
         *  It must contain a decimal number or an expression that evaluates to a decimal
         *  number, such as 2+3 or 3*2.
         */
        MeiAttribute* getMeterCount();
        void setMeterCount(std::string _metercount);
        bool hasMeterCount();
        void removeMeterCount();
        /** \brief Contains the number indicating the beat unit, that is, the bottom number of the
         *  meter signature.
         */
        MeiAttribute* getMeterUnit();
        void setMeterUnit(std::string _meterunit);
        bool hasMeterUnit();
        void removeMeterUnit();
        /** \brief Indicates the use of a meter symbol instead of a numeric meter signature, that
         *  is, 'C' for common time or 'C' with a slash for cut time.
         */
        MeiAttribute* getMeterSym();
        void setMeterSym(std::string _metersym);
        bool hasMeterSym();
        void removeMeterSym();

/* include <meter.symmixin> */

    private:
        MeiElement *b;
};

class MmTempoMixIn {
    public:
        explicit MmTempoMixIn(MeiElement *b);
        virtual ~MmTempoMixIn();
        /** \brief Used to describe tempo in terms of beats (often the meter signature denominator)
         *  per minute, ala M.M.
         * 
         *  (Maelzel’s Metronome). Do not confuse this attribute with midi.bpm or midi.mspb.
         *  In MIDI, a beat is always defined as a quarter note, *not the numerator of the
         *  time signature or the metronomic indication*.
         */
        MeiAttribute* getMm();
        void setMm(std::string _mm);
        bool hasMm();
        void removeMm();
        /** \brief Captures the metronomic unit.
         */
        MeiAttribute* getMmUnit();
        void setMmUnit(std::string _mmunit);
        bool hasMmUnit();
        void removeMmUnit();
        /** \brief Records the number of augmentation dots required by a dotted metronome unit.
         */
        MeiAttribute* getMmDots();
        void setMmDots(std::string _mmdots);
        bool hasMmDots();
        void removeMmDots();

/* include <mm.dotsmixin> */

    private:
        MeiElement *b;
};

class MultinumMeasuresMixIn {
    public:
        explicit MultinumMeasuresMixIn(MeiElement *b);
        virtual ~MultinumMeasuresMixIn();
        /** \brief Indicates whether programmatically calculated counts of multiple measures of
         *  rest (mRest) and whole measure repeats (mRpt) in parts should be rendered.
         */
        MeiAttribute* getMultiNumber();
        void setMultiNumber(std::string _multinumber);
        bool hasMultiNumber();
        void removeMultiNumber();

/* include <multi.numbermixin> */

    private:
        MeiElement *b;
};

class NIntegerMixIn {
    public:
        explicit NIntegerMixIn(MeiElement *b);
        virtual ~NIntegerMixIn();
        /** \brief Provides a numeric designation that indicates an element’s position in a
         *  sequence of similar elements.
         * 
         *  Its value must be a non-negative integer.
         */
        MeiAttribute* getN();
        void setN(std::string _n);
        bool hasN();
        void removeN();

/* include <nmixin> */

    private:
        MeiElement *b;
};

class NNumberLikeMixIn {
    public:
        explicit NNumberLikeMixIn(MeiElement *b);
        virtual ~NNumberLikeMixIn();
        /** \brief Provides a numeric designation that indicates an element’s position in a
         *  sequence of similar elements.
         * 
         *  Its value must be a non-negative integer.
         */
        MeiAttribute* getN();
        void setN(std::string _n);
        bool hasN();
        void removeN();

/* include <nmixin> */

    private:
        MeiElement *b;
};

class NameMixIn {
    public:
        explicit NameMixIn(MeiElement *b);
        virtual ~NameMixIn();
        /** \brief Used to record a pointer to the regularized form of the name elsewhere in the
         *  document.
         */
        MeiAttribute* getNymref();
        void setNymref(std::string _nymref);
        bool hasNymref();
        void removeNymref();
        /** \brief Used to specify further information about the entity referenced by this name,
         *  for example, the occupation of a person or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();

/* include <rolemixin> */

    private:
        MeiElement *b;
};

class NotationStyleMixIn {
    public:
        explicit NotationStyleMixIn(MeiElement *b);
        virtual ~NotationStyleMixIn();
        /** \brief Sets the default music font name.
         */
        MeiAttribute* getMusicName();
        void setMusicName(std::string _musicname);
        bool hasMusicName();
        void removeMusicName();
        /** \brief Sets the default music font size.
         */
        MeiAttribute* getMusicSize();
        void setMusicSize(std::string _musicsize);
        bool hasMusicSize();
        void removeMusicSize();

/* include <music.sizemixin> */

    private:
        MeiElement *b;
};

class NoteHeadsMixIn {
    public:
        explicit NoteHeadsMixIn(MeiElement *b);
        virtual ~NoteHeadsMixIn();
        /** \brief Provides a way of pointing to a user-defined symbol.
         * 
         *  It must contain a reference to an ID of a symbolDef element elsewhere in the
         *  document.
         */
        MeiAttribute* getHeadAltsym();
        void setHeadAltsym(std::string _headaltsym);
        bool hasHeadAltsym();
        void removeHeadAltsym();
        /** \brief A name or label associated with the controlled vocabulary from which a numerical
         *  value of head.shape is taken.
         */
        MeiAttribute* getHeadAuth();
        void setHeadAuth(std::string _headauth);
        bool hasHeadAuth();
        void removeHeadAuth();
        /** \brief Captures the overall color of a notehead.
         */
        MeiAttribute* getHeadColor();
        void setHeadColor(std::string _headcolor);
        bool hasHeadColor();
        void removeHeadColor();
        /** \brief Describes how/if the notehead is filled.
         */
        MeiAttribute* getHeadFill();
        void setHeadFill(std::string _headfill);
        bool hasHeadFill();
        void removeHeadFill();
        /** \brief Captures the fill color of a notehead if different from the overall note color.
         */
        MeiAttribute* getHeadFillcolor();
        void setHeadFillcolor(std::string _headfillcolor);
        bool hasHeadFillcolor();
        void removeHeadFillcolor();
        /** \brief Records any additional symbols applied to the notehead.
         */
        MeiAttribute* getHeadMod();
        void setHeadMod(std::string _headmod);
        bool hasHeadMod();
        void removeHeadMod();
        /** \brief Describes rotation applied to the basic notehead shape.
         * 
         *  A positive value rotates the notehead in a counter-clockwise fashion, while
         *  negative values produce clockwise rotation.
         */
        MeiAttribute* getHeadRotation();
        void setHeadRotation(std::string _headrotation);
        bool hasHeadRotation();
        void removeHeadRotation();
        /** \brief Used to override the head shape normally used for the given duration.
         */
        MeiAttribute* getHeadShape();
        void setHeadShape(std::string _headshape);
        bool hasHeadShape();
        void removeHeadShape();
        /** \brief Indicates if a feature should be rendered when the notation is presented
         *  graphically or sounded when it is presented in an aural form.
         */
        MeiAttribute* getHeadVisible();
        void setHeadVisible(std::string _headvisible);
        bool hasHeadVisible();
        void removeHeadVisible();

/* include <head.visiblemixin> */

    private:
        MeiElement *b;
};

class OctaveMixIn {
    public:
        explicit OctaveMixIn(MeiElement *b);
        virtual ~OctaveMixIn();
        /** \brief Captures written octave information.
         */
        MeiAttribute* getOct();
        void setOct(std::string _oct);
        bool hasOct();
        void removeOct();

/* include <octmixin> */

    private:
        MeiElement *b;
};

class OctaveDefaultMixIn {
    public:
        explicit OctaveDefaultMixIn(MeiElement *b);
        virtual ~OctaveDefaultMixIn();
        /** \brief Contains a default octave specification for use when the first note, rest,
         *  chord, etc.
         * 
         *  in a measure does not have an octave value specified.
         */
        MeiAttribute* getOctDefault();
        void setOctDefault(std::string _octdefault);
        bool hasOctDefault();
        void removeOctDefault();

/* include <oct.defaultmixin> */

    private:
        MeiElement *b;
};

class OctaveDisplacementMixIn {
    public:
        explicit OctaveDisplacementMixIn(MeiElement *b);
        virtual ~OctaveDisplacementMixIn();
        /** \brief Records the amount of octave displacement.
         */
        MeiAttribute* getDis();
        void setDis(std::string _dis);
        bool hasDis();
        void removeDis();
        /** \brief Records the direction of octave displacement.
         */
        MeiAttribute* getDisPlace();
        void setDisPlace(std::string _displace);
        bool hasDisPlace();
        void removeDisPlace();

/* include <dis.placemixin> */

    private:
        MeiElement *b;
};

class OneLineStaffMixIn {
    public:
        explicit OneLineStaffMixIn(MeiElement *b);
        virtual ~OneLineStaffMixIn();
        /** \brief Determines the placement of notes on a 1-line staff.
         * 
         *  A value of 'true' places all notes on the line, while a value of 'false' places
         *  stems-up notes above the line and stems-down notes below the line.
         */
        MeiAttribute* getOntheline();
        void setOntheline(std::string _ontheline);
        bool hasOntheline();
        void removeOntheline();

/* include <onthelinemixin> */

    private:
        MeiElement *b;
};

class OptimizationMixIn {
    public:
        explicit OptimizationMixIn(MeiElement *b);
        virtual ~OptimizationMixIn();
        /** \brief Indicates whether staves without notes, rests, etc.
         * 
         *  should be displayed. When the value is 'true', empty staves are displayed.
         */
        MeiAttribute* getOptimize();
        void setOptimize(std::string _optimize);
        bool hasOptimize();
        void removeOptimize();

/* include <optimizemixin> */

    private:
        MeiElement *b;
};

class OriginLayerIdentMixIn {
    public:
        explicit OriginLayerIdentMixIn(MeiElement *b);
        virtual ~OriginLayerIdentMixIn();
        /** \brief identifies the layer on which referenced notation occurs.
         */
        MeiAttribute* getOriginLayer();
        void setOriginLayer(std::string _originlayer);
        bool hasOriginLayer();
        void removeOriginLayer();

/* include <origin.layermixin> */

    private:
        MeiElement *b;
};

class OriginStaffIdentMixIn {
    public:
        explicit OriginStaffIdentMixIn(MeiElement *b);
        virtual ~OriginStaffIdentMixIn();
        /** \brief signifies the staff on which referenced notation occurs.
         * 
         *  Defaults to the same value as the local staff. Mandatory when applicable.
         */
        MeiAttribute* getOriginStaff();
        void setOriginStaff(std::string _originstaff);
        bool hasOriginStaff();
        void removeOriginStaff();

/* include <origin.staffmixin> */

    private:
        MeiElement *b;
};

class OriginStartEndIdMixIn {
    public:
        explicit OriginStartEndIdMixIn(MeiElement *b);
        virtual ~OriginStartEndIdMixIn();
        /** \brief indicates the first element in a sequence of events.
         */
        MeiAttribute* getOriginStartid();
        void setOriginStartid(std::string _originstartid);
        bool hasOriginStartid();
        void removeOriginStartid();
        /** \brief indicates the final element in a sequence of events.
         */
        MeiAttribute* getOriginEndid();
        void setOriginEndid(std::string _originendid);
        bool hasOriginEndid();
        void removeOriginEndid();

/* include <origin.endidmixin> */

    private:
        MeiElement *b;
};

class OriginTimestampLogicalMixIn {
    public:
        explicit OriginTimestampLogicalMixIn(MeiElement *b);
        virtual ~OriginTimestampLogicalMixIn();
        /** \brief encodes the starting point of musical material in terms of musical time, i.e., a
         *  (potentially negative) count of measures plus a beat location.
         */
        MeiAttribute* getOriginTstamp();
        void setOriginTstamp(std::string _origintstamp);
        bool hasOriginTstamp();
        void removeOriginTstamp();
        /** \brief encodes the ending point of musical material in terms of musical time, i.e., a
         *  count of measures plus a beat location.
         * 
         *  The values are relative to the measure identified by origin.tstamp.
         */
        MeiAttribute* getOriginTstamp2();
        void setOriginTstamp2(std::string _origintstamp2);
        bool hasOriginTstamp2();
        void removeOriginTstamp2();

/* include <origin.tstamp2mixin> */

    private:
        MeiElement *b;
};

class PagesMixIn {
    public:
        explicit PagesMixIn(MeiElement *b);
        virtual ~PagesMixIn();
        /** \brief Specifies the height of the page; may be expressed in real-world units or staff
         *  steps.
         */
        MeiAttribute* getPageHeight();
        void setPageHeight(std::string _pageheight);
        bool hasPageHeight();
        void removePageHeight();
        /** \brief Describes the width of the page; may be expressed in real-world units or staff
         *  steps.
         */
        MeiAttribute* getPageWidth();
        void setPageWidth(std::string _pagewidth);
        bool hasPageWidth();
        void removePageWidth();
        /** \brief Indicates the amount of whitespace at the top of a page.
         */
        MeiAttribute* getPageTopmar();
        void setPageTopmar(std::string _pagetopmar);
        bool hasPageTopmar();
        void removePageTopmar();
        /** \brief Indicates the amount of whitespace at the bottom of a page.
         */
        MeiAttribute* getPageBotmar();
        void setPageBotmar(std::string _pagebotmar);
        bool hasPageBotmar();
        void removePageBotmar();
        /** \brief Indicates the amount of whitespace at the left side of a page.
         */
        MeiAttribute* getPageLeftmar();
        void setPageLeftmar(std::string _pageleftmar);
        bool hasPageLeftmar();
        void removePageLeftmar();
        /** \brief Indicates the amount of whitespace at the right side of a page.
         */
        MeiAttribute* getPageRightmar();
        void setPageRightmar(std::string _pagerightmar);
        bool hasPageRightmar();
        void removePageRightmar();
        /** \brief Indicates the number of logical pages to be rendered on a single physical page.
         */
        MeiAttribute* getPagePanels();
        void setPagePanels(std::string _pagepanels);
        bool hasPagePanels();
        void removePagePanels();
        /** \brief Indicates how the page should be scaled when rendered.
         */
        MeiAttribute* getPageScale();
        void setPageScale(std::string _pagescale);
        bool hasPageScale();
        void removePageScale();

/* include <page.scalemixin> */

    private:
        MeiElement *b;
};

class PartIdentMixIn {
    public:
        explicit PartIdentMixIn(MeiElement *b);
        virtual ~PartIdentMixIn();
        /** \brief Indicates the part in which the current feature should appear.
         * 
         *  Use '%all' when the feature should occur in every part.
         */
        MeiAttribute* getPart();
        void setPart(std::string _part);
        bool hasPart();
        void removePart();
        /** \brief Signifies the part staff on which a notated feature occurs.
         * 
         *  Use '%all' when the feature should occur on every staff.
         */
        MeiAttribute* getPartstaff();
        void setPartstaff(std::string _partstaff);
        bool hasPartstaff();
        void removePartstaff();

/* include <partstaffmixin> */

    private:
        MeiElement *b;
};

class PitchMixIn {
    public:
        explicit PitchMixIn(MeiElement *b);
        virtual ~PitchMixIn();
        /** \brief Contains a written pitch name.
         */
        MeiAttribute* getPname();
        void setPname(std::string _pname);
        bool hasPname();
        void removePname();

/* include <pnamemixin> */

    private:
        MeiElement *b;
};

class PlacementOnStaffMixIn {
    public:
        explicit PlacementOnStaffMixIn(MeiElement *b);
        virtual ~PlacementOnStaffMixIn();
        /** \brief Indicates the placement of the item within the staff.
         * 
         *  A value of 'true' means on the staff, and 'false' off the staff.
         */
        MeiAttribute* getOnstaff();
        void setOnstaff(std::string _onstaff);
        bool hasOnstaff();
        void removeOnstaff();

/* include <onstaffmixin> */

    private:
        MeiElement *b;
};

class PlacementRelEventMixIn {
    public:
        explicit PlacementRelEventMixIn(MeiElement *b);
        virtual ~PlacementRelEventMixIn();
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

class PlacementRelStaffMixIn {
    public:
        explicit PlacementRelStaffMixIn(MeiElement *b);
        virtual ~PlacementRelStaffMixIn();
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

class PlistMixIn {
    public:
        explicit PlistMixIn(MeiElement *b);
        virtual ~PlistMixIn();
        /** \brief When the target attribute is present, plist identifies the active participants;
         *  that is, those entities pointed "from", in a relationship with the specified
         *  target(s).
         * 
         *  When the target attribute is not present, it identifies participants in a mutual
         *  relationship.
         */
        MeiAttribute* getPlist();
        void setPlist(std::string _plist);
        bool hasPlist();
        void removePlist();

/* include <plistmixin> */

    private:
        MeiElement *b;
};

class PointingMixIn {
    public:
        explicit PointingMixIn(MeiElement *b);
        virtual ~PointingMixIn();
        /** \brief 
         */
        MeiAttribute* getActuate();
        void setActuate(std::string _actuate);
        bool hasActuate();
        void removeActuate();
        /** \brief Used to specify further information about the entity referenced by this name,
         *  for example, the occupation of a person or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();
        /** \brief 
         */
        MeiAttribute* getShow();
        void setShow(std::string _show);
        bool hasShow();
        void removeShow();
        /** \brief Indicates the next section or movement to be performed.
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();
        /** \brief Characterization of target resource(s) using any convenient classification
         *  scheme or typology.
         */
        MeiAttribute* getTargettype();
        void setTargettype(std::string _targettype);
        bool hasTargettype();
        void removeTargettype();

/* include <targettypemixin> */

    private:
        MeiElement *b;
};

class QuantityMixIn {
    public:
        explicit QuantityMixIn(MeiElement *b);
        virtual ~QuantityMixIn();
        /** \brief Numeric value capturing a measurement or count.
         * 
         *  Can only be interpreted in combination with the unit attribute.
         */
        MeiAttribute* getQuantity();
        void setQuantity(std::string _quantity);
        bool hasQuantity();
        void removeQuantity();

/* include <quantitymixin> */

    private:
        MeiElement *b;
};

class RangingMixIn {
    public:
        explicit RangingMixIn(MeiElement *b);
        virtual ~RangingMixIn();
        /** \brief Gives a minimum estimated value for an approximate measurement.
         */
        MeiAttribute* getAtleast();
        void setAtleast(std::string _atleast);
        bool hasAtleast();
        void removeAtleast();
        /** \brief Gives a maximum estimated value for an approximate measurement.
         */
        MeiAttribute* getAtmost();
        void setAtmost(std::string _atmost);
        bool hasAtmost();
        void removeAtmost();
        /** \brief Where the measurement summarizes more than one observation or a range of values,
         *  supplies the minimum value observed.
         */
        MeiAttribute* getMin();
        void setMin(std::string _min);
        bool hasMin();
        void removeMin();
        /** \brief Where the measurement summarizes more than one observation or a range of values,
         *  supplies the maximum value observed.
         */
        MeiAttribute* getMax();
        void setMax(std::string _max);
        bool hasMax();
        void removeMax();
        /** \brief Specifies the degree of statistical confidence (between zero and one) that a
         *  value falls within the range specified by min and max, or the proportion of
         *  observed values that fall within that range.
         */
        MeiAttribute* getConfidence();
        void setConfidence(std::string _confidence);
        bool hasConfidence();
        void removeConfidence();

/* include <confidencemixin> */

    private:
        MeiElement *b;
};

class ResponsibilityMixIn {
    public:
        explicit ResponsibilityMixIn(MeiElement *b);
        virtual ~ResponsibilityMixIn();
        /** \brief Indicates the agent(s) responsible for some aspect of the text’s transcription,
         *  editing, or encoding.
         * 
         *  Its value must point to one or more identifiers declared in the document header.
         */
        MeiAttribute* getResp();
        void setResp(std::string _resp);
        bool hasResp();
        void removeResp();

/* include <respmixin> */

    private:
        MeiElement *b;
};

class RestdurationLogicalMixIn {
    public:
        explicit RestdurationLogicalMixIn(MeiElement *b);
        virtual ~RestdurationLogicalMixIn();
        /** \brief When a duration cannot be represented as a single power-of-two value, multiple
         *  space-separated values that add up to the total duration may be used.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

/* include <durmixin> */

    private:
        MeiElement *b;
};

class ScalableMixIn {
    public:
        explicit ScalableMixIn(MeiElement *b);
        virtual ~ScalableMixIn();
        /** \brief Scale factor to be applied to the feature to make it the desired display size.
         */
        MeiAttribute* getScale();
        void setScale(std::string _scale);
        bool hasScale();
        void removeScale();

/* include <scalemixin> */

    private:
        MeiElement *b;
};

class SequenceMixIn {
    public:
        explicit SequenceMixIn(MeiElement *b);
        virtual ~SequenceMixIn();
        /** \brief Used to assign a sequence number related to the order in which the encoded
         *  features carrying this attribute are believed to have occurred.
         */
        MeiAttribute* getSeq();
        void setSeq(std::string _seq);
        bool hasSeq();
        void removeSeq();

/* include <seqmixin> */

    private:
        MeiElement *b;
};

class SlashCountMixIn {
    public:
        explicit SlashCountMixIn(MeiElement *b);
        virtual ~SlashCountMixIn();
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

class SlurPresentMixIn {
    public:
        explicit SlurPresentMixIn(MeiElement *b);
        virtual ~SlurPresentMixIn();
        /** \brief Indicates that this element participates in a slur.
         * 
         *  If visual information about the slur needs to be recorded, then a slur element
         *  should be employed.
         */
        MeiAttribute* getSlur();
        void setSlur(std::string _slur);
        bool hasSlur();
        void removeSlur();

/* include <slurmixin> */

    private:
        MeiElement *b;
};

class SourceMixIn {
    public:
        explicit SourceMixIn(MeiElement *b);
        virtual ~SourceMixIn();
        /** \brief Contains a list of one or more pointers indicating the sources which attest to a
         *  given reading.
         * 
         *  Each value should correspond to the ID of a source or manifestationelement
         *  located in the document header.
         */
        MeiAttribute* getSource();
        void setSource(std::string _source);
        bool hasSource();
        void removeSource();

/* include <sourcemixin> */

    private:
        MeiElement *b;
};

class SpacingMixIn {
    public:
        explicit SpacingMixIn(MeiElement *b);
        virtual ~SpacingMixIn();
        /** \brief Describes a note’s spacing relative to its time value.
         */
        MeiAttribute* getSpacingPackexp();
        void setSpacingPackexp(std::string _spacingpackexp);
        bool hasSpacingPackexp();
        void removeSpacingPackexp();
        /** \brief Describes the note spacing of output.
         */
        MeiAttribute* getSpacingPackfact();
        void setSpacingPackfact(std::string _spacingpackfact);
        bool hasSpacingPackfact();
        void removeSpacingPackfact();
        /** \brief Specifies the minimum amount of space between adjacent staves in the same
         *  system; measured from the bottom line of the staff above to the top line of the
         *  staff below.
         */
        MeiAttribute* getSpacingStaff();
        void setSpacingStaff(std::string _spacingstaff);
        bool hasSpacingStaff();
        void removeSpacingStaff();
        /** \brief Describes the space between adjacent systems; a pair of space-separated values
         *  (minimum and maximum, respectively) provides a range between which a rendering
         *  system-supplied value may fall, while a single value indicates a fixed amount of
         *  space; that is, the minimum and maximum values are equal.
         */
        MeiAttribute* getSpacingSystem();
        void setSpacingSystem(std::string _spacingsystem);
        bool hasSpacingSystem();
        void removeSpacingSystem();

/* include <spacing.systemmixin> */

    private:
        MeiElement *b;
};

class StaffLogMixIn {
    public:
        explicit StaffLogMixIn(MeiElement *b);
        virtual ~StaffLogMixIn();
        /** \brief Provides a mechanism for linking the layer to a layerDef element.
         */
        MeiAttribute* getDef();
        void setDef(std::string _def);
        bool hasDef();
        void removeDef();

/* include <defmixin> */

    private:
        MeiElement *b;
};

class StaffDefLogMixIn {
    public:
        explicit StaffDefLogMixIn(MeiElement *b);
        virtual ~StaffDefLogMixIn();
        /** \brief Indicates the number of staff lines.
         */
        MeiAttribute* getLines();
        void setLines(std::string _lines);
        bool hasLines();
        void removeLines();

/* include <linesmixin> */

    private:
        MeiElement *b;
};

class StaffGroupingSymMixIn {
    public:
        explicit StaffGroupingSymMixIn(MeiElement *b);
        virtual ~StaffGroupingSymMixIn();
        /** \brief Specifies the symbol used to group a set of staves.
         */
        MeiAttribute* getSymbol();
        void setSymbol(std::string _symbol);
        bool hasSymbol();
        void removeSymbol();

/* include <symbolmixin> */

    private:
        MeiElement *b;
};

class StaffIdentMixIn {
    public:
        explicit StaffIdentMixIn(MeiElement *b);
        virtual ~StaffIdentMixIn();
        /** \brief Signifies the staff on which a notated event occurs or to which a control event
         *  applies.
         * 
         *  Mandatory when applicable.
         */
        MeiAttribute* getStaff();
        void setStaff(std::string _staff);
        bool hasStaff();
        void removeStaff();

/* include <staffmixin> */

    private:
        MeiElement *b;
};

class StaffItemsMixIn {
    public:
        explicit StaffItemsMixIn(MeiElement *b);
        virtual ~StaffItemsMixIn();
        /** \brief Describes vertical order of items printed above a staff, from closest to
         *  farthest away from the staff.
         */
        MeiAttribute* getAboveorder();
        void setAboveorder(std::string _aboveorder);
        bool hasAboveorder();
        void removeAboveorder();
        /** \brief Describes vertical order of items printed below a staff, from closest to
         *  farthest away from the staff.
         */
        MeiAttribute* getBeloworder();
        void setBeloworder(std::string _beloworder);
        bool hasBeloworder();
        void removeBeloworder();
        /** \brief Describes vertical order of items printed between staves, from top to bottom.
         */
        MeiAttribute* getBetweenorder();
        void setBetweenorder(std::string _betweenorder);
        bool hasBetweenorder();
        void removeBetweenorder();

/* include <betweenordermixin> */

    private:
        MeiElement *b;
};

class StaffLocMixIn {
    public:
        explicit StaffLocMixIn(MeiElement *b);
        virtual ~StaffLocMixIn();
        /** \brief Holds the staff location of the feature.
         */
        MeiAttribute* getLoc();
        void setLoc(std::string _loc);
        bool hasLoc();
        void removeLoc();

/* include <locmixin> */

    private:
        MeiElement *b;
};

class StaffLocPitchedMixIn {
    public:
        explicit StaffLocPitchedMixIn(MeiElement *b);
        virtual ~StaffLocPitchedMixIn();
        /** \brief Captures staff location in terms of written pitch name.
         */
        MeiAttribute* getPloc();
        void setPloc(std::string _ploc);
        bool hasPloc();
        void removePloc();
        /** \brief Records staff location in terms of written octave.
         */
        MeiAttribute* getOloc();
        void setOloc(std::string _oloc);
        bool hasOloc();
        void removeOloc();

/* include <olocmixin> */

    private:
        MeiElement *b;
};

class StartEndIdMixIn {
    public:
        explicit StartEndIdMixIn(MeiElement *b);
        virtual ~StartEndIdMixIn();
        /** \brief Indicates the final element in a sequence of events to which the feature
         *  applies.
         */
        MeiAttribute* getEndid();
        void setEndid(std::string _endid);
        bool hasEndid();
        void removeEndid();

/* include <endidmixin> */

    private:
        MeiElement *b;
};

class StartIdMixIn {
    public:
        explicit StartIdMixIn(MeiElement *b);
        virtual ~StartIdMixIn();
        /** \brief Holds a reference to the first element in a sequence of events to which the
         *  feature applies.
         */
        MeiAttribute* getStartid();
        void setStartid(std::string _startid);
        bool hasStartid();
        void removeStartid();

/* include <startidmixin> */

    private:
        MeiElement *b;
};

class StemsMixIn {
    public:
        explicit StemsMixIn(MeiElement *b);
        virtual ~StemsMixIn();
        /** \brief Describes the direction of a stem.
         */
        MeiAttribute* getStemDir();
        void setStemDir(std::string _stemdir);
        bool hasStemDir();
        void removeStemDir();
        /** \brief Encodes the stem length.
         */
        MeiAttribute* getStemLen();
        void setStemLen(std::string _stemlen);
        bool hasStemLen();
        void removeStemLen();
        /** \brief Encodes any stem "modifiers"; that is, symbols rendered on the stem, such as
         *  tremolo or Sprechstimme indicators.
         */
        MeiAttribute* getStemMod();
        void setStemMod(std::string _stemmod);
        bool hasStemMod();
        void removeStemMod();
        /** \brief Records the position of the stem in relation to the note head(s).
         */
        MeiAttribute* getStemPos();
        void setStemPos(std::string _stempos);
        bool hasStemPos();
        void removeStemPos();
        /** \brief Points to a note element in a different layer whose stem is shared.
         * 
         *  The linked notes should be rendered like a chord though they are part of
         *  different layers.
         */
        MeiAttribute* getStemSameas();
        void setStemSameas(std::string _stemsameas);
        bool hasStemSameas();
        void removeStemSameas();
        /** \brief Determines whether a stem should be displayed.
         */
        MeiAttribute* getStemVisible();
        void setStemVisible(std::string _stemvisible);
        bool hasStemVisible();
        void removeStemVisible();
        /** \brief Records the output x coordinate of the stem’s attachment point.
         */
        MeiAttribute* getStemX();
        void setStemX(std::string _stemx);
        bool hasStemX();
        void removeStemX();
        /** \brief Records the output y coordinate of the stem’s attachment point.
         */
        MeiAttribute* getStemY();
        void setStemY(std::string _stemy);
        bool hasStemY();
        void removeStemY();

/* include <stem.ymixin> */

    private:
        MeiElement *b;
};

class SylLogMixIn {
    public:
        explicit SylLogMixIn(MeiElement *b);
        virtual ~SylLogMixIn();
        /** \brief Connection to the previous component within the same neume; this attribute
         *  should not be used for the first component of a neume.
         */
        MeiAttribute* getCon();
        void setCon(std::string _con);
        bool hasCon();
        void removeCon();
        /** \brief Records the position of a syllable within a word.
         */
        MeiAttribute* getWordpos();
        void setWordpos(std::string _wordpos);
        bool hasWordpos();
        void removeWordpos();

/* include <wordposmixin> */

    private:
        MeiElement *b;
};

class SylTextMixIn {
    public:
        explicit SylTextMixIn(MeiElement *b);
        virtual ~SylTextMixIn();
        /** \brief Holds an associated sung text syllable.
         */
        MeiAttribute* getSyl();
        void setSyl(std::string _syl);
        bool hasSyl();
        void removeSyl();

/* include <sylmixin> */

    private:
        MeiElement *b;
};

class SystemsMixIn {
    public:
        explicit SystemsMixIn(MeiElement *b);
        virtual ~SystemsMixIn();
        /** \brief Indicates whether the system starts with a continuous line connecting all
         *  staves, including single-staff systems.
         * 
         *  Do not confuse this with the heavy vertical line used as a grouping symbol.
         */
        MeiAttribute* getSystemLeftline();
        void setSystemLeftline(std::string _systemleftline);
        bool hasSystemLeftline();
        void removeSystemLeftline();
        /** \brief Describes the amount of whitespace at the left system margin relative to
         *  page.leftmar.
         */
        MeiAttribute* getSystemLeftmar();
        void setSystemLeftmar(std::string _systemleftmar);
        bool hasSystemLeftmar();
        void removeSystemLeftmar();
        /** \brief Describes the amount of whitespace at the right system margin relative to
         *  page.rightmar.
         */
        MeiAttribute* getSystemRightmar();
        void setSystemRightmar(std::string _systemrightmar);
        bool hasSystemRightmar();
        void removeSystemRightmar();
        /** \brief Describes the distance from page’s top edge to the first system; used for first
         *  page only.
         */
        MeiAttribute* getSystemTopmar();
        void setSystemTopmar(std::string _systemtopmar);
        bool hasSystemTopmar();
        void removeSystemTopmar();

/* include <system.topmarmixin> */

    private:
        MeiElement *b;
};

class TargetEvalMixIn {
    public:
        explicit TargetEvalMixIn(MeiElement *b);
        virtual ~TargetEvalMixIn();
        /** \brief Specifies the intended meaning when a participant in a relationship is itself a
         *  pointer.
         */
        MeiAttribute* getEvaluate();
        void setEvaluate(std::string _evaluate);
        bool hasEvaluate();
        void removeEvaluate();

/* include <evaluatemixin> */

    private:
        MeiElement *b;
};

class TempoLogMixIn {
    public:
        explicit TempoLogMixIn(MeiElement *b);
        virtual ~TempoLogMixIn();
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

class TextRenditionMixIn {
    public:
        explicit TextRenditionMixIn(MeiElement *b);
        virtual ~TextRenditionMixIn();
        /** \brief Used to extend the values of the rend attribute.
         */
        MeiAttribute* getAltrend();
        void setAltrend(std::string _altrend);
        bool hasAltrend();
        void removeAltrend();
        /** \brief Captures the appearance of the element’s contents using MEI-defined descriptors.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

/* include <rendmixin> */

    private:
        MeiElement *b;
};

class TextStyleMixIn {
    public:
        explicit TextStyleMixIn(MeiElement *b);
        virtual ~TextStyleMixIn();
        /** \brief Provides a default value for the font family name of text (other than lyrics)
         *  when this information is not provided on the individual elements.
         */
        MeiAttribute* getTextFam();
        void setTextFam(std::string _textfam);
        bool hasTextFam();
        void removeTextFam();
        /** \brief Provides a default value for the font name of text (other than lyrics) when this
         *  information is not provided on the individual elements.
         */
        MeiAttribute* getTextName();
        void setTextName(std::string _textname);
        bool hasTextName();
        void removeTextName();
        /** \brief Provides a default value for the font size of text (other than lyrics) when this
         *  information is not provided on the individual elements.
         */
        MeiAttribute* getTextSize();
        void setTextSize(std::string _textsize);
        bool hasTextSize();
        void removeTextSize();
        /** \brief Provides a default value for the font style of text (other than lyrics) when
         *  this information is not provided on the individual elements.
         */
        MeiAttribute* getTextStyle();
        void setTextStyle(std::string _textstyle);
        bool hasTextStyle();
        void removeTextStyle();
        /** \brief Provides a default value for the font weight for text (other than lyrics) when
         *  this information is not provided on the individual elements.
         */
        MeiAttribute* getTextWeight();
        void setTextWeight(std::string _textweight);
        bool hasTextWeight();
        void removeTextWeight();

/* include <text.weightmixin> */

    private:
        MeiElement *b;
};

class TiePresentMixIn {
    public:
        explicit TiePresentMixIn(MeiElement *b);
        virtual ~TiePresentMixIn();
        /** \brief Indicates that this element participates in a tie.
         * 
         *  If visual information about the tie needs to be recorded, then a tie element
         *  should be employed.
         */
        MeiAttribute* getTie();
        void setTie(std::string _tie);
        bool hasTie();
        void removeTie();

/* include <tiemixin> */

    private:
        MeiElement *b;
};

class TimestampLogicalMixIn {
    public:
        explicit TimestampLogicalMixIn(MeiElement *b);
        virtual ~TimestampLogicalMixIn();
        /** \brief Encodes the onset time in terms of musical time, i.e., beats[.fractional beat
         *  part], as expressed in the written time signature.
         */
        MeiAttribute* getTstamp();
        void setTstamp(std::string _tstamp);
        bool hasTstamp();
        void removeTstamp();

/* include <tstampmixin> */

    private:
        MeiElement *b;
};

class Timestamp2LogicalMixIn {
    public:
        explicit Timestamp2LogicalMixIn(MeiElement *b);
        virtual ~Timestamp2LogicalMixIn();
        /** \brief Encodes the ending point of an event, i.e., a count of measures plus a beat
         *  location in the ending measure.
         */
        MeiAttribute* getTstamp2();
        void setTstamp2(std::string _tstamp2);
        bool hasTstamp2();
        void removeTstamp2();

/* include <tstamp2mixin> */

    private:
        MeiElement *b;
};

class TranspositionMixIn {
    public:
        explicit TranspositionMixIn(MeiElement *b);
        virtual ~TranspositionMixIn();
        /** \brief Records the amount of diatonic pitch shift, e.g., C to C♯ = 0, C to D♭ = 1,
         *  necessary to calculate the sounded pitch from the written one.
         */
        MeiAttribute* getTransDiat();
        void setTransDiat(std::string _transdiat);
        bool hasTransDiat();
        void removeTransDiat();
        /** \brief Records the amount of pitch shift in semitones, e.g., C to C♯ = 1, C to D♭ = 1,
         *  necessary to calculate the sounded pitch from the written one.
         */
        MeiAttribute* getTransSemi();
        void setTransSemi(std::string _transsemi);
        bool hasTransSemi();
        void removeTransSemi();

/* include <trans.semimixin> */

    private:
        MeiElement *b;
};

class TupletPresentMixIn {
    public:
        explicit TupletPresentMixIn(MeiElement *b);
        virtual ~TupletPresentMixIn();
        /** \brief Indicates that this feature participates in a tuplet.
         * 
         *  If visual information about the tuplet needs to be recorded, then a tuplet
         *  element should be employed.
         */
        MeiAttribute* getTuplet();
        void setTuplet(std::string _tuplet);
        bool hasTuplet();
        void removeTuplet();

/* include <tupletmixin> */

    private:
        MeiElement *b;
};

class TypedMixIn {
    public:
        explicit TypedMixIn(MeiElement *b);
        virtual ~TypedMixIn();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <typemixin> */

    private:
        MeiElement *b;
};

class TypographyMixIn {
    public:
        explicit TypographyMixIn(MeiElement *b);
        virtual ~TypographyMixIn();
        /** \brief Contains the name of a font-family.
         */
        MeiAttribute* getFontfam();
        void setFontfam(std::string _fontfam);
        bool hasFontfam();
        void removeFontfam();
        /** \brief Holds the name of a font.
         */
        MeiAttribute* getFontname();
        void setFontname(std::string _fontname);
        bool hasFontname();
        void removeFontname();
        /** \brief Indicates the size of a font expressed in printers' points, i.e., 1/72nd of an
         *  inch, relative terms, e.g., small, larger, etc., or percentage values relative
         *  to normal size, e.g., 125%.
         */
        MeiAttribute* getFontsize();
        void setFontsize(std::string _fontsize);
        bool hasFontsize();
        void removeFontsize();
        /** \brief Records the style of a font, i.e., italic, oblique, or normal.
         */
        MeiAttribute* getFontstyle();
        void setFontstyle(std::string _fontstyle);
        bool hasFontstyle();
        void removeFontstyle();
        /** \brief Used to indicate bold type.
         */
        MeiAttribute* getFontweight();
        void setFontweight(std::string _fontweight);
        bool hasFontweight();
        void removeFontweight();

/* include <fontweightmixin> */

    private:
        MeiElement *b;
};

class VerticalAlignMixIn {
    public:
        explicit VerticalAlignMixIn(MeiElement *b);
        virtual ~VerticalAlignMixIn();
        /** \brief Records vertical alignment.
         */
        MeiAttribute* getValign();
        void setValign(std::string _valign);
        bool hasValign();
        void removeValign();

/* include <valignmixin> */

    private:
        MeiElement *b;
};

class VerticalGroupMixIn {
    public:
        explicit VerticalGroupMixIn(MeiElement *b);
        virtual ~VerticalGroupMixIn();
        /** \brief Provides a label for members of a vertically aligned group.
         */
        MeiAttribute* getVgrp();
        void setVgrp(std::string _vgrp);
        bool hasVgrp();
        void removeVgrp();

/* include <vgrpmixin> */

    private:
        MeiElement *b;
};

class VisibilityMixIn {
    public:
        explicit VisibilityMixIn(MeiElement *b);
        virtual ~VisibilityMixIn();
        /** \brief Indicates if a feature should be rendered when the notation is presented
         *  graphically or sounded when it is presented in an aural form.
         */
        MeiAttribute* getVisible();
        void setVisible(std::string _visible);
        bool hasVisible();
        void removeVisible();

/* include <visiblemixin> */

    private:
        MeiElement *b;
};

class VisualOffsetHoMixIn {
    public:
        explicit VisualOffsetHoMixIn(MeiElement *b);
        virtual ~VisualOffsetHoMixIn();
        /** \brief Records a horizontal adjustment to a feature’s programmatically-determined
         *  location in terms of staff interline distance; that is, in units of 1/2 the
         *  distance between adjacent staff lines.
         */
        MeiAttribute* getHo();
        void setHo(std::string _ho);
        bool hasHo();
        void removeHo();

/* include <homixin> */

    private:
        MeiElement *b;
};

class VisualOffsetToMixIn {
    public:
        explicit VisualOffsetToMixIn(MeiElement *b);
        virtual ~VisualOffsetToMixIn();
        /** \brief Specifies the end-point of the location in a normalized form.
         */
        MeiAttribute* getTo();
        void setTo(std::string _to);
        bool hasTo();
        void removeTo();

/* include <tomixin> */

    private:
        MeiElement *b;
};

class VisualOffsetVoMixIn {
    public:
        explicit VisualOffsetVoMixIn(MeiElement *b);
        virtual ~VisualOffsetVoMixIn();
        /** \brief Records the vertical adjustment of a feature’s programmatically-determined
         *  location in terms of staff interline distance; that is, in units of 1/2 the
         *  distance between adjacent staff lines.
         */
        MeiAttribute* getVo();
        void setVo(std::string _vo);
        bool hasVo();
        void removeVo();

/* include <vomixin> */

    private:
        MeiElement *b;
};

class VisualOffset2HoMixIn {
    public:
        explicit VisualOffset2HoMixIn(MeiElement *b);
        virtual ~VisualOffset2HoMixIn();
        /** \brief Records the horizontal adjustment of a feature’s programmatically-determined
         *  start point.
         */
        MeiAttribute* getStartho();
        void setStartho(std::string _startho);
        bool hasStartho();
        void removeStartho();
        /** \brief Records the horizontal adjustment of a feature’s programmatically-determined end
         *  point.
         */
        MeiAttribute* getEndho();
        void setEndho(std::string _endho);
        bool hasEndho();
        void removeEndho();

/* include <endhomixin> */

    private:
        MeiElement *b;
};

class VisualOffset2ToMixIn {
    public:
        explicit VisualOffset2ToMixIn(MeiElement *b);
        virtual ~VisualOffset2ToMixIn();
        /** \brief Records a timestamp adjustment of a feature’s programmatically-determined start
         *  point.
         */
        MeiAttribute* getStartto();
        void setStartto(std::string _startto);
        bool hasStartto();
        void removeStartto();
        /** \brief Records a timestamp adjustment of a feature’s programmatically-determined end
         *  point.
         */
        MeiAttribute* getEndto();
        void setEndto(std::string _endto);
        bool hasEndto();
        void removeEndto();

/* include <endtomixin> */

    private:
        MeiElement *b;
};

class VisualOffset2VoMixIn {
    public:
        explicit VisualOffset2VoMixIn(MeiElement *b);
        virtual ~VisualOffset2VoMixIn();
        /** \brief Records a vertical adjustment of a feature’s programmatically-determined start
         *  point.
         */
        MeiAttribute* getStartvo();
        void setStartvo(std::string _startvo);
        bool hasStartvo();
        void removeStartvo();
        /** \brief Records a vertical adjustment of a feature’s programmatically-determined end
         *  point.
         */
        MeiAttribute* getEndvo();
        void setEndvo(std::string _endvo);
        bool hasEndvo();
        void removeEndvo();

/* include <endvomixin> */

    private:
        MeiElement *b;
};

class VoltaGroupingSymMixIn {
    public:
        explicit VoltaGroupingSymMixIn(MeiElement *b);
        virtual ~VoltaGroupingSymMixIn();
        /** \brief Specifies the symbol used to group lyrics.
         */
        MeiAttribute* getVoltasym();
        void setVoltasym(std::string _voltasym);
        bool hasVoltasym();
        void removeVoltasym();

/* include <voltasymmixin> */

    private:
        MeiElement *b;
};

class WhitespaceMixIn {
    public:
        explicit WhitespaceMixIn(MeiElement *b);
        virtual ~WhitespaceMixIn();
        /** \brief 
         */
        MeiAttribute* getSpace();
        void setSpace(std::string _space);
        bool hasSpace();
        void removeSpace();

/* include <spacemixin> */

    private:
        MeiElement *b;
};

class WidthMixIn {
    public:
        explicit WidthMixIn(MeiElement *b);
        virtual ~WidthMixIn();
        /** \brief Measurement of the horizontal dimension of an entity.
         */
        MeiAttribute* getWidth();
        void setWidth(std::string _width);
        bool hasWidth();
        void removeWidth();

/* include <widthmixin> */

    private:
        MeiElement *b;
};

class XyMixIn {
    public:
        explicit XyMixIn(MeiElement *b);
        virtual ~XyMixIn();
        /** \brief Encodes an x coordinate for a feature in an output coordinate system.
         * 
         *  When it is necessary to record the placement of a feature in a facsimile image,
         *  use the facs attribute.
         */
        MeiAttribute* getX();
        void setX(std::string _x);
        bool hasX();
        void removeX();
        /** \brief Encodes a y coordinate for a feature in an output coordinate system.
         * 
         *  When it is necessary to record the placement of a feature in a facsimile image,
         *  use the facs attribute.
         */
        MeiAttribute* getY();
        void setY(std::string _y);
        bool hasY();
        void removeY();

/* include <ymixin> */

    private:
        MeiElement *b;
};

class Xy2MixIn {
    public:
        explicit Xy2MixIn(MeiElement *b);
        virtual ~Xy2MixIn();
        /** \brief Encodes the optional 2nd x coordinate.
         */
        MeiAttribute* getX2();
        void setX2(std::string _x2);
        bool hasX2();
        void removeX2();
        /** \brief Encodes the optional 2nd y coordinate.
         */
        MeiAttribute* getY2();
        void setY2(std::string _y2);
        bool hasY2();
        void removeY2();

/* include <y2mixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // SHAREDMIXIN_H_
