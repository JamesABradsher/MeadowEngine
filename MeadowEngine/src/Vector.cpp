#include "Vector.h"

/*Adds values of InVector to this Vector*/
void Vector::Add(Vector InVector)
{
	m_X += InVector.GetX();
	m_Y += InVector.GetY();
}

/*Subtracts values of InVector from this Vector*/
void Vector::Subtract(Vector InVector)
{
	m_X -= InVector.GetX();
	m_Y -= InVector.GetY();
}

/*Multiplies values of this Vector by a scalar*/
void Vector::Scale(float scalar)
{
	m_X *= scalar;
	m_Y *= scalar;
}

/*Returns a Vector equal to the Dot Product of this Vector and InVector*/
Vector Vector::Dot(Vector InVector)
{
	float x, y;
	x = m_X * InVector.GetX();
	y = m_Y * InVector.GetY();
	return Vector(x, y);
}

/*Returns the result of this Vector cross InVector*/
float Vector::Cross(Vector InVector)
{
	return m_X * InVector.GetY() - m_Y * InVector.GetX();
}

// Getters and Setters

float Vector::GetX()
{
	return m_X;
}

float Vector::GetY()
{
	return m_Y;
}

void Vector::SetX(float x)
{
	m_X = x;
}

void Vector::SetY(float y)
{
	m_Y = y;
}