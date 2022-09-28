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

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "facsimilemixins.h"
#include "sharedmixins.h"
#include <string>


namespace mei {
/** \brief Contains a formal list or prose description of topics addressed.
 */
class MEI_EXPORT Argument : public MeiElement {
    public:
        Argument();
        Argument(const Argument &other);
        virtual ~Argument();

/* include <argument> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Argument);
};

/** \brief (back matter) – Contains any appendixes, advertisements, indexes, etc.
 * 
 *  following the main body of a musical text.
 */
class MEI_EXPORT Back : public MeiElement {
    public:
        Back();
        Back(const Back &other);
        virtual ~Back();

/* include <back> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Back);
};

/** \brief Contains a quotation, anonymous or attributed, appearing on a title page.
 */
class MEI_EXPORT Epigraph : public MeiElement {
    public:
        Epigraph();
        Epigraph(const Epigraph &other);
        virtual ~Epigraph();

/* include <epigraph> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Epigraph);
};

/** \brief (front matter) – Bundles prefatory text found before the start of the musical
 *  text.
 */
class MEI_EXPORT Front : public MeiElement {
    public:
        Front();
        Front(const Front &other);
        virtual ~Front();

/* include <front> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Front);
};

/** \brief Contains a formal statement authorizing the publication of a work, sometimes
 *  required to appear on a title page or its verso.
 */
class MEI_EXPORT Imprimatur : public MeiElement {
    public:
        Imprimatur();
        Imprimatur(const Imprimatur &other);
        virtual ~Imprimatur();

/* include <imprimatur> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        MetadataPointingMixIn    m_MetadataPointing;

    private:
        REGISTER_DECLARATION(Imprimatur);
};

/** \brief (line of text) – Contains a single line of text within a line group.
 */
class MEI_EXPORT L : public MeiElement {
    public:
        L();
        L(const L &other);
        virtual ~L();
        /** \brief Used to specify a rhythm for the lyric syllables that differs from that of the
         *  notes on the staff, e.g., '4,4,4,4' when the rhythm of the notes is '4.,8,4.,8'.
         */
        MeiAttribute* getRhythm();
        void setRhythm(std::string _rhythm);
        bool hasRhythm();
        void removeRhythm();

/* include <l> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(L);
};

/** \brief (list item) – Single item in a list.
 */
class MEI_EXPORT Li : public MeiElement {
    public:
        Li();
        Li(const Li &other);
        virtual ~Li();

/* include <li> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Li);
};

/** \brief A formatting element that contains a series of items separated from one another
 *  and arranged in a linear, often vertical, sequence.
 */
class MEI_EXPORT List : public MeiElement {
    public:
        List();
        List(const List &other);
        virtual ~List();
        /** \brief Indicates to what degree the harmonic label is supported by the notation.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <list> */

        BasicMixIn    m_Basic;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LabelledMixIn    m_Labelled;
        LangMixIn    m_Lang;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(List);
};

/** \brief (quoted) – Contains material which is distinguished from the surrounding phrase-
 *  level text using quotation marks or a similar method.
 * 
 *  Use quote for block-level quotations.
 */
class MEI_EXPORT Q : public MeiElement {
    public:
        Q();
        Q(const Q &other);
        virtual ~Q();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <q> */

        BasicMixIn    m_Basic;
        ClassedMixIn    m_Classed;
        LabelledMixIn    m_Labelled;
        LangMixIn    m_Lang;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Q);
};

/** \brief (quoted material) – Contains a paragraph-like block of text attributed to an
 *  external source, normally set off from the surrounding text by spacing or other
 *  typographic distinction.
 */
class MEI_EXPORT Quote : public MeiElement {
    public:
        Quote();
        Quote(const Quote &other);
        virtual ~Quote();

/* include <quote> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Quote);
};

/** \brief (arbitrary segment) represents any segmentation of text below the "text
 *  component" level.
 */
class MEI_EXPORT Seg : public MeiElement {
    public:
        Seg();
        Seg(const Seg &other);
        virtual ~Seg();

/* include <seg> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Seg);
};
} // namespace mei
#endif // TEXT_H_
