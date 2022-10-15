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
	void Add(Vector InVector);
	void Subtract(Vector InVector);
	void Scale(float scalar);
	Vector Dot(Vector InVector);
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
