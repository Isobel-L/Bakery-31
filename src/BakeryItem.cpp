#include "BakeryItem.h"

BakeryItem::BakeryItem(std::string name) :
    m_name(name)
{
}

BakeryItem::~BakeryItem()
{
}

std::string BakeryItem::getName()
{
    return m_name;
}