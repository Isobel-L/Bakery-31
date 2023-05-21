#include "Yeast.h"

Yeast::Yeast(int quantity) :
    Ingredient("Yeast", quantity)
{
}

double Yeast::getPrice()
{
    return 2.0;
}
