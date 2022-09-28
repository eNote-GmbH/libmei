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

#ifndef HEADERMIXIN_H_
#define HEADERMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class BifoliumSurfacesMixIn {
    public:
        explicit BifoliumSurfacesMixIn(MeiElement *b);
        virtual ~BifoliumSurfacesMixIn();
        /** \brief A reference to a surface element positioned on the outer recto side of a
         *  (folded) sheet.
         */
        MeiAttribute* getOuterRecto();
        void setOuterRecto(std::string _outerrecto);
        bool hasOuterRecto();
        void removeOuterRecto();
        /** \brief A reference to a surface element positioned on the inner verso side of a
         *  (folded) sheet.
         */
        MeiAttribute* getInnerVerso();
        void setInnerVerso(std::string _innerverso);
        bool hasInnerVerso();
        void removeInnerVerso();
        /** \brief A reference to a surface element positioned on the inner recto side of a
         *  (folded) sheet.
         */
        MeiAttribute* getInnerRecto();
        void setInnerRecto(std::string _innerrecto);
        bool hasInnerRecto();
        void removeInnerRecto();
        /** \brief A reference to a surface element positioned on the outer verso side of a
         *  (folded) sheet.
         */
        MeiAttribute* getOuterVerso();
        void setOuterVerso(std::string _outerverso);
        bool hasOuterVerso();
        void removeOuterVerso();

/* include <outer.versomixin> */

    private:
        MeiElement *b;
};

class FoliumSurfacesMixIn {
    public:
        explicit FoliumSurfacesMixIn(MeiElement *b);
        virtual ~FoliumSurfacesMixIn();
        /** \brief A reference to a surface element positioned on the recto side of the sheet.
         */
        MeiAttribute* getRecto();
        void setRecto(std::string _recto);
        bool hasRecto();
        void removeRecto();
        /** \brief A reference to a surface element positioned on the verso side of the sheet.
         */
        MeiAttribute* getVerso();
        void setVerso(std::string _verso);
        bool hasVerso();
        void removeVerso();

/* include <versomixin> */

    private:
        MeiElement *b;
};

class RecordTypeMixIn {
    public:
        explicit RecordTypeMixIn(MeiElement *b);
        virtual ~RecordTypeMixIn();
        /** \brief 
         */
        MeiAttribute* getRecordtype();
        void setRecordtype(std::string _recordtype);
        bool hasRecordtype();
        void removeRecordtype();

/* include <recordtypemixin> */

    private:
        MeiElement *b;
};

class RegularMethodMixIn {
    public:
        explicit RegularMethodMixIn(MeiElement *b);
        virtual ~RegularMethodMixIn();
        /** \brief Indicates the method employed to mark corrections and normalizations.
         */
        MeiAttribute* getMethod();
        void setMethod(std::string _method);
        bool hasMethod();
        void removeMethod();

/* include <methodmixin> */

    private:
        MeiElement *b;
};
} // namespace mei
#endif // HEADERMIXIN_H_
