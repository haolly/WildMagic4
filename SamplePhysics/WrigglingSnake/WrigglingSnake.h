// Geometric Tools, Inc.
// http://www.geometrictools.com
// Copyright (c) 1998-2006.  All Rights Reserved
//
// The Wild Magic Version 4 Restricted Libraries source code is supplied
// under the terms of the license agreement
//     http://www.geometrictools.com/License/Wm4RestrictedLicense.pdf
// and may not be copied or disclosed except in accordance with the terms
// of that agreement.

#ifndef WRIGGLINGSNAKE_H
#define WRIGGLINGSNAKE_H

#include "Wm4WindowApplication3.h"
using namespace Wm4;

class WrigglingSnake : public WindowApplication3
{
    WM4_DECLARE_INITIALIZE;

public:
    WrigglingSnake ();
    virtual ~WrigglingSnake ();

    virtual bool OnInitialize ();
    virtual void OnTerminate ();
    virtual void OnIdle ();
    virtual bool OnKeyDown (unsigned char ucKey, int iX, int iY);

protected:
    void CreateSnake ();
    void CreateSnakeBody ();
    void CreateSnakeHead ();
    void UpdateSnake ();
    void UpdateSnakeBody ();
    void UpdateSnakeHead ();
    void ModifyCurve ();
    static float Radial (float fT);

    NodePtr m_spkScene, m_spkTrnNode, m_spkSnakeRoot;
    TubeSurfacePtr m_spkSnakeBody;
    TriMeshPtr m_spkSnakeHead;
    WireframeStatePtr m_spkWireframe;
    Culler m_kCuller;

    int m_iNumCtrl, m_iDegree;
    BSplineCurve3f* m_pkCenter;
    float* m_afAmplitude;
    float* m_afPhase;
    int m_iShellQuantity;
    static float ms_fRadius;
};

WM4_REGISTER_INITIALIZE(WrigglingSnake);

#endif

