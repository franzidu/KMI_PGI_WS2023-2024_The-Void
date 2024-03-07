#ifndef FRUITBASKET_H
#define FRUITBASKET_H


class Fruitbasket
{
private:
    int numberOfApples;
    int weight;
public:
    Fruitbasket();
    void addApple(int weight);
    int getTotalFruits();
    int getTotalWeight();
};

#endif // FRUITBASKET_H
