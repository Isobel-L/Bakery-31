#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include "BakeryItem.h"

// A class that represents an order made by a customer
class Order {
public:
    Order(Customer* customer, BakeryItem* item);

    // Returns the customer who made this order
    Customer* getCustomer();

    // Returns the item the customer ordered
    BakeryItem* getItem();

    // Calculates and returns the amount paid for the item taking into account
    // the discount for the customer's birthday and whether the customer tips
    double calculatePrice();

private:
    Customer* m_customer;
    BakeryItem* m_item;
};

#endif // ORDER_H
