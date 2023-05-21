#ifndef EGG_H
#define EGG_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Eggs
class Egg : public Ingredient {
public:
    Egg(int quantity = 0);

    // Returns the price of this ingredient
    virtual double getPrice();
};

#endif // EGG_H
