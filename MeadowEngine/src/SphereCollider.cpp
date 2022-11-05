#include "SphereCollider.h"

float SphereCollider::GetRadius() const
{
	return m_Radius;
}

bool SphereCollider::GetIsColliding(std::shared_ptr<Collider> collider) const
{
	return collider->GetIsColliding(shared_from_this());
}

bool SphereCollider::GetIsColliding(std::shared_ptr<const SphereCollider> sphereCollider) const
{
	float dist = GetPosition().DistanceTo(sphereCollider->GetPosition());
	if (dist < m_Radius + sphereCollider->GetRadius())
		return true;
	return false;
}