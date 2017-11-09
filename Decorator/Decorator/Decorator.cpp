#include "Decorator.h"



Decorator::Decorator(Component * component) :
	_component(component)
{
}

Decorator::~Decorator()
{
	if (_component != nullptr)
		delete _component;

	_component = nullptr;
}

void Decorator::operation()
{
	_component->operation();
	std::cout << "Decorator operation.\n";
}
