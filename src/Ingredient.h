#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

// An abstract class that represents a quantity of an ingredient that can be
// used to make a BakeryItem
class Ingredient {
public:
    Ingredient(std::string name, int quantity);
    virtual ~Ingredient();

    // Increases the quantity of this ingredient (as if some were bought)
    void buyIngredient(int quantity);

    // Tries to reduce the quantity of this ingredient by the given amount (as
    // if some were used)
    // Returns true if there was enough of this ingredient
    // Returns false (and does nothing) if there was not enough
    bool useIngredient(int quantity);

    // Returns the name of this ingredient
    std::string getName();

    // Returns the quantity of this ingredient
    int getQuantity();

    // Returns the price of this ingredient
    virtual double getPrice() = 0;

private:
    std::string m_name;
    int m_quantity;
};


#endif // INGREDIENT_H
