#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card{
    protected:
        string cardName;
    
    public:
        virtual void displayInfo() = 0;
        const string getName();
};

#endif