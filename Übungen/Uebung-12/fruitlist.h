#ifndef FRUITLIST_H
#define FRUITLIST_H

#include "fruit.h"

class Apple : public Fruit{
public:
    Apple(int weight);
    bool weightInRange();
    void printInfo();
};

///////////////////

class Pear : public Fruit{

public:
    Pear(int weight);
    bool weightInRange();
    void printInfo();
};

///////////////////

class Apricot : public Fruit{

public:
    Apricot(int weight);
    bool weightInRange();
    void printInfo();
};

///////////////////

class Banana : public Fruit{

public:
    Banana(int weight);
    bool weightInRange();
    void printInfo();
};

///////////////////

class Pineapple : public Fruit{

public:
    Pineapple(int weight);
    bool weightInRange();
    void printInfo();
};

///////////////////

class Kiwi : public Fruit{

public:
    Kiwi(int weight);
    bool weightInRange();
    void printInfo();
};

#endif // FRUITLIST_H
