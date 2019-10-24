// Geometric Tools, Inc.
// http://www.geometrictools.com
// Copyright (c) 1998-2006.  All Rights Reserved
//
// The Wild Magic Version 4 Restricted Libraries source code is supplied
// under the terms of the license agreement
//     http://www.geometrictools.com/License/Wm4RestrictedLicense.pdf
// and may not be copied or disclosed except in accordance with the terms
// of that agreement.

//----------------------------------------------------------------------------
template <class T>
Pointer<T>::Pointer (T* pkObject)
{
    m_pkObject = pkObject;
    if (m_pkObject)
    {
        m_pkObject->IncrementReferences();
    }
}
//----------------------------------------------------------------------------
template <class T>
Pointer<T>::Pointer (const Pointer& rkPointer)
{
    m_pkObject = rkPointer.m_pkObject;
    if (m_pkObject)
    {
        m_pkObject->IncrementReferences();
    }
}
//----------------------------------------------------------------------------
template <class T>
Pointer<T>::~Pointer ()
{
    if (m_pkObject)
    {
        m_pkObject->DecrementReferences();
    }
}
//----------------------------------------------------------------------------
template <class T>
Pointer<T>::operator T* () const
{
    return m_pkObject;
}
//----------------------------------------------------------------------------
template <class T>
T& Pointer<T>::operator* () const
{
    return *m_pkObject;
}
//----------------------------------------------------------------------------
template <class T>
T* Pointer<T>::operator-> () const
{
    return m_pkObject;
}
//----------------------------------------------------------------------------
template <class T>
Pointer<T>& Pointer<T>::operator= (T* pkObject)
{
    if (m_pkObject != pkObject)
    {
        if (pkObject)
        {
            pkObject->IncrementReferences();
        }

        if (m_pkObject)
        {
            m_pkObject->DecrementReferences();
        }

        m_pkObject = pkObject;
    }
    return *this;
}
//----------------------------------------------------------------------------
template <class T>
Pointer<T>& Pointer<T>::operator= (const Pointer& rkPointer)
{
    if (m_pkObject != rkPointer.m_pkObject)
    {
        if (rkPointer.m_pkObject)
        {
            rkPointer.m_pkObject->IncrementReferences();
        }

        if (m_pkObject)
        {
            m_pkObject->DecrementReferences();
        }

        m_pkObject = rkPointer.m_pkObject;
    }
    return *this;
}
//----------------------------------------------------------------------------
template <class T>
bool Pointer<T>::operator== (T* pkObject) const
{
    return m_pkObject == pkObject;
}
//----------------------------------------------------------------------------
template <class T>
bool Pointer<T>::operator!= (T* pkObject) const
{
    return m_pkObject != pkObject;
}
//----------------------------------------------------------------------------
template <class T>
bool Pointer<T>::operator== (const Pointer& rkPointer) const
{
    return m_pkObject == rkPointer.m_pkObject;
}
//----------------------------------------------------------------------------
template <class T>
bool Pointer<T>::operator!= (const Pointer& rkPointer) const
{
    return m_pkObject != rkPointer.m_pkObject;
}
//----------------------------------------------------------------------------
