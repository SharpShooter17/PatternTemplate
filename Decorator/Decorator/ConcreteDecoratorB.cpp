#include "ConcreteDecoratorB.h"



ConcreteDecoratorB::ConcreteDecoratorB(Component * component) :
	Decorator(component)
{
}

ConcreteDecoratorB::~ConcreteDecoratorB()
{
	Decorator::~Decorator();
}

void ConcreteDecoratorB::operation()
{
	Decorator::operation();
	decoratorOperation();
}

void ConcreteDecoratorB::decoratorOperation()
{
	std::cout << "Decorator B operation\n";
}