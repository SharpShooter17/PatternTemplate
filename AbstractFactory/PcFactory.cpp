
#include "PcFactory.h"
#include "PcRAM.h"
#include "PcProcessor.h"

PcFactory::PcFactory(){

}

PcFactory::~PcFactory(){

}

RAM * PcFactory::produceRam() {

	return new PcRAM();
}

Processor * PcFactory::produceProcessor() {

	return new PcProcessor();
}

