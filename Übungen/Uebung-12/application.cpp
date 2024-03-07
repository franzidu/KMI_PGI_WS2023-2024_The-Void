#include <iostream>
#include "application.h"
#include "fruitbasket.h"
#include "fruitlist.h"

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
        std::cout <<"#################################" << std::endl;
        std::cout <<"1: Obst in Obstkorb legen" << std::endl;
        std::cout <<"2: Obst aus Obstkorb holen" << std::endl;
        std::cout <<"3: Obst kontrollieren" << std::endl;
        std::cout <<"4: Anzahl Obststücke anzeigen" << std::endl;
        std::cout <<"5: Gesamtgewicht anzeigen" << std::endl;
        std::cout <<"0: Programm beenden" << std::endl;
        std::cout <<"#################################" << std::endl;

        std::cin >> action;

        switch(action){
        default:
            std::cout << "Auswahl invalide" << std::endl;
            break;
        case 1:{
            int weight;

            std::cout <<"#################################" << std::endl;
            std::cout <<"Auswahl an Früchten:" << std::endl;
            std::cout <<"1: Apfel (100 bis 200 Gramm)" << std::endl;
            std::cout <<"2: Birne (100 bis 300 Gramm)" << std::endl;
            std::cout <<"3: Aprikose (50 bis 200 Gramm)" << std::endl;
            std::cout <<"4: Banane (250 bis 400 Gramm)" << std::endl;
            std::cout <<"5: Ananas (2000 bis 2800 Gramm)" << std::endl;
            std::cout <<"6: Kiwi (50 bis 150 Gramm)" << std::endl<< std::endl;
            std::cout <<"#################################" << std::endl;

            std::cout << "Fruchtart eingeben: ";

            Fruit* newFruit = new Fruit(weight);
            int chosenFruit;
            std::cin >> chosenFruit;
            std::cout << "Gewicht eingeben: ";
            std::cin >> weight;
            std::cout << "Ausgewählte Frucht: ";

            switch(chosenFruit){
            case 1:
                newFruit = new Apple(weight);
                std::cout << "Apfel" << std::endl;
                break;
            case 2:
                newFruit = new Pear(weight);
                std::cout << "Birne" << std::endl;
                break;
            case 3:
                newFruit = new Apricot(weight);
                std::cout << "Aprikose" << std::endl;
                break;
            case 4:
                newFruit = new Banana(weight);
                std::cout << "Banane" << std::endl;
                break;
            case 5:
                newFruit = new Pineapple(weight);
                std::cout << "Ananas" << std::endl;
                break;
            case 6:
                newFruit = new Kiwi(weight);
                std::cout << "Kiwi" << std::endl;
                break;
            }
            if(!basket->addFruit(newFruit)){
                delete newFruit;
            }
        }
        break;
        case 2:{
            Fruit* removeFruit = basket->removeFruit();
            removeFruit->printInfo();
            delete removeFruit;
        }break;
        case 3:{
            std::cout << "Der Korb mit " << basket->getTotalFruit() << " Früchten wiegt "
                      << basket->getTotalWeight() << " Gramm" << std::endl;
            basket->showFruits();
        }
            break;
        case 4:
            std::cout <<"Früchte insgesamt: " << basket->getTotalFruit() << std::endl;
            break;
        case 5:
            std::cout <<"Gesamtgewicht des Obstkorbes: " << basket->getTotalWeight() << "Gramm"<< std::endl;

            break;
        case 0:
            std::cout << ("Programm wird beendet...") << std::endl;
            isRunning = false;
            break;
        }
    }
}
