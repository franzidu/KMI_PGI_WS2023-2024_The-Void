#ifndef APPLE_H
#define APPLE_H

class Apple
{
private:
    int weight;
public:
    Apple(int weight);
    bool weightInRange();
    int getWeight();
    void printInfo();
};

#endif // APPLE_H
