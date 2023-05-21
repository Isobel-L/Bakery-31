#include "Order.h"
#include <iostream>

Order::Order(Customer* customer, BakeryItem* item) :
    m_customer(customer),
    m_item(item)
{
}

Customer* Order::getCustomer()
{
    return m_customer;
}

BakeryItem* Order::getItem()
{
    return m_item;
}

double Order::calculatePrice()
{
    double price = m_item->getPrice();

    if (m_customer->isBirthday()) {
        std::cout << "It's the customer's birthday, so there's a 10% discount\n";
        price *= 0.9;
    }

    if (m_customer->willTip()) {
        std::cout << "The customer has left a $5 tip\n";
        price += 5.0;
    }

    return price;
}
