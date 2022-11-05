#include "BoxCollider.h"


float BoxCollider::GetXMin() const
{
	return GetPosition().GetX() - m_XBound;
}

float BoxCollider::GetXMax() const
{
	return GetPosition().GetX() + m_XBound;
}

float BoxCollider::GetYMin() const
{
	return GetPosition().GetY() - m_YBound;
}

float BoxCollider::GetYMax() const
{
	return GetPosition().GetY() + m_YBound;
}