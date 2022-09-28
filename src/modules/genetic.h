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

#ifndef GENETIC_H_
#define GENETIC_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include <string>


namespace mei {
/** \brief (genetic description) - Bundles information about the textual development of a
 *  work.
 */
class MEI_EXPORT GenDesc : public MeiElement {
    public:
        GenDesc();
        GenDesc(const GenDesc &other);
        virtual ~GenDesc();
        /** \brief When set to "true" the child elements are known to be in chronological order.
         * 
         *  When set to "false" or when not provided, the order of child elements is
         *  unknown.
         */
        MeiAttribute* getOrdered();
        void setOrdered(std::string _ordered);
        bool hasOrdered();
        void removeOrdered();

/* include <genDesc> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(GenDesc);
};

/** \brief Describes a distinctive state in the textual development of a work.
 */
class MEI_EXPORT GenState : public MeiElement {
    public:
        GenState();
        GenState(const GenState &other);
        virtual ~GenState();

/* include <genState> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;
        DataPointingMixIn    m_DataPointing;
        MetadataPointingMixIn    m_MetadataPointing;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(GenState);
};
} // namespace mei
#endif // GENETIC_H_
