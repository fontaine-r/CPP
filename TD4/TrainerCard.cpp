#include "TrainerCard.h"

TrainerCard::TrainerCard(string name, string effect):trainerEffect(effect){
    cardName = name;
};

void TrainerCard::displayInfo(){
    cout << "Trainer Card - Name : ";
    cout << cardName;
    cout << ", Effect : ";
    cout << trainerEffect << endl;
};

string TrainerCard::getEffect(){
    return trainerEffect;
}