#include <iostream>
#include <string>

#include "lemon.h"
#include "citrusfruit.h"
#include "orange.h"

using namespace std;
int main(){
    
    Lemon lemon(2.0);
    Orange orange(0.5);
    
    Lemon le1(1.4),le2(1.5), le3(1.234);
    Orange or1(0.4), or2(0.3), or3(0.5);
    
    CitrusFruit *cfruits[] = {&le1, &le2, &le3, &or1, &or2, &or3};
    CitrusFruit &rlemon = lemon;
    CitrusFruit *plemon = &lemon;
    CitrusFruit &fruit =  orange;

    for(int i = 0; i < 6; i++)
    cout    << cfruits[i]->getName() << " has a pH "
            << cfruits[i]->getPh() << endl;
    cout    << "lemon is a " << lemon.getName()
            << " and has a pH " << lemon.getPh()   << endl;
    cout    << "rlemon is a " << rlemon.getName()
            << " and has a pH " << rlemon.getPh()  << endl;
    cout    << "plemon is a " << plemon->getName()
            << " and has a pH " << plemon->getPh() << endl;
    cout    << "orange is " << fruit.getName()
            << " and has a pH " << fruit.getPh() << endl;
}
