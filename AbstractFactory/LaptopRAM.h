#ifndef _LAPTOPRAM_H
#define _LAPTOPRAM_H
#include <string>
#include "RAM.h"

class LaptopRAM : public RAM {
  public:
    LaptopRAM();

    virtual ~LaptopRAM();

    virtual std::string getName();

};
#endif
