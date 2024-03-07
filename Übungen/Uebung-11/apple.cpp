#include "apple.h"
#include <iostream>

Apple::Apple(int weight) {
    this->weight = weight;
    //Destructor
}

bool Apple::weightInRange(){
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

int Apple::getWeight(){
    return weight;
}

void Apple::printInfo(){
    std::cout <<"Apfel mit "<< weight << " Gramm" << std::endl;
}

