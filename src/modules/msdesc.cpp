#include "msdesc.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AccMat::AccMat() :
    MeiElement("accMat"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AccMat, "accMat");
mei::AccMat::~AccMat() {}
mei::AccMat::AccMat(const AccMat &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <accMat> */

mei::AddDesc::AddDesc() :
    MeiElement("addDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AddDesc, "addDesc");
mei::AddDesc::~AddDesc() {}
mei::AddDesc::AddDesc(const AddDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <addDesc> */

mei::Binding::Binding() :
    MeiElement("binding"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Binding, "binding");
mei::Binding::~Binding() {}
mei::Binding::Binding(const Binding &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Binding::getContemporary() {
    if (!hasAttribute("contemporary")) {
        return NULL;
    }
    return getAttribute("contemporary");
};

void mei::Binding::setContemporary(std::string _contemporary) {
    MeiAttribute *a = new MeiAttribute("contemporary", _contemporary);
    addAttribute(a);
};

bool mei::Binding::hasContemporary() {
    return hasAttribute("contemporary");
};

void mei::Binding::removeContemporary() {
    removeAttribute("contemporary");
};
/* include <binding> */

mei::BindingDesc::BindingDesc() :
    MeiElement("bindingDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::BindingDesc, "bindingDesc");
mei::BindingDesc::~BindingDesc() {}
mei::BindingDesc::BindingDesc(const BindingDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <bindingDesc> */

mei::Catchwords::Catchwords() :
    MeiElement("catchwords"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Catchwords, "catchwords");
mei::Catchwords::~Catchwords() {}
mei::Catchwords::Catchwords(const Catchwords &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <catchwords> */

mei::Collation::Collation() :
    MeiElement("collation"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Collation, "collation");
mei::Collation::~Collation() {}
mei::Collation::Collation(const Collation &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <collation> */

mei::Colophon::Colophon() :
    MeiElement("colophon"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Colophon, "colophon");
mei::Colophon::~Colophon() {}
mei::Colophon::Colophon(const Colophon &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <colophon> */

mei::DecoDesc::DecoDesc() :
    MeiElement("decoDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::DecoDesc, "decoDesc");
mei::DecoDesc::~DecoDesc() {}
mei::DecoDesc::DecoDesc(const DecoDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <decoDesc> */

mei::DecoNote::DecoNote() :
    MeiElement("decoNote"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::DecoNote, "decoNote");
mei::DecoNote::~DecoNote() {}
mei::DecoNote::DecoNote(const DecoNote &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <decoNote> */

mei::Explicit::Explicit() :
    MeiElement("explicit"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Explicit, "explicit");
mei::Explicit::~Explicit() {}
mei::Explicit::Explicit(const Explicit &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <explicit> */

mei::Foliation::Foliation() :
    MeiElement("foliation"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Foliation, "foliation");
mei::Foliation::~Foliation() {}
mei::Foliation::Foliation(const Foliation &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <foliation> */

mei::Heraldry::Heraldry() :
    MeiElement("heraldry"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Heraldry, "heraldry");
mei::Heraldry::~Heraldry() {}
mei::Heraldry::Heraldry(const Heraldry &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <heraldry> */

mei::Layout::Layout() :
    MeiElement("layout"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Layout, "layout");
mei::Layout::~Layout() {}
mei::Layout::Layout(const Layout &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Layout::getCols() {
    if (!hasAttribute("cols")) {
        return NULL;
    }
    return getAttribute("cols");
};

void mei::Layout::setCols(std::string _cols) {
    MeiAttribute *a = new MeiAttribute("cols", _cols);
    addAttribute(a);
};

bool mei::Layout::hasCols() {
    return hasAttribute("cols");
};

void mei::Layout::removeCols() {
    removeAttribute("cols");
};
MeiAttribute* mei::Layout::getRuledlines() {
    if (!hasAttribute("ruledlines")) {
        return NULL;
    }
    return getAttribute("ruledlines");
};

void mei::Layout::setRuledlines(std::string _ruledlines) {
    MeiAttribute *a = new MeiAttribute("ruledlines", _ruledlines);
    addAttribute(a);
};

bool mei::Layout::hasRuledlines() {
    return hasAttribute("ruledlines");
};

void mei::Layout::removeRuledlines() {
    removeAttribute("ruledlines");
};
MeiAttribute* mei::Layout::getWrittenlines() {
    if (!hasAttribute("writtenlines")) {
        return NULL;
    }
    return getAttribute("writtenlines");
};

void mei::Layout::setWrittenlines(std::string _writtenlines) {
    MeiAttribute *a = new MeiAttribute("writtenlines", _writtenlines);
    addAttribute(a);
};

bool mei::Layout::hasWrittenlines() {
    return hasAttribute("writtenlines");
};

void mei::Layout::removeWrittenlines() {
    removeAttribute("writtenlines");
};
MeiAttribute* mei::Layout::getRuledstaves() {
    if (!hasAttribute("ruledstaves")) {
        return NULL;
    }
    return getAttribute("ruledstaves");
};

void mei::Layout::setRuledstaves(std::string _ruledstaves) {
    MeiAttribute *a = new MeiAttribute("ruledstaves", _ruledstaves);
    addAttribute(a);
};

bool mei::Layout::hasRuledstaves() {
    return hasAttribute("ruledstaves");
};

void mei::Layout::removeRuledstaves() {
    removeAttribute("ruledstaves");
};
MeiAttribute* mei::Layout::getWrittenstaves() {
    if (!hasAttribute("writtenstaves")) {
        return NULL;
    }
    return getAttribute("writtenstaves");
};

void mei::Layout::setWrittenstaves(std::string _writtenstaves) {
    MeiAttribute *a = new MeiAttribute("writtenstaves", _writtenstaves);
    addAttribute(a);
};

bool mei::Layout::hasWrittenstaves() {
    return hasAttribute("writtenstaves");
};

void mei::Layout::removeWrittenstaves() {
    removeAttribute("writtenstaves");
};
/* include <layout> */

mei::LayoutDesc::LayoutDesc() :
    MeiElement("layoutDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::LayoutDesc, "layoutDesc");
mei::LayoutDesc::~LayoutDesc() {}
mei::LayoutDesc::LayoutDesc(const LayoutDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <layoutDesc> */

mei::Locus::Locus() :
    MeiElement("locus"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Locus, "locus");
mei::Locus::~Locus() {}
mei::Locus::Locus(const Locus &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Locus::getScheme() {
    if (!hasAttribute("scheme")) {
        return NULL;
    }
    return getAttribute("scheme");
};

void mei::Locus::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::Locus::hasScheme() {
    return hasAttribute("scheme");
};

void mei::Locus::removeScheme() {
    removeAttribute("scheme");
};
MeiAttribute* mei::Locus::getFrom() {
    if (!hasAttribute("from")) {
        return NULL;
    }
    return getAttribute("from");
};

void mei::Locus::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::Locus::hasFrom() {
    return hasAttribute("from");
};

void mei::Locus::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::Locus::getTo() {
    if (!hasAttribute("to")) {
        return NULL;
    }
    return getAttribute("to");
};

void mei::Locus::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::Locus::hasTo() {
    return hasAttribute("to");
};

void mei::Locus::removeTo() {
    removeAttribute("to");
};
/* include <locus> */

mei::LocusGrp::LocusGrp() :
    MeiElement("locusGrp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::LocusGrp, "locusGrp");
mei::LocusGrp::~LocusGrp() {}
mei::LocusGrp::LocusGrp(const LocusGrp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

MeiAttribute* mei::LocusGrp::getScheme() {
    if (!hasAttribute("scheme")) {
        return NULL;
    }
    return getAttribute("scheme");
};

void mei::LocusGrp::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::LocusGrp::hasScheme() {
    return hasAttribute("scheme");
};

void mei::LocusGrp::removeScheme() {
    removeAttribute("scheme");
};
/* include <locusGrp> */

mei::Rubric::Rubric() :
    MeiElement("rubric"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Rubric, "rubric");
mei::Rubric::~Rubric() {}
mei::Rubric::Rubric(const Rubric &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Rubric::getFunc() {
    if (!hasAttribute("func")) {
        return NULL;
    }
    return getAttribute("func");
};

void mei::Rubric::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    addAttribute(a);
};

bool mei::Rubric::hasFunc() {
    return hasAttribute("func");
};

void mei::Rubric::removeFunc() {
    removeAttribute("func");
};
/* include <rubric> */

mei::ScriptDesc::ScriptDesc() :
    MeiElement("scriptDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ScriptDesc, "scriptDesc");
mei::ScriptDesc::~ScriptDesc() {}
mei::ScriptDesc::ScriptDesc(const ScriptDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <scriptDesc> */

mei::ScriptNote::ScriptNote() :
    MeiElement("scriptNote"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ScriptNote, "scriptNote");
mei::ScriptNote::~ScriptNote() {}
mei::ScriptNote::ScriptNote(const ScriptNote &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <scriptNote> */

mei::Seal::Seal() :
    MeiElement("seal"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Seal, "seal");
mei::Seal::~Seal() {}
mei::Seal::Seal(const Seal &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_Lang(this)
{
}

MeiAttribute* mei::Seal::getContemporary() {
    if (!hasAttribute("contemporary")) {
        return NULL;
    }
    return getAttribute("contemporary");
};

void mei::Seal::setContemporary(std::string _contemporary) {
    MeiAttribute *a = new MeiAttribute("contemporary", _contemporary);
    addAttribute(a);
};

bool mei::Seal::hasContemporary() {
    return hasAttribute("contemporary");
};

void mei::Seal::removeContemporary() {
    removeAttribute("contemporary");
};
/* include <seal> */

mei::SealDesc::SealDesc() :
    MeiElement("sealDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::SealDesc, "sealDesc");
mei::SealDesc::~SealDesc() {}
mei::SealDesc::SealDesc(const SealDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <sealDesc> */

mei::SecFolio::SecFolio() :
    MeiElement("secFolio"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::SecFolio, "secFolio");
mei::SecFolio::~SecFolio() {}
mei::SecFolio::SecFolio(const SecFolio &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <secFolio> */

mei::Signatures::Signatures() :
    MeiElement("signatures"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Signatures, "signatures");
mei::Signatures::~Signatures() {}
mei::Signatures::Signatures(const Signatures &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <signatures> */

mei::Stamp::Stamp() :
    MeiElement("stamp"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Stamp, "stamp");
mei::Stamp::~Stamp() {}
mei::Stamp::Stamp(const Stamp &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Datable(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <stamp> */

mei::Support::Support() :
    MeiElement("support"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Support, "support");
mei::Support::~Support() {}
mei::Support::Support(const Support &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <support> */

mei::SupportDesc::SupportDesc() :
    MeiElement("supportDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::SupportDesc, "supportDesc");
mei::SupportDesc::~SupportDesc() {}
mei::SupportDesc::SupportDesc(const SupportDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

MeiAttribute* mei::SupportDesc::getMaterial() {
    if (!hasAttribute("material")) {
        return NULL;
    }
    return getAttribute("material");
};

void mei::SupportDesc::setMaterial(std::string _material) {
    MeiAttribute *a = new MeiAttribute("material", _material);
    addAttribute(a);
};

bool mei::SupportDesc::hasMaterial() {
    return hasAttribute("material");
};

void mei::SupportDesc::removeMaterial() {
    removeAttribute("material");
};
/* include <supportDesc> */

mei::TypeDesc::TypeDesc() :
    MeiElement("typeDesc"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::TypeDesc, "typeDesc");
mei::TypeDesc::~TypeDesc() {}
mei::TypeDesc::TypeDesc(const TypeDesc &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <typeDesc> */

mei::TypeNote::TypeNote() :
    MeiElement("typeNote"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::TypeNote, "typeNote");
mei::TypeNote::~TypeNote() {}
mei::TypeNote::TypeNote(const TypeNote &other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <typeNote> */



