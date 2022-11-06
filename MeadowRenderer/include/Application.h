#pragma once

#include "World.h"
#include "SphereCollider.h"

#ifndef APPLICATION_H
#define APPLICATION_H


class Application
{
public:
	Application()
	{
		Meadow::Log::init();
	}

	// Methods
public:
	void Run();

private:
	std::shared_ptr<Object> MakeObject(std::shared_ptr<Collider> collider, float x, float y, bool gravity = false);
};

#endif // !APPLICATION_H