#include "PokemonCard.h"

PokemonCard::PokemonCard(string name, string type, string line, int stage, int hp, int cost1, string attack1, int power1, int cost2, string attack2, int power2):pokemonType(type), familyName(line), evolutionLevel(stage), maxHP(hp), HP(hp), attacks(vector<tuple<int,int,string,int>>{tuple<int,int,string,int>(cost1, 0, attack1, power1), tuple<int,int,string,int>(cost2, 0, attack2, power2)}){
    cardName = name;
};

void PokemonCard::displayInfo(){
    cout << "Pokemon Card - Name : ";
    cout << cardName;
    cout << ", Type : ";
    cout << pokemonType;
    cout << ", Evolution Level : ";
    cout << evolutionLevel;
    cout << " of the family \"";
    cout << familyName;
    cout << ", HP : ";
    cout << HP;
    cout << "\"" << endl;
    cout << "Attacks :" << endl;
    for (int i = 0; i < attacks.size(); i++){
        cout << "Attack #";
        cout << i;
        cout << " :" << endl;
        cout << "Attack cost : ";
        cout << get<0>(attacks[i]) << endl;
        cout << "Attack current energy storage : ";
        cout << get<1>(attacks[i]) << endl;
        cout << "Attack description : ";
        cout << get<2>(attacks[i]) << endl;
        cout << "Attack damage : ";
        cout << get<3>(attacks[i]) << endl;
    }
}

vector<tuple<int, int, string, int>> PokemonCard::getAttacks(){
    return attacks;
}

int PokemonCard::getHP(){
    return HP;
}

void PokemonCard::heal(){
    HP = maxHP;
}

void PokemonCard::takeDamage(int damage){
    HP -= damage;
}