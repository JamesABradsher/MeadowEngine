#include "Vector.h"

float Vector::DistanceTo(const Vector& targetVector) const
{
	return std::sqrt(std::pow(targetVector.GetX() - m_X, 2) + std::pow(targetVector.GetY() - m_Y, 2));
}

void Vector::operator+= (const Vector& InVector)
{
	m_X += InVector.GetX();
	m_Y += InVector.GetY();
}

void Vector::operator-= (const Vector& InVector)
{
	m_X -= InVector.GetX();
	m_Y -= InVector.GetY();
}

void Vector::operator*= (float scalar)
{
	m_X *= scalar;
	m_Y *= scalar;
}

Vector Vector::Dot(const Vector& InVector)
{
	float x, y;
	x = m_X * InVector.GetX();
	y = m_Y * InVector.GetY();
	return Vector(x, y);
}

float Vector::Cross(const Vector& InVector)
{
	return m_X * InVector.GetY() - m_Y * InVector.GetX();
}

// Getters and Setters

float Vector::GetX() const
{
	return m_X;
}

float Vector::GetY() const
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
