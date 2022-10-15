#pragma once


#ifndef VECTOR_2_H
#define VECTOR_2_H

class Vector {

// Constructor
public:
	Vector(float x, float y)
	{
		m_X = x;
		m_Y = y;
	}

// Methods
public:
	// Vector Operations

	/*Adds values of InVector to this Vector*/
	void Add(Vector InVector);
	/*Subtracts values of InVector from this Vector*/
	void Subtract(Vector InVector);
	/*Multiplies values of this Vector by a scalar*/
	void Scale(float scalar);
	/*Returns a Vector equal to the Dot Product of this Vector and InVector*/
	Vector Dot(Vector InVector);
	/*Returns the result of this Vector cross InVector*/
	float Cross(Vector InVector);

	// Getters and Setters

	float GetX();
	float GetY();
	void SetX(float x);
	void SetY(float y);

// Member Variables
private:
	float m_X, m_Y;
};

#endif // !VECTOR_2_H
