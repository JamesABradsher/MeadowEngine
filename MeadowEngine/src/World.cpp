#include "World.h"

void World::AddObject(Object* object)
{
    m_DynamicObjects.push_back(object);
}

void World::RemoveObject(Object* object)
{
    if (!object)
        return;
    
    auto itr = std::find(m_DynamicObjects.begin(), m_DynamicObjects.end(), object);
    if (itr == m_DynamicObjects.end()) 
        return;
    m_DynamicObjects.erase(itr);
}

void World::step(float DeltaTime)
{
    for (Object* object : m_DynamicObjects)
    {
        // Updates Position
        Vector newPos = object->GetPosition();
        newPos + object->GetVelocity();
        newPos * DeltaTime;
        object->SetPosition(newPos);
        
        // Updates Velocity
        Vector newVel = object->GetVelocity();
        newVel + object->GetAcceleration();
        newVel * DeltaTime;
        object->SetVelocity(newVel);

        std::cout << "Position: " << object->GetPosition().GetX() << ", " << object->GetPosition().GetY() << std::endl;
        std::cout << "Velocity: " << object->GetVelocity().GetX() << ", " << object->GetVelocity().GetY() << std::endl;
    }
}
