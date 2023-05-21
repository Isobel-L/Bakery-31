#include "ChocolateCake.h"
#include "Flour.h"
#include "Sugar.h"
#include "Egg.h"
#include "Chocolate.h"

ChocolateCake::ChocolateCake() :
    Cake("Chocolate Cake"),
    m_ingredients()
{
    m_ingredients.push_back(new Flour(1));
    m_ingredients.push_back(new Sugar(1));
    m_ingredients.push_back(new Egg(1));
    m_ingredients.push_back(new Chocolate(1));
}

ChocolateCake::~ChocolateCake()
{
    for (auto* ingredient : m_ingredients) {
        delete ingredient;
    }
}

std::vector<Ingredient*> ChocolateCake::getIngredients()
{
    return m_ingredients;
}
