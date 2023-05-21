#ifndef SUGAR_H
#define SUGAR_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Sugar
class Sugar : public Ingredient {
public:
    Sugar(int quantity = 0);

    virtual double getPrice();
};

#endif // SUGAR_H
