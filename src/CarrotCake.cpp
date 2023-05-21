#include "CarrotCake.h"
#include "Flour.h"
#include "Sugar.h"
#include "Egg.h"
#include "Carrot.h"

CarrotCake::CarrotCake() :
    Cake("Carrot Cake"),
    m_ingredients()
{
    m_ingredients.push_back(new Flour(1));
    m_ingredients.push_back(new Sugar(1));
    m_ingredients.push_back(new Egg(1));
    m_ingredients.push_back(new Carrot(1));
}

CarrotCake::~CarrotCake()
{
    for (auto* ingredient : m_ingredients) {
        delete ingredient;
    }
}

std::vector<Ingredient*> CarrotCake::getIngredients()
{
    return m_ingredients;
}
