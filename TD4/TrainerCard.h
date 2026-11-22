#ifndef TRAINERCARD_H
#define TRAINERCARD_H

#include "Card.h"
#include <iostream>
using namespace std;

class TrainerCard : public Card{
    private :
        string trainerEffect;

    public :
        TrainerCard(string, string);
        void displayInfo();
        string getEffect();
};

#endif