#ifndef _LAPTOPPROCESSOR_H
#define _LAPTOPPROCESSOR_H
#include <string>
#include "Processor.h"

class LaptopProcessor : public Processor {
  public:
    LaptopProcessor();

    virtual ~LaptopProcessor();

    virtual std::string getName();

};
#endif
