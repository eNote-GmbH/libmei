#include "ptrref.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Ptr::Ptr() :
    MeiElement("ptr"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_InternetMedia(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Ptr, "ptr");
mei::Ptr::~Ptr() {}
mei::Ptr::Ptr(const Ptr &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_InternetMedia(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

/* include <ptr> */

mei::Ref::Ref() :
    MeiElement("ref"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_InternetMedia(this),
    m_Lang(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}
REGISTER_DEFINITION(mei::Ref, "ref");
mei::Ref::~Ref() {}
mei::Ref::Ref(const Ref &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_InternetMedia(this),
    m_Lang(this),
    m_MetadataPointing(this),
    m_Pointing(this),
    m_TargetEval(this)
{
}

/* include <ref> */



