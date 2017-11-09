#ifndef _PROCESSOR_H
#define _PROCESSOR_H
#include <string>

class Processor {
  public:
    Processor();

    virtual ~Processor();

    virtual std::string getName() = 0;

};
#endif
