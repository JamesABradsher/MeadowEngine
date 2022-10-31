#pragma once

#include "Vector.h"
#include <iostream>

#ifndef COLLIDER_H
#define COLLIDER_H

class SphereCollider;

class Collider {
	
// Constructor
public:
	Collider(const Vector& pos) 
		: m_Position(pos)
	{
	}

	// Copy Constructors
	Collider(const Collider& collider)
		: m_Position(collider.GetPosition())
	{
	}

	Collider(std::shared_ptr<Collider> collider)
		: m_Position(collider->GetPosition())
	{
	}

// Methods
public:
	/*Abstract method for getting whether two colliders are colliding*/
	virtual bool GetIsColliding(std::shared_ptr<Collider> collider) const = 0;

	/*Abstract method for getting where this collider is colliding with a sphere collider*/
	virtual bool GetIsColliding(std::shared_ptr<SphereCollider> sphereColldier) const = 0;

	// Getters and Setters
	
	const Vector& GetPosition() const;

protected:
	const Vector& m_Position;
};

#endif // !COLLIDER_H
