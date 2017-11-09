#include "Computer.h"
#include "LaptopFactory.h"
#include "PcFactory.h"
#include <cstdlib>

int main()
{
	LaptopFactory * laptopFact = new LaptopFactory();
	PcFactory * pcFactory = new PcFactory();
	Computer laptop, pc;

	laptop.createComputer(laptopFact);
	pc.createComputer(pcFactory);

	laptop.startComputer();
	pc.startComputer();

	delete pcFactory;
	delete laptopFact;

	system("pause");
	return 0;
}