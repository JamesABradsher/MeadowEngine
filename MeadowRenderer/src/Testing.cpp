#include "Testing.h"

#include <iostream>

void Testing::Run()
{
	Meadow::Log::init();

	Object tst = Object(0, 100);
	std::shared_ptr<Collider> c = std::make_shared<SphereCollider>(5);
	tst.SetGravity(true);

	Object tst2 = Object(0, 100);
	std::shared_ptr<Collider> c2 = std::make_shared<SphereCollider>(2);
    World world;
	std::shared_ptr<Object> tstobj = std::make_shared<Object>(tst);
	std::shared_ptr<Object> tstobj2 = std::make_shared<Object>(tst2);
	tstobj->AddCollider(c);
	tstobj2->AddCollider(c2);
	world.AddObject(tstobj);
	world.AddObject(tstobj2);
	for (int i = 0; i < 100; i++)
	{
		world.step(1);
	}
}
