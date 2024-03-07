#include "fruitbasket.h"
#include <iostream>
#define maxApples 10

Fruitbasket::Fruitbasket() {
    weight = 0;
    numberOfApples = 0;
}

void Fruitbasket::addApple(int weight){
    //Reinlegen eines Apfels mit Gewicht x, wobei 100 ≤ x ≤ 200
    if(weight < 100){
        std::cout <<("zu leicht") << std::endl;
    }else if(weight > 200){
        std::cout <<("zu schwer") << std::endl;
    }else if (numberOfApples >= maxApples){
        std::cout <<("zu viele Äpfel") << std::endl;
    }else{
        numberOfApples++;
        this->weight += weight;
    }
}

int Fruitbasket::getTotalFruits(){
    //Gibt die Anzahl der reingelegten Äpfel zurück (max. 10)
    return numberOfApples;
}

int Fruitbasket::getTotalWeight(){
    //Gibt das Gesamtgewicht der reingelegten Äpfel zurück
    return weight;
}

