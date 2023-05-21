#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

// An abstract class that represents a quantity of an ingredient that can be
// used to make a BakeryItem
class Ingredient {
public:
    Ingredient(std::string name, int quantity);

    void buyIngredient(int quantity);
    bool useIngredient(int quantity);

    std::string getName();
    int getQuantity();
    virtual double getPrice() = 0;

private:
    std::string m_name;
    int m_quantity;
};


#endif // INGREDIENT_H
