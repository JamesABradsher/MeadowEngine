#pragma once

#include <vector>
#include <iostream>

#ifdef WORLD_DEBUG
#else
#endif // !WORLD_DEBUG

#include "Vector.h" // This wont get confusing at all

#ifndef WORLD_H
#define WORLD_H

class World {

// Constructor and Destructor
public:


// Methods
public:
	void step();

// Member Vairables
private:

};

#endif // !WORLD_H
