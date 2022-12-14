//
//  Vector.h
//  MeadowEngine
//
//  Created by Jim Bradsher on 10/15/22.
//

#pragma once

#include <iostream>


#ifndef VECTOR_2D_H
#define VECTOR_2D_H

class Vector {

// Constructor
public:
	Vector(float x, float y)
	{
		m_X = x;
		m_Y = y;
	}
    
    Vector(const Vector& vec)
    {
        m_X = vec.GetX();
        m_Y = vec.GetY();
    }
    
    Vector()
    {
        m_X = 0;
        m_Y = 0;
    }

// Methods
public:
	/*Gets the distance from this vector to another*/
	float DistanceTo(const Vector& targetVector) const;

	// Vector Operations

	/*Adds values of InVector to this Vector*/
	void operator+= (const Vector& InVector);
	
	/*Subtracts values of InVector from this Vector*/
	void operator-= (const Vector& InVector);
	
	/*Multiplies values of this Vector by a scalar*/
	void operator*= (float scalar);
	
	/*Returns a Vector equal to the Dot Product of this Vector and InVector*/
	Vector Dot(const Vector& InVector);
	
	/*Returns the result of this Vector cross InVector*/
	float Cross(const Vector& InVector);

	// Getters and Setters

	float GetX() const;
	float GetY() const;
    
	void SetX(float x);
	void SetY(float y);

// Member Variables
private:
	float m_X, m_Y;
};

#endif // !VECTOR_2D_H
