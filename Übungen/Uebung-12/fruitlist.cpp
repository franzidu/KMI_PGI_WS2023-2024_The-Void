#include <iostream>
#include "fruitlist.h"

Apple::Apple(int weight):Fruit(weight) {}

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

void Apple::printInfo(){
    std::cout << "Apfel mit "<< weight << " Gramm" << std::endl;
}

///////////////////

Pear::Pear(int weight):Fruit(weight) {}

bool Pear::weightInRange(){
    if(weight < 100){
        std::cout <<("zu leicht") << std::endl;
        return false;
    }else if(weight > 300){
        std::cout <<("zu schwer") << std::endl;
        return false;
    }else {
        return true;
    }
}

void Pear::printInfo(){
    std::cout << "Birne mit "<< weight << " Gramm" << std::endl;
}

///////////////////

Apricot::Apricot(int weight):Fruit(weight) {}

bool Apricot::weightInRange(){
    if(weight < 50){
        std::cout <<("zu leicht") << std::endl;
        return false;
    }else if(weight > 200){
        std::cout <<("zu schwer") << std::endl;
        return false;
    }else {
        return true;
    }
}

void Apricot::printInfo(){
    std::cout << "Aprikose mit "<< weight << " Gramm" << std::endl;
}

///////////////////

Banana::Banana(int weight):Fruit(weight) {}

bool Banana::weightInRange(){
    if(weight < 250){
        std::cout <<("zu leicht") << std::endl;
        return false;
    }else if(weight > 400){
        std::cout <<("zu schwer") << std::endl;
        return false;
    }else {
        return true;
    }
}

void Banana::printInfo(){
    std::cout << "Banane mit "<< weight << " Gramm" << std::endl;
}
///////////////////

Pineapple::Pineapple(int weight):Fruit(weight) {}

bool Pineapple::weightInRange(){
    if(weight < 2000){
        std::cout <<("zu leicht") << std::endl;
        return false;
    }else if(weight > 2800){
        std::cout <<("zu schwer") << std::endl;
        return false;
    }else {
        return true;
    }
}

void Pineapple::printInfo(){
    std::cout << "Ananas mit "<< weight << " Gramm" << std::endl;
}
///////////////////

Kiwi::Kiwi(int weight):Fruit(weight) {}

bool Kiwi::weightInRange(){
    if(weight < 50){
        std::cout <<("zu leicht") << std::endl;
        return false;
    }else if(weight > 150){
        std::cout <<("zu schwer") << std::endl;
        return false;
    }else {
        return true;
    }
}

void Kiwi::printInfo(){
    std::cout << "Kiwi mit "<< weight << " Gramm" << std::endl;
}
