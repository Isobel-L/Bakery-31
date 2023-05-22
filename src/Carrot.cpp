#include "Carrot.h"

//Carrot Constructor 
Carrot::Carrot(int quantity) :
    Ingredient("Carrot", quantity)
{
}

//Resturns price of a Carrot
double Carrot::getPrice()
{
    return 2.0;
}
