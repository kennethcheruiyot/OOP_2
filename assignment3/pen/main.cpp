#include <iostream>

#include <string>

#include "fountainpen.h"

#include "rollerballpen.h"

#include "pen.h"

using namespace std;
 
void writeWithPen(Pen &pen){
    
    cout << pen.drawLine() << endl;
    cout << pen.drawCircle() << endl;
    
}

int main(){
    
    FountainPen fp;
    writeWithPen(fp);
    RollerBallPen rbp("A Pen that Uses a Roller Ball");
    writeWithPen(rbp);
    Pen pen;
    writeWithPen(pen);
}
