#ifndef ENERGYCARD_H
#define ENERGYCARD_H

#include "Card.h"
#include <iostream>
using namespace std;

class EnergyCard : public Card {
    private :
        string energyType;
    
    public :
        EnergyCard(string);
        string getType();
        void displayInfo();
};

#endif