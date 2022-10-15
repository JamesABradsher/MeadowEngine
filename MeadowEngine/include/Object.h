//
//  Object.h
//  MeadowEngine
//
//  Created by Jim Bradsher on 10/15/22.
//

#include "Vector.h"

#ifndef Object_h
#define Object_h

class Object {
    
// Constructor
public:
    Object(Vector pos, Vector acc, Vector vel, float mass)
    {
        init(pos, acc, vel, mass);
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
    
// Methods
public:
    
    
    // Getters and Setters
    
    float GetMass() const;
    const Vector& GetPosition() const;
    const Vector& GetVelocity() const;
    const Vector& GetAcceleration() const;
    
    void SetMass(float mass);
    void SetPosition(Vector pos);
    void SetPosition(float x, float y);
    void SetVelocity(Vector vel);
    void SetVelocity(float xvel, float yvel);
    void SetAcceleration(Vector acc);
    void SetAcceleration(float xacc, float yacc);
    
private:
    void init(Vector pos, Vector acc, Vector vel, float mass)
    {
        m_Position = pos;
        m_Acceleration = acc;
        m_Velocity = vel;
        m_Mass = mass;
    }

// Member Variables
private:
    Vector m_Position, m_Acceleration, m_Velocity;
    float m_Mass;
    
};

#endif /* Object_h */ // Apearently xcode and vs have different comment formats
                      // for preprocessor if autogeneration...Thats going to bother me
