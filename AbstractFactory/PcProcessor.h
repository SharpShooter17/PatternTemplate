#ifndef _PCPROCESSOR_H
#define _PCPROCESSOR_H
#include <string>
#include "Processor.h"

class PcProcessor : public Processor {
  public:
    PcProcessor();

    virtual ~PcProcessor();

    virtual std::string getName();

};
#endif
