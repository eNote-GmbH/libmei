#include "externalsymbolsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ExtSymMixIn::ExtSymMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExtSymMixIn::~ExtSymMixIn() {}
MeiAttribute* mei::ExtSymMixIn::getGlyphAuth() {
    if (!b->hasAttribute("glyph.auth")) {
        return NULL;
    }
    return b->getAttribute("glyph.auth");
};

void mei::ExtSymMixIn::setGlyphAuth(std::string _glyphauth) {
    MeiAttribute *a = new MeiAttribute("glyph.auth", _glyphauth);
    b->addAttribute(a);
};

bool mei::ExtSymMixIn::hasGlyphAuth() {
    return b->hasAttribute("glyph.auth");
};

void mei::ExtSymMixIn::removeGlyphAuth() {
    b->removeAttribute("glyph.auth");
};
MeiAttribute* mei::ExtSymMixIn::getGlyphName() {
    if (!b->hasAttribute("glyph.name")) {
        return NULL;
    }
    return b->getAttribute("glyph.name");
};

void mei::ExtSymMixIn::setGlyphName(std::string _glyphname) {
    MeiAttribute *a = new MeiAttribute("glyph.name", _glyphname);
    b->addAttribute(a);
};

bool mei::ExtSymMixIn::hasGlyphName() {
    return b->hasAttribute("glyph.name");
};

void mei::ExtSymMixIn::removeGlyphName() {
    b->removeAttribute("glyph.name");
};
MeiAttribute* mei::ExtSymMixIn::getGlyphNum() {
    if (!b->hasAttribute("glyph.num")) {
        return NULL;
    }
    return b->getAttribute("glyph.num");
};

void mei::ExtSymMixIn::setGlyphNum(std::string _glyphnum) {
    MeiAttribute *a = new MeiAttribute("glyph.num", _glyphnum);
    b->addAttribute(a);
};

bool mei::ExtSymMixIn::hasGlyphNum() {
    return b->hasAttribute("glyph.num");
};

void mei::ExtSymMixIn::removeGlyphNum() {
    b->removeAttribute("glyph.num");
};
MeiAttribute* mei::ExtSymMixIn::getGlyphUri() {
    if (!b->hasAttribute("glyph.uri")) {
        return NULL;
    }
    return b->getAttribute("glyph.uri");
};

void mei::ExtSymMixIn::setGlyphUri(std::string _glyphuri) {
    MeiAttribute *a = new MeiAttribute("glyph.uri", _glyphuri);
    b->addAttribute(a);
};

bool mei::ExtSymMixIn::hasGlyphUri() {
    return b->hasAttribute("glyph.uri");
};

void mei::ExtSymMixIn::removeGlyphUri() {
    b->removeAttribute("glyph.uri");
};

/* include <glyph.urimixin> */


