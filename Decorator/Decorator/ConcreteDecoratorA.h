#pragma once
#include "Decorator.h"
class ConcreteDecoratorA :
	public Decorator
{
public:
	ConcreteDecoratorA(Component *);
	virtual ~ConcreteDecoratorA();
	virtual void operation();
private:
	void decoratorOperation();
};

