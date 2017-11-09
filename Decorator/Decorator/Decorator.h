#pragma once
#include "Component.h"
class Decorator :
	public Component
{
public:
	Decorator(Component *);
	virtual ~Decorator();
	virtual void operation();
private:
	Component * _component;
};

