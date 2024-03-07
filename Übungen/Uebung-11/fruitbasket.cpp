#include "fruitbasket.h"

Fruitbasket::Fruitbasket() {}

Fruitbasket::~Fruitbasket() {
    for(auto fruit : fruits){
        delete fruit;
    }
}


bool Fruitbasket::addApple(Apple* apple){
    if(apple->weightInRange()){
        fruits.push_back(apple);
        return true;
    }
    return false;
}

Apple* Fruitbasket::removeApple(){
    if(fruits.size() > 0){
        Apple* lastApple = fruits.back();
        fruits.pop_back();
        return lastApple;
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

int Fruitbasket::getTotalFruits(){
    return fruits.size();
}

void Fruitbasket::showApples(){
    for(auto fruit : fruits){
        fruit->printInfo();
    }
}
