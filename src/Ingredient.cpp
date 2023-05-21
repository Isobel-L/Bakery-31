#include "Ingredient.h"
#include <iostream>

Ingredient :: Ingredient(std::string name, int quantity) :
    m_name(name),
    m_quantity(quantity)
{
}

Ingredient::~Ingredient()
{

}

std::string Ingredient::getName()
{
    return m_name;
}

void Ingredient::buyIngredient(int quantity)
{
    m_quantity += quantity;
}

bool Ingredient :: useIngredient(int quantity)
{
    if (m_quantity < quantity) {
        std::cout << "    Uh oh! There isn't enough " << getName() << "\n";
        return false;
    }

    m_quantity -= quantity;
    std::cout << "    You have used " << quantity << " " << getName() << " and you now have " << m_quantity << " left\n";

    return true;
}

int Ingredient :: getQuantity()
{
    return m_quantity;
}
