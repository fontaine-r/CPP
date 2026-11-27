#ifndef POKEMON_CARD_H
#define POKEMON_CARD_H

#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class PokemonCard : public Card{
    private :
        string pokemonType;
        string familyName;
        int evolutionLevel;
        int maxHP;
        int HP;
        vector<tuple<int, int, string, int>> attacks;
    
    public :
        PokemonCard(string, string, string, int, int, int, string, int, int, string, int);
        void displayInfo();
        vector<tuple<int, int, string, int>> getAttacks();
        int getHP();
        void heal();
        void takeDamage(int);
        void attachEnergy();
};

#endif
