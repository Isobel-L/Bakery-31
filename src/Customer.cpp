#include "Customer.h"
#include <cstdlib>
#include <ctime>

Customer::Customer() :
    m_isBirthday(false),
    m_willTip(false)
{
    int randomBday = rand() % 10 + 1;
    if (randomBday >= 9) {
        m_isBirthday = true;
    }
    else {
        m_isBirthday = false;
    }

    int randomTip = rand() % 10 + 1;
    if (randomTip >= 8) {
        m_willTip = true;
    }
    else {
        m_willTip = false;
    }
}

bool Customer::isBirthday()
{
    return m_isBirthday;;
}

bool Customer::willTip()
{
    return m_willTip;
}
