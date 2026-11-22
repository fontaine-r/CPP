#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include "PokemonCard.h"
#include "EnergyCard.h"
#include "TrainerCard.h"
#include <iostream>
#include <vector>
using namespace std;

class Player{
    private :
        string playerName;
        vector<Card*> benchCards;
        vector<PokemonCard*> actionCards;
    
    public :
        Player(string);
        void addCardToBench(Card*);
        void displayBench();
        void displayAction();
        void activatePokemonCard(int);
        void killPokemon(int);
        void attachEnergyCard(int, int);
        void attack(int, int, Player, int);
        vector<PokemonCard*> getActionCards();
        string getName();
        void useTrainer(int);
};

#endif