#ifndef SUGAR_H
#define SUGAR_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Sugar
class Sugar : public Ingredient {
public:
    Sugar(int quantity = 0);

    // Returns the price of this ingredient
    virtual double getPrice();
};

#endif // SUGAR_H
