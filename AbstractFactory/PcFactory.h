#ifndef _PCFACTORY_H
#define _PCFACTORY_H

#include "ComputerFactory.h"

class RAM;
class Processor;

class PcFactory : public ComputerFactory {
  public:
    PcFactory();

    virtual ~PcFactory();

    virtual RAM * produceRam();

    virtual Processor * produceProcessor();

};
#endif
