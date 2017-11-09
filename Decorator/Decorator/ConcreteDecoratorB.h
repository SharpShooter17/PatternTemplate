#pragma once
#include "Decorator.h"
class ConcreteDecoratorB :
	public Decorator
{
public:
	ConcreteDecoratorB(Component * component);
	virtual ~ConcreteDecoratorB();
	virtual void operation();
private:
	void decoratorOperation();
};

