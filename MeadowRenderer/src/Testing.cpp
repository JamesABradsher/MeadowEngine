#include "Testing.h"

#include <iostream>

void Testing::Run()
{

	Object tst = Object(0, 1000);
	tst.SetGravity(true);
    World world;
	world.AddObject(&tst);
	for (int i = 0; i < 100; i++)
	{
		world.step(1);
	}
}
