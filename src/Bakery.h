#ifndef BAKERY_H
#define BAKERY_H

#include "Order.h"
#include "BakeryItem.h"
#include "Flour.h"
#include "Egg.h"
#include "Sugar.h"
#include "Yeast.h"
#include "Carrot.h"
#include "Chocolate.h"
#include <string>

class Bakery {
public:
    Bakery(std::string name, int flourQuantity, int eggQuantity, int sugarQuantity, int yeastquantity, int carrotQuantity, int chocolateQuantity);

    std::string getName();
    double getProfit();

    bool processOrder(Order order);

private:
    void buyFlour(int quantity);
    void buyEgg(int quantity);
    void buySugar(int quantity);
    void buyYeast(int quantity);
    void buyCarrot(int quantity);
    void buyChocolate(int quantity);

    bool useIngredients(BakeryItem* item);

    std::string m_name;

    Flour m_flour;
    Egg m_egg;
    Sugar m_sugar;
    Yeast m_yeast;
    Carrot m_carrot;
    Chocolate m_chocolate;

    double m_profit;
};

#endif // BAKERY_H
