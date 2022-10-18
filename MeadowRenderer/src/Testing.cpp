#include "Testing.h"

#include <iostream>

void Testing::Run()
{
	Meadow::Log::init();

	Object tst = Object(0, 1000);
	std::shared_ptr<Collider> c = std::make_shared<Collider>(Collider(tst.GetPosition()));
	tst.AddCollider(std::make_shared<Collider>(c));
	tst.SetGravity(true);
    World world;
	std::shared_ptr<Object> tstobj = std::make_shared<Object>(tst);
	world.AddObject(tstobj);
	for (int i = 0; i < 100; i++)
	{
		world.step(1);
	}
}
