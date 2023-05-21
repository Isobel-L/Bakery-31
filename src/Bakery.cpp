#include "Bakery.h"
#include <iostream>

Bakery::Bakery(std::string name, int flourQuantity, int eggQuantity, int sugarQuantity, int yeastQuantity, int carrotQuantity, int chocolateQuantity) :
    m_name(name),
    m_flour(),
    m_egg(),
    m_sugar(),
    m_yeast(),
    m_carrot(),
    m_chocolate(),
    m_profit(0.0)
{
    buyFlour(flourQuantity);
    buyEgg(eggQuantity);
    buySugar(sugarQuantity);
    buyYeast(yeastQuantity);
    buyCarrot(carrotQuantity);
    buyChocolate(chocolateQuantity);
}

std::string Bakery::getName()
{
    return m_name;
}

double Bakery::getProfit()
{
    return m_profit;
}

bool Bakery::processOrder(Order order)
{
    if (!useIngredients(order.getItem())) {
        std::cout << "\n";
        std::cout << "The customer has left disappointed\n";
        return false;
    }
    
    double price = order.calculatePrice();
    m_profit += price;
    
    std::cout << "\n";
    std::cout << "The customer paid $" << price << "\n";
    std::cout << "Your profit is now $" << m_profit << "\n";

    return true;
}

bool Bakery::useIngredients(BakeryItem* item)
{
    for (auto* item : item->getIngredients()) {
        if (item->getName() == "Flour") {
            if (!m_flour.useIngredient(item->getQuantity())) {
                return false;
            }
        }
        else if (item->getName() == "Egg") {
            if (!m_egg.useIngredient(item->getQuantity())) {
                return false;
            }
        }
        else if (item->getName() == "Sugar") {
            if (!m_sugar.useIngredient(item->getQuantity())) {
                return false;
            }
        }
        else if (item->getName() == "Yeast") {
            if (!m_yeast.useIngredient(item->getQuantity())) {
                return false;
            }
        }
        else if (item->getName() == "Carrot") {
            if (!m_carrot.useIngredient(item->getQuantity())) {
                return false;
            }
        }
        else if (item->getName() == "Chocolate") {
            if (!m_chocolate.useIngredient(item->getQuantity())) {
                return false;
            }
        }
        else {
            std::cout << "Unknown ingredient : " << item->getName() << std::endl;
            return false;
        }
    }

    return true;
}

void Bakery::buyFlour(int quantity)
{
    m_flour.buyIngredient(quantity);
    m_profit -= quantity * m_flour.getPrice();
}

void Bakery::buyEgg(int quantity)
{
    m_egg.buyIngredient(quantity);
    m_profit -= quantity * m_egg.getPrice();
}

void Bakery::buySugar(int quantity)
{
    m_sugar.buyIngredient(quantity);
    m_profit -= quantity * m_sugar.getPrice();
}

void Bakery::buyYeast(int quantity)
{
    m_yeast.buyIngredient(quantity);
    m_profit -= quantity * m_yeast.getPrice();
}

void Bakery::buyCarrot(int quantity)
{
    m_carrot.buyIngredient(quantity);
    m_profit -= quantity * m_carrot.getPrice();
}

void Bakery::buyChocolate(int quantity)
{
    m_chocolate.buyIngredient(quantity);
    m_profit -= quantity * m_chocolate.getPrice();
}
