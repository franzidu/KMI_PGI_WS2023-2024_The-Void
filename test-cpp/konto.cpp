#include <stdio.h>
#include <iostream>
#include "konto.h"

Konto::Konto(){
    this->kontostand = 0;
}

Konto::Konto(float dispo){
    this->kontostand = dispo;
}

Konto::~Konto(){
    std::cout << "Prozess beendet.";
}

//Setter
void Konto::setLimit(double dispo) {
    if(dispo<= 0)
        limit= dispo;
}

//Getter
float Konto::getLimit() const {
    return limit;
}

void Konto::auszahlen(){
    std::cout << "Wie viel möchtest du abheben?\n";
    float Betrag;
    std::cin >> Betrag;

    if(Betrag <= limit){
        std::cout << "Limit überschritten. Bitte wähle einen geringeren Betrag. \n";
        return;
    }else if(Betrag >= kontostand){
        std::cout << "Kontostand deckt gewählten Betrag nicht ab. Bitte wähle einen geringeren Betrag.\n";
        return;
    }else{
        kontostand -= Betrag;
        kontostandAnzeigen();
    }
}

void Konto::einzahlen(){
    std::cout << "Wie viel möchtest du einzahlen?\n" ;
    float Betrag;
    std::cin >> Betrag;
    kontostand += Betrag;
    kontostandAnzeigen();
}

void Konto::kontostandAnzeigen(){
    std::cout << "Dein Kontostand: ";
    std::cout << kontostand << " €\n";
}

void Konto::limitAnzeigen(){
    std::cout <<"Dein Kreditlimit: ";
    std::cout << limit << " €\n";
}
