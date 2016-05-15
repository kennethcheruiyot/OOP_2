#ifndef ORANGE_H
#define ORANGE_H

#include <iostream>

#include <string>
#include "citrusfruit.h"

class Orange : public CitrusFruit{
    
public:
    Orange(float ph) : CitrusFruit(ph){}
    const char * getName();
    float getPh();
    
};
#endif