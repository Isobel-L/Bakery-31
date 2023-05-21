#include "Sugar.h"

Sugar::Sugar(int quantity) :
    Ingredient("Flour", quantity)
{
}

double Sugar::getPrice()
{
    return 0.75;
}
