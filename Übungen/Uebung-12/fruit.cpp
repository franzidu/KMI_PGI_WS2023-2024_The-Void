#include <iostream>
#include "fruit.h"


Fruit::Fruit(int weight) {
    this->weight = weight;
}

bool Fruit::weightInRange(){
    if(weight < 100){
        std::cout <<("zu leicht") << std::endl;
        return false;
    }else if(weight > 200){
        std::cout <<("zu schwer") << std::endl;
        return false;
    }else {
        return true;
    }
}

int Fruit::getWeight(){
    return weight;
}

void Fruit::printInfo(){
    std::cout << "Fruit" << " mit "<< weight << " Gramm" << std::endl;
}
