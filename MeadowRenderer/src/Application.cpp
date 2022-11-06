#include "Application.h"

std::shared_ptr<Object> Application::MakeObject(std::shared_ptr<Collider> colldier, float x, float y, bool gravity)
{
	std::shared_ptr<Object> object_shared_ptr = std::make_shared<Object>();
	object_shared_ptr->init(Vector(x, y), Vector(), Vector(), 1);
	object_shared_ptr->SetGravity(gravity);
	object_shared_ptr->AddCollider(colldier); // Must be performed by a shared_ptr of an object
	return object_shared_ptr;
}

std::shared_ptr<Collider> Application::MakeColldier(float radius)
{
	std::shared_ptr<SphereCollider> collider_shared_ptr;
	collider_shared_ptr = std::make_shared<SphereCollider>(10);

	return collider_shared_ptr;
}

void Application::Run()
{
	std::shared_ptr<Object> ptr = MakeObject(MakeColldier(10), 10, 100, true);

	World world;
	world.AddObject(ptr);
	for (int i = 0; i < 10; i++)
	{
		world.step(1);
	}
}