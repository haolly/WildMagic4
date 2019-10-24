// Geometric Tools, Inc.
// http://www.geometrictools.com
// Copyright (c) 1998-2006.  All Rights Reserved
//
// The Wild Magic Version 4 Foundation Library source code is supplied
// under the terms of the license agreement
//     http://www.geometrictools.com/License/Wm4FoundationLicense.pdf
// and may not be copied or disclosed except in accordance with the terms
// of that agreement.

#ifndef WM4APPRGAUSSPOINTSFIT3_H
#define WM4APPRGAUSSPOINTSFIT3_H

#include "Wm4FoundationLIB.h"
#include "Wm4Box3.h"

namespace Wm4
{

// Fit points with a Gaussian distribution.  The center is the mean of the
// points, the axes are the eigenvectors of the covariance matrix, and the
// extents are the eigenvalues of the covariance matrix and are returned in
// increasing order.  The quantites are stored in a Box3<Real> just to have a
// single container.
template <class Real> WM4_FOUNDATION_ITEM
Box3<Real> GaussPointsFit3 (int iQuantity, const Vector3<Real>* akPoint);

}

#endif
