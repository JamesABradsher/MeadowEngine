#include "Testing.h"

#include <iostream>

int Testing::Run()
{
	int ret_val = 0;

    World world;
	for (int i = 0; i < 100; i++)
	{
		world.step(1);
	}
	
	return ret_val;
}
