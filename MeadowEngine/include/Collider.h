#pragma once

#include "Vector.h"
#include "Log.h"

#ifndef COLLIDER_H
#define COLLIDER_H

class Collider {
	
// Constructor
public:
	Collider(const Vector& pos) 
		: m_Position(pos)
	{
	}

	// Copy Constructor
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
	// Getters and Setters
	
	const Vector& GetPosition() const;

private:
	const Vector& m_Position;
};

#endif // !COLLIDER_H
