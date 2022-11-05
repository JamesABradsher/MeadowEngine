#include "Application.h"

std::shared_ptr<Object> Application::MakeObject(std::shared_ptr<Collider> colldier, float x, float y, bool dynamic = false, bool gravity = false)
{
	Object object = Object(x, y);
	m_ObjectArena.push_back(object);
	std::shared_ptr<Object> object_ptr = std::make_shared<Object>(object);
	object_ptr->SetGravity(gravity);
	object_ptr->AddCollider(colldier);
	return object_ptr;
}