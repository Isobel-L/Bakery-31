#include "Chocolate.h"

Chocolate::Chocolate(int quantity) :
    Ingredient("Chocolate", quantity)
{
}

double Chocolate::getPrice()
{
    return 3.0;
}
