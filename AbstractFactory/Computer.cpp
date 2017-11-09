#include <iostream>
#include "Computer.h"
#include "RAM.h"
#include "Processor.h"
#include "ComputerFactory.h"

Computer::Computer(){

	ram = nullptr;
	processor = nullptr;
}

Computer::~Computer(){

	if (ram != nullptr)
		delete ram;
	if (processor != nullptr)
		delete processor;
}

void Computer::createComputer(ComputerFactory * factory) {

	ram = factory->produceRam();
	processor = factory->produceProcessor();
}

void Computer::startComputer() {

	std::cout << "Ram: " << this->ram->getName() << " Processor: " << this->processor->getName() << std::endl;
}

