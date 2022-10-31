#include "World.h"

void World::AddObject(std::shared_ptr<Object>& object)
{
    m_DynamicObjects.push_back(object);
}

void World::RemoveObject(std::shared_ptr<Object>& object)
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
    for (std::shared_ptr<Object> object : m_DynamicObjects)
    {
        // Updates Position
        Vector newPos = object->GetPosition();
        newPos += object->GetVelocity();
        newPos *= DeltaTime;
        object->SetPosition(newPos);
        
        // Updates Velocity
        Vector newVel = object->GetVelocity();
        newVel += object->GetAcceleration();
        newVel *= DeltaTime;
        object->SetVelocity(newVel);

        MDW_TRACE("Position: {0}, {1}", object->GetPosition().GetX(), object->GetPosition().GetY());

        for (std::shared_ptr<Object> otherObject : m_DynamicObjects)
        {
            if (object != otherObject)
                MDW_INFO("Is Colliding: {0}", object->GetCollider()->GetIsColliding(otherObject->GetCollider()));
        }
    }
}
