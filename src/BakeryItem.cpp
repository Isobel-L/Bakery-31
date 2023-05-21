#include "BakeryItem.h"

BakeryItem::BakeryItem(std::string name) :
    m_name(name)
{
}

std::string BakeryItem::getName()
{
    return m_name;
}