#ifndef _COMPUTER_H
#define _COMPUTER_H
#include "RAM.h"
#include "Processor.h"
#include "ComputerFactory.h"

class RAM;
class Processor;
class ComputerFactory;

class Computer {
  private:
    RAM * ram;

    Processor * processor;


  public:
    Computer();

    ~Computer();

    void createComputer(ComputerFactory * factory);

    void startComputer();

};
#endif
