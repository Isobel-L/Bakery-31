#ifndef BREAD_H
#define BREAD_H

#include "BakeryItem.h"

// A class that represents BakeryItems that are Bread
class Bread : public BakeryItem {
public:
    Bread();
    virtual ~Bread();

    // Returns the price of this item
    virtual double getPrice();

    // Returns a vector containing the ingredients required to make this item
    virtual std::vector<Ingredient*> getIngredients();

private:
    std::vector<Ingredient*> m_ingredients;
};


#endif // BREAD_H
