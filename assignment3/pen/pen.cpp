#include "pen.h"

#include <iostream>
#include <string>

std::string Pen::getName(){return pen_name;}

std::string Pen::drawLine(){
    return getName().append("draws a line.");
}
std::string Pen::drawCircle(){
    return getName().append(" draws a circle.");
}