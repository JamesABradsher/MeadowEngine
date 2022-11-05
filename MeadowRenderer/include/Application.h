#pragma once

#include "World.h"

#ifndef APPLICATION_H
#define APPLICATION_H

enum ColliderType 
{
	SPHERE,
	BOX
};


class Application
{

	// Methods
public:
	void Run();

	// Private Methods
private:
	std::shared_ptr<Object> MakeObject(std::shared_ptr<Collider>, float x, float y, bool dynamic = false, bool gravity = false);

	std::shared_ptr<Collider> MakeColldier(ColliderType type, float...);

	// Members
private:
	std::vector<Object> m_ObjectArena;
	std::vector<Collider> m_ColliderArena;
};

#endif // !APPLICATION_H