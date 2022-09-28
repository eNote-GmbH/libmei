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

#ifndef FINGERING_H_
#define FINGERING_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "facsimilemixins.h"
#include "fingeringmixins.h"
#include "gesturalmixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "usersymbolsmixins.h"
#include "visualmixins.h"


namespace mei {
/** \brief finger – An individual finger in a fingering indication.
 */
class MEI_EXPORT Fing : public MeiElement {
    public:
        Fing();
        Fing(const Fing &other);
        virtual ~Fing();

/* include <fing> */

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
        AltSymMixIn    m_AltSym;
        ExtenderMixIn    m_Extender;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Fing);
};

/** \brief (finger group)– A group of individual fingers in a fingering indication.
 */
class MEI_EXPORT FingGrp : public MeiElement {
    public:
        FingGrp();
        FingGrp(const FingGrp &other);
        virtual ~FingGrp();

/* include <fingGrp> */

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
        FingGrpLogMixIn    m_FingGrpLog;
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
        FingGrpVisMixIn    m_FingGrpVis;
        AltSymMixIn    m_AltSym;
        ExtenderMixIn    m_Extender;
        LineRendMixIn    m_LineRend;
        LineRendBaseMixIn    m_LineRendBase;
        PlacementRelStaffMixIn    m_PlacementRelStaff;
        VisualOffsetHoMixIn    m_VisualOffsetHo;
        VisualOffsetToMixIn    m_VisualOffsetTo;
        VisualOffsetVoMixIn    m_VisualOffsetVo;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(FingGrp);
};
} // namespace mei
#endif // FINGERING_H_
