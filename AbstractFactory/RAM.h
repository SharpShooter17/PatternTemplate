#ifndef _RAM_H
#define _RAM_H
#include <string>

class RAM {
  public:
    RAM();

    virtual ~RAM();

    virtual std::string getName() = 0;

};
#endif
