#include "ConcreteComponentA.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main()
{
	std::cout << "Clear component\n";
	Component * comp = new Component();
	comp->operation();

	std::cout << "Add decorator A\n";
	comp = new ConcreteDecoratorA(comp);
	comp->operation();

	std::cout << "Add decorator B\n";
	comp = new ConcreteDecoratorB(comp);
	comp->operation();

	delete comp;

	return 0;
}