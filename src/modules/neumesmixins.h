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

#ifndef NEUMESMIXIN_H_
#define NEUMESMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class NcLogMixIn {
    public:
        explicit NcLogMixIn(MeiElement *b);
        virtual ~NcLogMixIn();
        /** \brief Captures written octave information.
         */
        MeiAttribute* getOct();
        void setOct(std::string _oct);
        bool hasOct();
        void removeOct();
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

class NcFormMixIn {
    public:
        explicit NcFormMixIn(MeiElement *b);
        virtual ~NcFormMixIn();
        /** \brief 
         */
        MeiAttribute* getAngled();
        void setAngled(std::string _angled);
        bool hasAngled();
        void removeAngled();
        /** \brief Connection to the previous component within the same neume; this attribute
         *  should not be used for the first component of a neume.
         */
        MeiAttribute* getCon();
        void setCon(std::string _con);
        bool hasCon();
        void removeCon();
        /** \brief Records direction of curvature.
         */
        MeiAttribute* getCurve();
        void setCurve(std::string _curve);
        bool hasCurve();
        void removeCurve();
        /** \brief Pen stroke has an extension; specific to Hispanic notation.
         */
        MeiAttribute* getHooked();
        void setHooked(std::string _hooked);
        bool hasHooked();
        void removeHooked();
        /** \brief Indicates participation in a ligature.
         */
        MeiAttribute* getLigated();
        void setLigated(std::string _ligated);
        bool hasLigated();
        void removeLigated();
        /** \brief Length of the pen stroke relative to the previous component within the same
         *  neume; this attribute should not be used for the first component of a neume.
         */
        MeiAttribute* getRellen();
        void setRellen(std::string _rellen);
        bool hasRellen();
        void removeRellen();
        /** \brief 
         */
        MeiAttribute* getSShape();
        void setSShape(std::string _sShape);
        bool hasSShape();
        void removeSShape();
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
} // namespace mei
#endif // NEUMESMIXIN_H_
