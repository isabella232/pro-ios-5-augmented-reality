/*==============================================================================
Copyright (c) 2010-2011 QUALCOMM Austria Research Center GmbH .
All Rights Reserved.
Qualcomm Confidential and Proprietary
			
@file 
    Marker.h

@brief
    Header file for Marker class.

==============================================================================*/
#ifndef _QCAR_MARKER_H_
#define _QCAR_MARKER_H_

// Include files
#include <QCAR/Trackable.h>
#include <QCAR/Matrices.h>
#include <QCAR/Vectors.h>

namespace QCAR
{

/// A rectangular marker
class QCAR_API Marker : public Trackable
{
public:
    /// Type of markers
    enum TYPE {
        INVALID,            ///< Invalid marker type
        ID_FRAME            ///< An id-encoded marker that stores the id
                            ///< in the frame
    };

    /// Returns the size of the marker in 3D scene units.
    virtual Vec2F getSize() const = 0;

    /// Sets a new size (in 3D scene units) for the marker.
    virtual bool setSize(const Vec2F& size) = 0;

    /// Returns the marker ID (as opposed to the trackable's id, which can be
    /// queried using getId())
    virtual int getMarkerId() const = 0;

    /// Returns the marker type (as opposed to the trackable's type, which can
    /// be queried using getType())
    virtual TYPE getMarkerType() const = 0;
};

} // namespace QCAR

#endif //_QCAR_MARKER_H_
