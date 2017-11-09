#ifndef _PCRAM_H
#define _PCRAM_H

#include <string>
#include "RAM.h"

class PcRAM : public RAM {
  public:
    PcRAM();

    virtual ~PcRAM();

    virtual std::string getName();

};
#endif
