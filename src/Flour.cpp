#include "Flour.h"

Flour::Flour(int quantity) :
    Ingredient("Flour", quantity)
{
}

double Flour::getPrice()
{
    return 0.5;
}
