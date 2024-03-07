#include "fruitbasket.h"
#include <iostream>

#define MAX_BASKET_WEIGHT 5000

Fruitbasket::Fruitbasket() {}

Fruitbasket::~Fruitbasket(){
    for(auto fruit : fruits){
        delete fruit;
    }
}

bool Fruitbasket::addFruit(Fruit* fruit){
    if(fruit->weightInRange()){
        if(getTotalWeight() + fruit->getWeight() > MAX_BASKET_WEIGHT){
            std::cout << "Obstkorb zu schwer"<<std::endl;
            return false;
        }
        fruits.push_back(fruit);
        return true;
    }
    return false;
}

Fruit* Fruitbasket::removeFruit(){
    if(fruits.size() > 0){
        Fruit* lastFruit = fruits.back();
        fruits.pop_back();
        return lastFruit;
    }
    return nullptr;
}

int Fruitbasket::getTotalWeight(){
    int totalWeight = 0;
    for(auto fruit : fruits){
        totalWeight += fruit->getWeight();
    }
    return totalWeight;
}

int Fruitbasket::getTotalFruit(){
    return fruits.size();
}

void Fruitbasket::showFruits(){
    for(auto fruit : fruits){
        fruit->printInfo();
    }
}
