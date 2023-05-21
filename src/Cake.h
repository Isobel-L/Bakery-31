#ifndef CAKE_H
#define CAKE_H

#include "BakeryItem.h"

// A class that represents BakeryItems that are Cakes
class Cake : public BakeryItem {
public:
    Cake(std::string name);

    virtual double getPrice();
};


#endif // CAKE_H
