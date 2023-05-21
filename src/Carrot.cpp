#include "Carrot.h"

Carrot::Carrot(int quantity) :
    Ingredient("Carrot", quantity)
{
}

double Carrot::getPrice()
{
    return 2.0;
}
