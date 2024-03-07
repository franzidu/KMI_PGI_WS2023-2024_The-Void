#ifndef FRUITBASKET_H
#define FRUITBASKET_H
#include <vector>
#include "Apple.h"

class Fruitbasket
{
private:
    std::vector<Apple*>fruits;
public:
    Fruitbasket();
    ~Fruitbasket();
    bool addApple(Apple*);
    Apple* removeApple();
    int getTotalWeight();
    int getTotalFruits();
    void showApples();
};

#endif // FRUITBASKET_H
