#include "LaptopFactory.h"
#include "LaptopRAM.h"
#include "LaptopProcessor.h"

LaptopFactory::LaptopFactory(){

}

LaptopFactory::~LaptopFactory(){

}

RAM * LaptopFactory::produceRam() {

	return new LaptopRAM();
}

Processor * LaptopFactory::produceProcessor() {

	return new LaptopProcessor;
}

