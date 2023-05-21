#include "Bread.h"
#include "Flour.h"
#include "Yeast.h"
#include "Egg.h"

Bread::Bread() :
    BakeryItem("Bread"),
    m_ingredients()
{
    m_ingredients.push_back(new Flour(1));
    m_ingredients.push_back(new Yeast(1));
    m_ingredients.push_back(new Egg(1));
}

Bread::~Bread()
{
    for (auto* ingredient : m_ingredients) {
        delete ingredient;
    }
}

double Bread::getPrice()
{
    return 5.0;
}

std::vector<Ingredient*> Bread::getIngredients()
{
    return m_ingredients;
}
