#ifndef BREAD_H
#define BREAD_H

#include "BakeryItem.h"

// A class that represents BakeryItems that are Bread
class Bread : public BakeryItem {
public:
    Bread();
    virtual ~Bread();

    virtual double getPrice();
    virtual std::vector<Ingredient*> getIngredients();

private:
    std::vector<Ingredient*> m_ingredients;
};


#endif // BREAD_H
