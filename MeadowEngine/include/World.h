#pragma once

#include <vector>
#include <iostream>

#include "Vector.h" // This wont get confusing at all
#include "Object.h"
#include "Log.h"

#ifndef WORLD_H
#define WORLD_H

class World {

// Constructor
public:
	World() 
	{
	}

// Methods
public:
	/*Adds an Object to te World*/
	void AddObject(std::shared_ptr<Object>& object);
	/*Removes an Object from the World*/
	void RemoveObject(std::shared_ptr<Object>& object);
	/*Steps through each dynamic object and simulates kinematics*/
	void step(float DeltaTime);

// Member Vairables
private:
    std::vector<std::shared_ptr<Object>> m_DynamicObjects;

};

#endif // !WORLD_H
