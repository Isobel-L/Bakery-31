#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"
#include "BakeryItem.h"

// A class that represents an order made by a customer
class Order {
public:
    Order(Customer* customer, BakeryItem* item);

    Customer* getCustomer();
    BakeryItem* getItem();

    double calculatePrice();

private:
    Customer* m_customer;
    BakeryItem* m_item;
};

#endif // ORDER_H
