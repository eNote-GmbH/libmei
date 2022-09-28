#include "corpus.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::MeiCorpus::MeiCorpus() :
    MeiElement("meiCorpus"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MeiVersion(this)
{
}
REGISTER_DEFINITION(mei::MeiCorpus, "meiCorpus");
mei::MeiCorpus::~MeiCorpus() {}
mei::MeiCorpus::MeiCorpus(const MeiCorpus &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MeiVersion(this)
{
}

/* include <meiCorpus> */



