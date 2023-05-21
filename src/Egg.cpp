#include "Egg.h"

Egg::Egg(int quantity) :
    Ingredient("Egg", quantity)
{
}

double Egg::getPrice()
{
    return 1.0;
}