#pragma once

#include "Collider.h"
#include "BoxCollider.h"

#ifndef SPHERE_COLLIDER_H
#define SPHERE_COLLIDER_H

class BoxCollider;

class SphereCollider :
    public Collider, public std::enable_shared_from_this<SphereCollider>
{

    // Constructor
public:
    SphereCollider(float radius)
        : m_Radius(radius)
    {}

    // Methods
public:
    /*Method for determining if this sphere collider is colliding with another generic collider*/
    virtual  bool GetIsColliding(std::shared_ptr<Collider> collider) const;
   
    /*Method for determining if this sphere collider is colliding with another sphere collider*/
    virtual bool GetIsColliding(std::shared_ptr<const SphereCollider> sphereCollider) const;
    
    /*Method for determining if this sphere collider is colliding with an AABB box collider*/
    virtual bool GetIsColliding(std::shared_ptr<BoxCollider> boxCollider) const { return false; }

    // Getters and Setters

    float GetRadius() const;

    void SetRadius(float radius);

    // Member Variables
private:
    float m_Radius;
};

#endif