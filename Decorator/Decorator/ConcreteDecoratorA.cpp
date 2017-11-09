#include "ConcreteDecoratorA.h"


ConcreteDecoratorA::ConcreteDecoratorA(Component * component) :
	Decorator(component)
{
}

ConcreteDecoratorA::~ConcreteDecoratorA()
{
	Decorator::~Decorator();
}

void ConcreteDecoratorA::operation()
{
	Decorator::operation();
	decoratorOperation();
}

void ConcreteDecoratorA::decoratorOperation()
{
	std::cout << "Decorator A operation\n";
}
