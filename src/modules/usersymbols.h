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

#ifndef USERSYMBOLS_H_
#define USERSYMBOLS_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "facsimilemixins.h"
#include "gesturalmixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"
#include <string>


namespace mei {
/** \brief Container for text that is fixed to a particular page location, regardless of
 *  changes made to the layout of the measures around it.
 */
class MEI_EXPORT AnchoredText : public MeiElement {
    public:
        AnchoredText();
        AnchoredText(const AnchoredText &other);
        virtual ~AnchoredText();

/* include <anchoredText> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        AnchoredTextLogMixIn    m_AnchoredTextLog;
        StartIdMixIn    m_StartId;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(AnchoredText);
};

/** \brief A curved line that cannot be represented by a more specific element, such as a
 *  slur.
 */
class MEI_EXPORT Curve : public MeiElement {
    public:
        Curve();
        Curve(const Curve &other);
        virtual ~Curve();

/* include <curve> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        CurveLogMixIn    m_CurveLog;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        ColorMixIn    m_Color;
        CurvatureMixIn    m_Curvature;
        CurveRendMixIn    m_CurveRend;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Curve);
};

/** \brief A visual line that cannot be represented by a more specific; i.e., semantic,
 *  element.
 */
class MEI_EXPORT Line : public MeiElement {
    public:
        Line();
        Line(const Line &other);
        virtual ~Line();

/* include <line> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;
        LineLogMixIn    m_LineLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        LineVisMixIn    m_LineVis;
        ColorMixIn    m_Color;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        VisualOffset2VoMixIn    m_VisualOffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;

    private:
        REGISTER_DECLARATION(Line);
};

/** \brief One or more characters which are related to the parent symbol in some respect,
 *  as specified by the type attribute.
 */
class MEI_EXPORT Mapping : public MeiElement {
    public:
        Mapping();
        Mapping(const Mapping &other);
        virtual ~Mapping();

/* include <mapping> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(Mapping);
};

/** \brief (property name) – Name of a property of the symbol.
 */
class MEI_EXPORT PropName : public MeiElement {
    public:
        PropName();
        PropName(const PropName &other);
        virtual ~PropName();
        /** \brief Provides a description of the relationship between the current and the target
         *  categories.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <propName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(PropName);
};

/** \brief (property value) – A single property value.
 */
class MEI_EXPORT PropValue : public MeiElement {
    public:
        PropValue();
        PropValue(const PropValue &other);
        virtual ~PropValue();

/* include <propValue> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(PropValue);
};

/** \brief (symbol name) – Contains the name of a symbol, expressed following Unicode
 *  conventions.
 */
class MEI_EXPORT SymName : public MeiElement {
    public:
        SymName();
        SymName(const SymName &other);
        virtual ~SymName();

/* include <symName> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(SymName);
};

/** \brief (symbol property) – Provides a name and value for some property of the parent
 *  symbol.
 */
class MEI_EXPORT SymProp : public MeiElement {
    public:
        SymProp();
        SymProp(const SymProp &other);
        virtual ~SymProp();

/* include <symProp> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(SymProp);
};

/** \brief (symbol definition) – Declaration of an individual symbol in a symbolTable.
 */
class MEI_EXPORT SymbolDef : public MeiElement {
    public:
        SymbolDef();
        SymbolDef(const SymbolDef &other);
        virtual ~SymbolDef();

/* include <symbolDef> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        CoordinatedMixIn    m_Coordinated;

    private:
        REGISTER_DECLARATION(SymbolDef);
};

/** \brief Contains a set of user-defined symbols.
 */
class MEI_EXPORT SymbolTable : public MeiElement {
    public:
        SymbolTable();
        SymbolTable(const SymbolTable &other);
        virtual ~SymbolTable();

/* include <symbolTable> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;

    private:
        REGISTER_DECLARATION(SymbolTable);
};
} // namespace mei
#endif // USERSYMBOLS_H_
