//
//  Object.cpp
//  MeadowEngine
//
//  Created by Jim Bradsher on 10/15/22.
//

#include "Object.h"

float Object::GetMass() const
{
    return m_Mass;
}

const Vector& Object::GetPosition() const
{
    return m_Position;
}

const Vector& Object::GetVelocity() const
{
    return m_Velocity;
}

const Vector& Object::GetAcceleration() const
{
    return m_Acceleration;
}

void Object::SetMass(float mass)
{
    m_Mass = mass;
}

void Object::SetPosition(Vector pos)
{
    m_Position = pos;
}

void Object::SetPosition(float x, float y)
{
    m_Position.SetX(x);
    m_Position.SetY(y);
}

void Object::SetVelocity(Vector vel)
{
    m_Velocity = vel;
}

void Object::SetVelocity(float xvel, float yvel)
{
    m_Velocity.SetX(xvel);
    m_Velocity.SetY(yvel);
}

void Object::SetAcceleration(Vector acc)
{
    m_Acceleration = acc;
}

void Object::SetAcceleration(float xacc, float yacc)
{
    m_Acceleration.SetX(xacc);
    m_Acceleration.SetY(yacc);
}