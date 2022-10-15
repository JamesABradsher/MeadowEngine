#pragma once

#include <vector>
#include <iostream>

#include "Vector.h" // This wont get confusing at all
#include "Object.h"

#ifdef WORLD_DEBUG
#else
#endif // !WORLD_DEBUG

#ifndef WORLD_H
#define WORLD_H

class World {

// Constructor and Destructor
public:
    World()
    {
        
    }

// Methods
public:
	void step();

// Member Vairables
private:
    Object tstObject;

};

#endif // !WORLD_H
