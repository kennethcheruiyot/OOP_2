#ifndef LEMON_H

#define LEMON_H

#include "citrusfruit.h"

#include <iostream>

#include <string>

class Lemon : public CitrusFruit{
    
public:
    Lemon(float ph) : CitrusFruit(ph){}
    const char * getName();
    float getPh();
};
#endif