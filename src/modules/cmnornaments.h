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

#ifndef CMNORNAMENTS_H_
#define CMNORNAMENTS_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "cmnornamentsmixins.h"
#include "externalsymbolsmixins.h"
#include "facsimilemixins.h"
#include "gesturalmixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"


namespace mei {
/** \brief An ornament indicating rapid alternation of the main note with a secondary note,
 *  usually a step below, but sometimes a step above.
 */
class MEI_EXPORT Mordent : public MeiElement {
    public:
        Mordent();
        Mordent(const Mordent &other);
        virtual ~Mordent();

/* include <mordent> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        MordentLogMixIn    m_MordentLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        OrnamentAccidMixIn    m_OrnamentAccid;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;

    private:
        REGISTER_DECLARATION(Mordent);
};

/** \brief Rapid alternation of a note with another (usually at the interval of a second
 *  above).
 */
class MEI_EXPORT Trill : public MeiElement {
    public:
        Trill();
        Trill(const Trill &other);
        virtual ~Trill();

/* include <trill> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        DurationAdditiveMixIn    m_DurationAdditive;
        OrnamentAccidMixIn    m_OrnamentAccid;
        StartEndIdMixIn    m_StartEndId;
        StartIdMixIn    m_StartId;
        Timestamp2LogicalMixIn    m_Timestamp2Logical;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtenderMixIn    m_Extender;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        ExtSymMixIn    m_ExtSym;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        VisualOffset2HoMixIn    m_VisualOffset2Ho;
        VisualOffset2ToMixIn    m_VisualOffset2To;
        XyMixIn    m_Xy;
        DurationGesturalMixIn    m_DurationGestural;
        Timestamp2GesturalMixIn    m_Timestamp2Gestural;

    private:
        REGISTER_DECLARATION(Trill);
};

/** \brief An ornament consisting of four notes — the upper neighbor of the written note,
 *  the written note, the lower neighbor, and the written note.
 */
class MEI_EXPORT Turn : public MeiElement {
    public:
        Turn();
        Turn(const Turn &other);
        virtual ~Turn();

/* include <turn> */

        BasicMixIn    m_Basic;
        LabelledMixIn    m_Labelled;
        LinkingMixIn    m_Linking;
        NNumberLikeMixIn    m_NNumberLike;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        ClassedMixIn    m_Classed;
        FacsimileMixIn    m_Facsimile;
        TurnLogMixIn    m_TurnLog;
        AlignmentMixIn    m_Alignment;
        LayerIdentMixIn    m_LayerIdent;
        PartIdentMixIn    m_PartIdent;
        PlistMixIn    m_Plist;
        StaffIdentMixIn    m_StaffIdent;
        TargetEvalMixIn    m_TargetEval;
        TimestampLogicalMixIn    m_TimestampLogical;
        TimestampGesturalMixIn    m_TimestampGestural;
        OrnamentAccidMixIn    m_OrnamentAccid;
        StartIdMixIn    m_StartId;
        AltSymMixIn    m_AltSym;
        ColorMixIn    m_Color;
        EnclosingCharsMixIn    m_EnclosingChars;
        ExtSymMixIn    m_ExtSym;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        TypographyMixIn    m_Typography;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Turn);
};
} // namespace mei
#endif // CMNORNAMENTS_H_
