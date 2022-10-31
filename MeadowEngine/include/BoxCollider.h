#pragma once

#include "Collider.h"
#include "SphereCollider.h"

#ifndef BOX_COLLIDER_H
#define BOX_COLLIDER_H

class SphereCollider;

class BoxCollider :
	 public Collider
{

public:
    BoxCollider(const Vector& pos, float xBound, float yBound) 
        : Collider(pos), m_XBound(xBound), m_YBound(yBound)
    {
    }

    // Mehtods
public:
    /*Method for determining if this sphere collider is colliding with another generic collider*/
    virtual  bool GetIsColliding(std::shared_ptr<Collider> collider) const;
    
    /*Method for determining if this sphere collider is colliding with another sphere collider*/
    virtual bool GetIsColliding(std::shared_ptr<SphereCollider> sphereCollider) const;
    
    /*Method for determining if this sphere collider is colliding with an AABB box collider*/
    virtual bool GetIsColliding(std::shared_ptr<BoxCollider> boxCollider) const;

    // Getters

    float GetXMin() const;
    float GetXMax() const;
    float GetYMin() const;
    float GetYMax() const;

    // Member Vairable
private:
    float m_XBound, m_YBound;
};

#endif // !BOX_COLLIDER_H