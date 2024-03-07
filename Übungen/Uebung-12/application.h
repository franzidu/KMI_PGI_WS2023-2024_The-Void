#ifndef APPLICATION_H
#define APPLICATION_H

#include "fruitbasket.h"

class Application
{
private:
    Fruitbasket* basket;
public:
    Application();
    ~Application();
    void userDialog();
};

#endif // APPLICATION_H
