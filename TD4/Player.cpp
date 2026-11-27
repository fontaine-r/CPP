#include "Player.h"

Player::Player(string name):playerName(name){};

void Player::addCardToBench(Card* card){
    benchCards.push_back(card);
}

void Player::displayBench(){
    cout << "Bench cards for Player ";
    cout << playerName;
    cout << " :" << endl;
    for (int i = 0; i < benchCards.size(); i++){
        benchCards[i]->displayInfo();
    };
}

void Player::displayAction(){
    cout << "Action cards for Player ";
    cout << playerName;
    cout << " :" << endl;
    for (PokemonCard* card : actionCards){
        card->displayInfo();
    };
}

void Player::activatePokemonCard(int num){
    Card* card = benchCards[num];
    PokemonCard* pokemon = dynamic_cast<PokemonCard*>(card);
    actionCards.push_back(pokemon);
    benchCards.erase(benchCards.begin() + num);

    cout << playerName;
    cout << " is activating a Pokemon card : ";
    cout << pokemon->getName() << endl;
}

void Player::attachEnergyCard(int energyId, int pokemonId){
    Card* card = benchCards[energyId];
    EnergyCard* energy = dynamic_cast<EnergyCard*>(card);

    pokemon->attachEnergy();

    PokemonCard* pokemon = actionCards[pokemonId];
    
    string type = energy->getType();
    string name = pokemon->getName();
    benchCards.erase(benchCards.begin() + energyId);

    cout << playerName;
    cout << " is attaching Energy Card of type ";
    cout << type;
    cout << " to the Pokemon ";
    cout << name << endl;
}

vector<PokemonCard*> Player::getActionCards(){
    return actionCards;
}

void Player::attack(int pAttId, int pDefId, Player other, int attackId){
    PokemonCard* pAtt = actionCards[pAttId];
    PokemonCard* pDef = other.getActionCards()[pDefId];
    tuple<int, int, string, int> attack = pAtt->getAttacks()[attackId];
    int damage = get<3>(attack);
    
    if(get<1>(attack) >= get<0>(attack)){

        cout << playerName;
        cout << " attacking ";
        cout << other.getName();
        cout << "'s Pokemon ";
        cout << pDef->getName();
        cout << " with the Pokemon ";
        cout << pAtt->getName();
        cout << " with its attack : ";
        cout << get<2>(attack) << endl;
        cout << "Reducing ";
        cout << to_string(damage);
        cout << " from ";
        cout << other.getName();
        cout << "'s Pokemon's HP" << endl;

        pDef->takeDamage(damage);
        cout << "Pokemon ";
        cout << pDef->getName();
        if(pDef->getHP() <= 0){
            other.killPokemon(pDefId);
            cout <<" is KO" << endl;
        }
        else{
            cout <<" is still alive" << endl;
        }
    }
    else{
        cout << "You do not have enough energy" << endl;
    }
}

string Player::getName(){
    return playerName;
}

void Player::killPokemon(int id){
    actionCards.erase(actionCards.begin() + id);
}

void Player::useTrainer(int id){
    Card* card = benchCards[id];
    TrainerCard* trainer = dynamic_cast<TrainerCard*>(card);

    if(trainer->getEffect() == "heal all your action pokemon"){
        cout << playerName;
        cout << " is using the Trainer Card to \"";
        cout << trainer->getEffect();
        cout << "\"" << endl;
        for (PokemonCard* card : actionCards){
            card->heal();
        };
        benchCards.erase(benchCards.begin() + id);
    }
}
