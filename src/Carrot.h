#ifndef CARROT_H
#define CARROT_H

#include "Ingredient.h"

// A class that represents a quantity of the Ingredient Carrots
class Carrot : public Ingredient {
public:
    Carrot(int quantity = 0);

    virtual double getPrice();
};


#endif // CARROT_H
