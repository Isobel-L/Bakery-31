#ifndef CHOCOLATE_H
#define CHOCOLATE_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Chocolate
class Chocolate : public Ingredient {
public:
    Chocolate(int quantity = 0);

    virtual double getPrice();
};

#endif // CHOCOLATE_H
