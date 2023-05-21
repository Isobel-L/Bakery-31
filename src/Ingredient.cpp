#include "Ingredient.h"
#include <iostream>

Ingredient :: Ingredient(std::string name, int quantity) :
    m_name(name),
    m_quantity(quantity)
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

// Returns true if there's enough of the ingredient
// Returns false if there isn't
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
