#ifndef FRUITBASKET_H
#define FRUITBASKET_H
#include <vector>
#include "Fruit.h"

class Fruitbasket
{
private:
    std::vector<Fruit*>fruits;
public:
    Fruitbasket();
    ~Fruitbasket();
    bool addFruit(Fruit*);
    Fruit* removeFruit();
    int getTotalFruit();
    int getTotalWeight();
    void showFruits();
};

#endif // FRUITBASKET_H
