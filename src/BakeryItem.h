#ifndef BAKERY_ITEM_H
#define BAKERY_ITEM_H

#include "Ingredient.h"
#include <string>
#include <vector>

// An abstract class that represents an item that can be bought in the bakery
class BakeryItem{
public:
    BakeryItem(std::string name);
    virtual ~BakeryItem();

    std::string getName();
    virtual double getPrice() = 0;
    virtual std::vector<Ingredient*> getIngredients() = 0;

private:
    std::string m_name;
};

#endif // BAKERY_ITEM_H
