#ifndef FLOUR_H
#define FLOUR_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Flour
class Flour : public Ingredient {
public:
    Flour(int quantity = 0);

    virtual double getPrice();
};

#endif // FLOUR_H
