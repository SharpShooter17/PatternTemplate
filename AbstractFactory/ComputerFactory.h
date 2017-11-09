#ifndef _COMPUTERFACTORY_H
#define _COMPUTERFACTORY_H


class RAM;
class Processor;

class ComputerFactory {
  public:
    ComputerFactory();

    virtual ~ComputerFactory();

    virtual RAM * produceRam() = 0;

    virtual Processor * produceProcessor() = 0;

};
#endif
