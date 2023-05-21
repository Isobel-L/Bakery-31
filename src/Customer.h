#ifndef CUSTOMER_H
#define CUSTOMER_H

// A class that represents a customer in the bakery
class Customer {
public:
    Customer();

    bool isBirthday();
    bool willTip();

private:
    bool m_isBirthday;
    bool m_willTip;
};

#endif //CUSTOMER_H
