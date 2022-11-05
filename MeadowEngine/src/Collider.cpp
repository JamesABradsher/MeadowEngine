#include "Collider.h"

const Vector& Collider::GetPosition() const
{
	return m_Owner->GetPosition();
}

void Collider::SetOwner(std::shared_ptr<Object> owner) 
{
	m_Owner = owner;
}

std::shared_ptr<Object> Collider::GetOwner() const
{
	return m_Owner;
}