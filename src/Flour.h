#ifndef FLOUR_H
#define FLOUR_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Flour
class Flour : public Ingredient {
public:
    Flour(int quantity = 0);

    // Returns the price of this ingredient
    virtual double getPrice();
};

#endif // FLOUR_H
