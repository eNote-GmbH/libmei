#include "critapp.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::App::App() :
    MeiElement("app"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}
REGISTER_DEFINITION(mei::App, "app");
mei::App::~App() {}
mei::App::App(const App &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this)
{
}

/* include <app> */

mei::Lem::Lem() :
    MeiElement("lem"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Crit(this),
    m_HandIdent(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Lem, "lem");
mei::Lem::~Lem() {}
mei::Lem::Lem(const Lem &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Crit(this),
    m_HandIdent(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

/* include <lem> */

mei::Rdg::Rdg() :
    MeiElement("rdg"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Crit(this),
    m_HandIdent(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Rdg, "rdg");
mei::Rdg::~Rdg() {}
mei::Rdg::Rdg(const Rdg &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Crit(this),
    m_HandIdent(this),
    m_Sequence(this),
    m_Source(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

/* include <rdg> */



