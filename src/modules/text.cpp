#include "text.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Argument::Argument() :
    MeiElement("argument"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Argument, "argument");
mei::Argument::~Argument() {}
mei::Argument::Argument(const Argument &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}

/* include <argument> */

mei::Back::Back() :
    MeiElement("back"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Back, "back");
mei::Back::~Back() {}
mei::Back::Back(const Back &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}

/* include <back> */

mei::Epigraph::Epigraph() :
    MeiElement("epigraph"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Epigraph, "epigraph");
mei::Epigraph::~Epigraph() {}
mei::Epigraph::Epigraph(const Epigraph &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}

/* include <epigraph> */

mei::Front::Front() :
    MeiElement("front"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Front, "front");
mei::Front::~Front() {}
mei::Front::Front(const Front &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}

/* include <front> */

mei::Imprimatur::Imprimatur() :
    MeiElement("imprimatur"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Imprimatur, "imprimatur");
mei::Imprimatur::~Imprimatur() {}
mei::Imprimatur::Imprimatur(const Imprimatur &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_MetadataPointing(this)
{
}

/* include <imprimatur> */

mei::L::L() :
    MeiElement("l"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::L, "l");
mei::L::~L() {}
mei::L::L(const L &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::L::getRhythm() {
    if (!hasAttribute("rhythm")) {
        return NULL;
    }
    return getAttribute("rhythm");
};

void mei::L::setRhythm(std::string _rhythm) {
    MeiAttribute *a = new MeiAttribute("rhythm", _rhythm);
    addAttribute(a);
};

bool mei::L::hasRhythm() {
    return hasAttribute("rhythm");
};

void mei::L::removeRhythm() {
    removeAttribute("rhythm");
};
/* include <l> */

mei::Li::Li() :
    MeiElement("li"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Li, "li");
mei::Li::~Li() {}
mei::Li::Li(const Li &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <li> */

mei::List::List() :
    MeiElement("list"),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::List, "list");
mei::List::~List() {}
mei::List::List(const List &other) :
    MeiElement(other),
    m_Basic(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Xy(this)
{
}

MeiAttribute* mei::List::getForm() {
    if (!hasAttribute("form")) {
        return NULL;
    }
    return getAttribute("form");
};

void mei::List::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::List::hasForm() {
    return hasAttribute("form");
};

void mei::List::removeForm() {
    removeAttribute("form");
};
MeiAttribute* mei::List::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::List::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::List::hasType() {
    return hasAttribute("type");
};

void mei::List::removeType() {
    removeAttribute("type");
};
/* include <list> */

mei::Q::Q() :
    MeiElement("q"),
    m_Basic(this),
    m_Classed(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Q, "q");
mei::Q::~Q() {}
mei::Q::Q(const Q &other) :
    MeiElement(other),
    m_Basic(this),
    m_Classed(this),
    m_Labelled(this),
    m_Lang(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Q::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::Q::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Q::hasType() {
    return hasAttribute("type");
};

void mei::Q::removeType() {
    removeAttribute("type");
};
/* include <q> */

mei::Quote::Quote() :
    MeiElement("quote"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Quote, "quote");
mei::Quote::~Quote() {}
mei::Quote::Quote(const Quote &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}

/* include <quote> */

mei::Seg::Seg() :
    MeiElement("seg"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Seg, "seg");
mei::Seg::~Seg() {}
mei::Seg::Seg(const Seg &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <seg> */



