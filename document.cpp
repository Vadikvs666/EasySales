#include "document.h"
#include <QVariant>

document::document()
{
}
QString document::number() const
{
    return _number;
}

void document::setNumber(const int &number)
{
    QVariant temp=number;
    _number=temp.toString();

}
void document::setNumber(const QString &number)
{
    _number = number;
}
QDate document::date() const
{
    return _date;
}

void document::setDate(const QDate &date)
{
    _date = date;
}


