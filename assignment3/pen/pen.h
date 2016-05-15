#ifndef PEN_H

#define PEN_H

#include <iostream>
#include <string>

class Pen{
    
    std::string pen_name;
public:
    Pen(std::string pen_name = " pen "){
        this->pen_name = pen_name;
    
    }
    std::string getName();
    virtual std::string drawLine();
    virtual std::string drawCircle();
};
#endif