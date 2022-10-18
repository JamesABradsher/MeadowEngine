#pragma once
#include "Collider.h"

#ifndef SPHERE_COLLIDER_H
#define SPHERE_COLLIDER_H

class SphereCollider :
    public Collider
{

    // Constructor
public:
    SphereCollider(Vector& pos, float radius)
        : Collider(pos),  m_Radius(radius)
    {
    }

    // Member Variables
private:
    float m_Radius;
};

#endif