#ifndef FRUIT_H
#define FRUIT_H

class Fruit
{
protected:
    int weight;
public:
    Fruit(int weight);
    virtual bool weightInRange();
    virtual ~Fruit() = default;
    int getWeight();
    virtual void printInfo();
};

#endif // FRUIT_H
