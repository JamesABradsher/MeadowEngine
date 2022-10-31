#include "BoxCollider.h"


float BoxCollider::GetXMin() const
{
	return m_Position.GetX() - m_XBound;
}

float BoxCollider::GetXMax() const
{
	return m_Position.GetX() + m_XBound;
}

float BoxCollider::GetYMin() const
{
	return m_Position.GetY() - m_YBound;
}

float BoxCollider::GetYMax() const
{
	return m_Position.GetY() + m_YBound;
}