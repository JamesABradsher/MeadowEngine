#pragma once

#include "Collider.h"
#include "BoxCollider.h"

#ifndef SPHERE_COLLIDER_H
#define SPHERE_COLLIDER_H

class BoxCollider;

class SphereCollider :
    public Collider
{

    // Constructor
public:
    SphereCollider(const Vector& pos, float radius)
        : Collider(pos),  m_Radius(radius)
    {
    }

    // Methods
public:
    /*Method for determining if this sphere collider is colliding with another generic collider*/
    virtual  bool GetIsColliding(std::shared_ptr<Collider> collider) const;
   
    /*Method for determining if this sphere collider is colliding with another sphere collider*/
    virtual bool GetIsColliding(std::shared_ptr<SphereCollider> sphereCollider) const;
    
    /*Method for determining if this sphere collider is colliding with an AABB box collider*/
    virtual bool GetIsColliding(std::shared_ptr<BoxCollider> boxCollider) const { return false; }

    // Getters

    float GetRadius() const;

    // Member Variables
private:
    float m_Radius;
};

#endif