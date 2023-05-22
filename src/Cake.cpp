#include "Cake.h" // include header file 

Cake :: Cake(std::string name) : // cake constructor 
    BakeryItem(name)
{
}; 

double Cake::getPrice() // function that returns cake price
{
    return 5.0;
}
