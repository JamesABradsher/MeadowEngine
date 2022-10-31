//
//  Object.h
//  MeadowEngine
//
//  Created by Jim Bradsher on 10/15/22.
//

#include <iostream>
#include "Vector.h"
#include "Collider.h"
#include "Log.h"

#ifndef Object_h
#define Object_h

static const float s_Gravity = -9.81f;

class Object {
    
// Constructor
public:
    Object(Vector pos, Vector vel, Vector acc, float mass)
    {
        init(pos, vel, acc, mass);
    }
    
    Object(Vector &pos)
    {
        init(pos, Vector(), Vector(), 1.0);
    }
    
    Object(float x, float y)
    {
        init(Vector(x, y), Vector(), Vector(), 1.0);
    }
    
    Object()
    {
        init(Vector(), Vector(), Vector(), 1.0);
    }

    // Copy Constructor
    Object(const Object& object)
    {
        init(object.GetPosition(), object.GetVelocity(), object.GetAcceleration(), object.GetMass());
        m_Collider = object.GetCollider();
    }
    
// Methods
public: 
    /*Adds a Collider to an object*/
    void AddCollider(std::shared_ptr<Collider>& collider);
    
    // Getters and Setters
    
    float GetMass() const;
    const Vector& GetPosition() const;
    const Vector& GetVelocity() const;
    const Vector& GetAcceleration() const;
    const std::shared_ptr<Collider>& GetCollider() const;
    
    void SetMass(float mass);
    void SetPosition(Vector pos);
    void SetPosition(float x, float y);
    void SetVelocity(Vector vel);
    void SetVelocity(float xvel, float yvel);
    void SetAcceleration(Vector acc);
    void SetAcceleration(float xacc, float yacc);
    void SetGravity(bool gravity);
    
private:
    void init(Vector pos, Vector vel, Vector acc, float mass)
    {
        m_Position = pos;
        m_Acceleration = acc;
        m_Velocity = vel;
        m_Mass = mass;
    }

// Member Variables
private:
    std::shared_ptr<Collider> m_Collider;
    Vector m_Position, m_Acceleration, m_Velocity;
    float m_Mass;
    bool m_HasGravity = false;
};

#endif /* Object_h */ // Apearently xcode and vs have different comment formats
                      // for preprocessor if autogeneration...Thats going to bother me
