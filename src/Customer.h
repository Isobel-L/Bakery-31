#ifndef CUSTOMER_H
#define CUSTOMER_H

// A class that represents a customer in the bakery
class Customer {
public:
    Customer();

    // Returns true if today is this customer's birthday; false otherwise
    bool isBirthday();

    // Returns true if this customer will leave a tip; false otherwise
    bool willTip();

private:
    bool m_isBirthday;
    bool m_willTip;
};

#endif //CUSTOMER_H
