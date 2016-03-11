#include "fieldlist.h"

fieldlist::fieldlist()
{
}
int fieldlist::number() const
{
    return _number;
}

void fieldlist::setNumber(int number)
{
    _number = number;
}
QString fieldlist::product() const
{
    return _product;
}

void fieldlist::setProduct(const QString &product)
{
    _product = product;
}
int fieldlist::count() const
{
    return _count;
}

void fieldlist::setCount(int count)
{
    _count = count;
}
float fieldlist::price() const
{
    return _price;
}

void fieldlist::setPrice(float price)
{
    _price = price;
}
float fieldlist::summ() const
{
    return _summ;
}

void fieldlist::setSumm(float summ)
{
    _summ = summ;
}





