#ifndef _LAPTOPFACTORY_H
#define _LAPTOPFACTORY_H

#include "ComputerFactory.h"

class RAM;
class Processor;

class LaptopFactory : public ComputerFactory {
  public:
    LaptopFactory();

    virtual ~LaptopFactory();

    virtual RAM * produceRam();

    virtual Processor * produceProcessor();

};
#endif
