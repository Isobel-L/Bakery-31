#ifndef YEAST_H
#define YEAST_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Yeast
class Yeast : public Ingredient {
public:
    Yeast(int quantity = 0);

    // Returns the price of this ingredient
    virtual double getPrice();
};

#endif // YEAST_H
