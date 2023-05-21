#ifndef CARROT_CAKE_H
#define CARROT_CAKE_H

#include "Cake.h"

// A class that represents a type of Cake called Carrot Cake
class CarrotCake : public Cake {
public:
    CarrotCake();
    virtual ~CarrotCake();

    // Returns a vector containing the ingredients required to make this item
    virtual std::vector<Ingredient*> getIngredients();

private:
    std::vector<Ingredient*> m_ingredients;
};

#endif // CARROT_CAKE_H
