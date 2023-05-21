#include "Sugar.h"

Sugar::Sugar(int quantity) :
    Ingredient("Sugar", quantity)
{
}

double Sugar::getPrice()
{
    return 0.75;
}
