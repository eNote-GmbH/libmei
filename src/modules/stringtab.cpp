#include "stringtab.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Barre::Barre() :
    MeiElement("barre"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StartEndId(this),
    m_StartId(this)
{
}
REGISTER_DEFINITION(mei::Barre, "barre");
mei::Barre::~Barre() {}
mei::Barre::Barre(const Barre &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_StartEndId(this),
    m_StartId(this)
{
}

MeiAttribute* mei::Barre::getFret() {
    if (!hasAttribute("fret")) {
        return NULL;
    }
    return getAttribute("fret");
};

void mei::Barre::setFret(std::string _fret) {
    MeiAttribute *a = new MeiAttribute("fret", _fret);
    addAttribute(a);
};

bool mei::Barre::hasFret() {
    return hasAttribute("fret");
};

void mei::Barre::removeFret() {
    removeAttribute("fret");
};
/* include <barre> */



