#ifndef CHOCOLATE_CAKE_H
#define CHOCOLATE_CAKE_H

#include "Cake.h"

// A class that represents a type of Cake called Chocolate Cake
class ChocolateCake : public Cake {
public:
    ChocolateCake();
    virtual ~ChocolateCake();

    virtual std::vector<Ingredient*> getIngredients();

private:
    std::vector<Ingredient*> m_ingredients;
};

#endif // CHOCOLATE_CAKE_H
