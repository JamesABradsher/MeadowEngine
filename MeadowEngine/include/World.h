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
        tstObject = Object(100, 100);
        const Vector* pos_ptr = &(tstObject.GetPosition());
        std::cout << pos_ptr << std::endl;
        Vector* tst = new Vector(8, 9);
        tstObject.SetPosition(*tst);
        pos_ptr = &(tstObject.GetPosition());
        std::cout << pos_ptr << std::endl;
    }

// Methods
public:
	void step();

// Member Vairables
private:
    Object tstObject;

};

#endif // !WORLD_H
