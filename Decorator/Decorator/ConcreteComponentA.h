#pragma once
#include "Component.h"
class ConcreteComponentA :
	public Component
{
public:
	ConcreteComponentA();
	virtual ~ConcreteComponentA();
	virtual void operation();
};

