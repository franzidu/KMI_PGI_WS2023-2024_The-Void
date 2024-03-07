#include "konto.h"
#include <iomanip>
#include <iostream>


int menueAuswahl();

int main(){

    Konto meinKonto(15000.00);

    int auswahl = 0;

    do{
        switch (auswahl = menueAuswahl()){
        case 0: break;
        case 1: meinKonto.kontostandAnzeigen(); break;
        case 2: meinKonto.einzahlen(); break;
        case 3: meinKonto.auszahlen(); break;
        default:
            std::cout << "Ungueltige Eingabe\n";
        }
    }while(auswahl > 0);
    return 0;
}

int menueAuswahl(){
    std::cout <<"\n\nWähle eine Aktion:\n\n";
    std::cout <<"1: Kontostand anzeigen\n";
    std::cout <<"2: Geld einzahlen\n";
    std::cout <<"3: Geld auszahlen\n";
    std::cout <<"0: Programm abbrechen\n";

    int input;
    std::cin >> input;
    return input;
}
