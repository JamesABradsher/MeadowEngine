#pragma once

#include <vector>
#include <iostream>

#include "Vector.h" // This wont get confusing at all
#include "Object.h"
#include "easylogging++.h"

#ifdef WORLD_DEBUG

#define 
#else
#endif // !WORLD_DEBUG

#ifndef WORLD_H
#define WORLD_H

class World {

// Methods
public:
	/*Adds an Object to te World*/
	void AddObject(Object* object);
	/*Removes an Object from the World*/
	void RemoveObject(Object* object);

	/*Steps through each dynamic object and simulates kinematics*/
	void step(float DeltaTime);

// Member Vairables
private:
    std::vector<Object*> m_DynamicObjects;

};

#endif // !WORLD_H
