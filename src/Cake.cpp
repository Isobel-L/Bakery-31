#include "Cake.h"

Cake :: Cake(std::string name) :
    BakeryItem(name)
{
};

double Cake::getPrice()
{
    return 5.0;
}
