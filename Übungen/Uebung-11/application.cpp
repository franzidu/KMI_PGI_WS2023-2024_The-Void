#include "application.h"
#include "fruitbasket.h"
#include <iostream>

Application::Application() {
    basket = new Fruitbasket;
}

Application::~Application(){
    delete basket;
}

void Application::userDialog(){
    int action;
    bool isRunning = true;

    while(isRunning){
        std::cout <<"1: Obst in Obstkorb legen" << std::endl;
        std::cout <<"2: Obst aus Obstkorb holen" << std::endl;
        std::cout <<"3: Obst kontrollieren" << std::endl;
        std::cout <<"4: Anzahl Obststücke anzeigen" << std::endl;
        std::cout <<"5: Gesamtgewicht anzeigen" << std::endl;
        std::cout <<"0: Programm beenden" << std::endl;

        std::cin >> action;

        switch(action){
        case 1:{
            int weight;
            std::cout << "Gewicht eingeben: ";
            std::cin >> weight;
            Apple* newApple = new Apple(weight);
            if(!basket->addApple(newApple)){
                delete newApple;
            }
        }break;
        case 2:{
            Apple* removedApple = basket->removeApple();
            removedApple->printInfo();
            delete removedApple;
        }break;
        case 3:{
            std::cout << "Der Korb mit " << basket->getTotalFruits() << " Früchten wiegt "
                      << basket->getTotalWeight() << " Gramm" << std::endl;
            basket->showApples();
        }break;
        case 4:{
            std::cout <<"Früchte insgesamt: " << basket->getTotalFruits() << std::endl;
        }break;
        case 5:{

        }break;
        case 0:
            std::cout << ("Programm wird beendet...") << std::endl;
            isRunning = false;
            break;
        default:
            std::cout << "Auswahl invalide" << std::endl;
            break;
        }
    }
}
