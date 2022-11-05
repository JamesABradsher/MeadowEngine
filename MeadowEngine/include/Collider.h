#pragma once

#include "Object.h"
#include <iostream>

#ifndef COLLIDER_H
#define COLLIDER_H

class SphereCollider;

class Collider {
	
// Constructor
public:
	Collider()
	{
	}

	// Copy Constructors
	Collider(const Collider& collider)
	{
		m_Owner = collider.GetOwner();
	}

	Collider(std::shared_ptr<Collider> collider)
	{
	}

// Methods
public:
	/*Abstract method for getting whether two colliders are colliding*/
	virtual bool GetIsColliding(std::shared_ptr<Collider> collider) const = 0;

	/*Abstract method for getting where this collider is colliding with a sphere collider*/
	virtual bool GetIsColliding(std::shared_ptr<const SphereCollider> sphereColldier) const = 0;

	// Getters and Setters
	
	const Vector& GetPosition() const;
	std::shared_ptr<Object> GetOwner() const;

	void SetOwner(std::shared_ptr<Object> owner);

protected:
	std::shared_ptr<Object> m_Owner;
};

#endif // !COLLIDER_H
