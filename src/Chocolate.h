#ifndef CHOCOLATE_H
#define CHOCOLATE_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Chocolate
class Chocolate : public Ingredient {
public:
    Chocolate(int quantity = 0);

    // Returns the price of this ingredient
    virtual double getPrice();
};

#endif // CHOCOLATE_H
