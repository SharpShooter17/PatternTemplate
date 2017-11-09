#include <iostream>

enum class  ChocolateType{
	MILK, DARK, WITH_NUTS
};

class Chocolate {
protected:
public:
	virtual Chocolate * getChocolate() = 0;
	virtual ~Chocolate() {};
};

class MilkChocolate : public Chocolate {
public:
	Chocolate * getChocolate()
	{
		std::cout << "Add milk.. ";
		return this;
	}
};

class DarkChocolate : public Chocolate {
public:
	Chocolate * getChocolate()
	{
		std::cout << "Add cocoa.. ";
		return this;
	}
};

class NutsChocolate : public Chocolate {
public:
	Chocolate * getChocolate()
	{
		std::cout << "Add nuts.. ";
		return this;
	}
};

class ChocolateFactory {
public:
	virtual Chocolate * produceChocolate(ChocolateType type) = 0;
	virtual ~ChocolateFactory() {};
};

class WedelFactory : public ChocolateFactory {
public:
	virtual Chocolate * produceChocolate(ChocolateType type) 
	{
		switch (type)
		{
		case ChocolateType::MILK:
			return new MilkChocolate();
		case ChocolateType::DARK:
			return new DarkChocolate();
		case ChocolateType::WITH_NUTS:
			return new NutsChocolate();
		default:
			return nullptr;
		}
	}

	virtual ~WedelFactory() {}
};

int main()
{
	ChocolateFactory * factory = new WedelFactory();
	Chocolate * milk = factory->produceChocolate(ChocolateType::MILK);
	Chocolate * dark = factory->produceChocolate(ChocolateType::DARK);
	Chocolate * nuts = factory->produceChocolate(ChocolateType::WITH_NUTS);

	delete milk->getChocolate();
	delete dark->getChocolate();
	delete nuts->getChocolate();

	return 0;
}
