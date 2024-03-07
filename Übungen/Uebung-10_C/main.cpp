#include <iostream>
#include "fruitbasket.h"

int main()
{
    Fruitbasket basket;
    basket.addApple(150); // 150gr Apfel reinlegen
    basket.addApple(99); // kein Apfel rein
    // Ausgabe auf der Konsole: "zu leicht"
    basket.addApple(201); // kein Apfel rein
    // Ausgabe auf der Konsole: "zu schwer"
    basket.addApple(200);
    printf("%d\n", basket.getTotalFruits()); // Ausgabe: 2
    printf("%d\n", basket.getTotalWeight()); // Ausgabe: 350
    for (int i = 1; i <= 9; i++) {
        basket.addApple(100);
    } // Ausgabe: "zu viele Aepfel"
    printf("%d\n", basket.getTotalFruits()); // Ausgabe: 10
    printf("%d\n", basket.getTotalWeight()); // Ausgabe: 1150
    return 0;
}
