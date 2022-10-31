#include "SphereCollider.h"

float SphereCollider::GetRadius() const
{
	return m_Radius;
}

bool SphereCollider::GetIsColliding(std::shared_ptr<Collider> collider) const
{
	return collider->GetIsColliding(std::make_shared<SphereCollider>(*this));
}

bool SphereCollider::GetIsColliding(std::shared_ptr<SphereCollider> sphereCollider) const
{
	float dist = m_Position.DistanceTo(sphereCollider->GetPosition());
	if (dist < m_Radius + sphereCollider->GetRadius())
		return true;
	return false;
}