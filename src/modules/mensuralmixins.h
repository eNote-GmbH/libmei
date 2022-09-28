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

#ifndef MENSURALMIXIN_H_
#define MENSURALMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class DurationQualityMixIn {
    public:
        explicit DurationQualityMixIn(MeiElement *b);
        virtual ~DurationQualityMixIn();
        /** \brief Encodes the durational quality of a mensural note using the values provided by
         *  the data.DURQUALITY.mensural datatype (i.e., the perfect / imperfect / altered /
         *  major / minor / duplex quality of a note).
         */
        MeiAttribute* getDurQuality();
        void setDurQuality(std::string _durquality);
        bool hasDurQuality();
        void removeDurQuality();

/* include <dur.qualitymixin> */

    private:
        MeiElement *b;
};

class MensuralLogMixIn {
    public:
        explicit MensuralLogMixIn(MeiElement *b);
        virtual ~MensuralLogMixIn();
        /** \brief Together, proport.num and proport.numbase specify a proportional change as a
         *  ratio, e.g., 1:3.
         * 
         *  Proport.num is for the first value in the ratio.
         */
        MeiAttribute* getProportNum();
        void setProportNum(std::string _proportnum);
        bool hasProportNum();
        void removeProportNum();
        /** \brief Together, proport.num and proport.numbase specify a proportional change as a
         *  ratio, e.g., 1:3.
         * 
         *  Proport.numbase is for the second value in the ratio.
         */
        MeiAttribute* getProportNumbase();
        void setProportNumbase(std::string _proportnumbase);
        bool hasProportNumbase();
        void removeProportNumbase();

/* include <proport.numbasemixin> */

    private:
        MeiElement *b;
};

class MensuralSharedMixIn {
    public:
        explicit MensuralSharedMixIn(MeiElement *b);
        virtual ~MensuralSharedMixIn();
        /** \brief Describes the maxima-long relationship.
         */
        MeiAttribute* getModusmaior();
        void setModusmaior(std::string _modusmaior);
        bool hasModusmaior();
        void removeModusmaior();
        /** \brief Describes the long-breve relationship.
         */
        MeiAttribute* getModusminor();
        void setModusminor(std::string _modusminor);
        bool hasModusminor();
        void removeModusminor();
        /** \brief Describes the semibreve-minim relationship.
         */
        MeiAttribute* getProlatio();
        void setProlatio(std::string _prolatio);
        bool hasProlatio();
        void removeProlatio();
        /** \brief Describes the breve-semibreve relationship.
         */
        MeiAttribute* getTempus();
        void setTempus(std::string _tempus);
        bool hasTempus();
        void removeTempus();
        /** \brief Describes the divisions of the breve in use in 14th-century Italy.
         */
        MeiAttribute* getDivisio();
        void setDivisio(std::string _divisio);
        bool hasDivisio();
        void removeDivisio();

/* include <divisiomixin> */

    private:
        MeiElement *b;
};

class NoteVisMensuralMixIn {
    public:
        explicit NoteVisMensuralMixIn(MeiElement *b);
        virtual ~NoteVisMensuralMixIn();
        /** \brief Indicates this element’s participation in a ligature.
         */
        MeiAttribute* getLig();
        void setLig(std::string _lig);
        bool hasLig();
        void removeLig();

/* include <ligmixin> */

    private:
        MeiElement *b;
};

class PlicaVisMixIn {
    public:
        explicit PlicaVisMixIn(MeiElement *b);
        virtual ~PlicaVisMixIn();
        /** \brief Records the position of the piano damper pedal.
         */
        MeiAttribute* getDir();
        void setDir(std::string _dir);
        bool hasDir();
        void removeDir();
        /** \brief Encodes the stem length.
         */
        MeiAttribute* getLen();
        void setLen(std::string _len);
        bool hasLen();
        void removeLen();

/* include <lenmixin> */

    private:
        MeiElement *b;
};

class RestVisMensuralMixIn {
    public:
        explicit RestVisMensuralMixIn(MeiElement *b);
        virtual ~RestVisMensuralMixIn();
        /** \brief States how many spaces are covered by the rest.
         */
        MeiAttribute* getSpaces();
        void setSpaces(std::string _spaces);
        bool hasSpaces();
        void removeSpaces();

/* include <spacesmixin> */

    private:
        MeiElement *b;
};

class StemVisMixIn {
    public:
        explicit StemVisMixIn(MeiElement *b);
        virtual ~StemVisMixIn();
        /** \brief Records the position of the stem in relation to the note head(s).
         */
        MeiAttribute* getPos();
        void setPos(std::string _pos);
        bool hasPos();
        void removePos();
        /** \brief Encodes the stem length.
         */
        MeiAttribute* getLen();
        void setLen(std::string _len);
        bool hasLen();
        void removeLen();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Records the position of the piano damper pedal.
         */
        MeiAttribute* getDir();
        void setDir(std::string _dir);
        bool hasDir();
        void removeDir();
        /** \brief Records the position of the flag using the values provided by the
         *  data.FLAGPOS.mensural datatype.
         */
        MeiAttribute* getFlagPos();
        void setFlagPos(std::string _flagpos);
        bool hasFlagPos();
        void removeFlagPos();
        /** \brief Encodes the form of the flag using the values provided by the
         *  data.FLAGFORM.mensural datatype.
         */
        MeiAttribute* getFlagForm();
        void setFlagForm(std::string _flagform);
        bool hasFlagForm();
        void removeFlagForm();

/* include <flag.formmixin> */

    private:
        MeiElement *b;
};

class StemsMensuralMixIn {
    public:
        explicit StemsMensuralMixIn(MeiElement *b);
        virtual ~StemsMensuralMixIn();
        /** \brief Records the form of the stem.
         */
        MeiAttribute* getStemForm();
        void setStemForm(std::string _stemform);
        bool hasStemForm();
        void removeStemForm();

/* include <stem.formmixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // MENSURALMIXIN_H_
