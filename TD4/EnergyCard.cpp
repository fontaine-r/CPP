#include "EnergyCard.h"

EnergyCard::EnergyCard(string type):energyType(type){
    cardName = "Energy";
};

string EnergyCard::getType(){
    return energyType;
}

void EnergyCard::displayInfo(){

}