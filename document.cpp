#include "document.h"
#include <QVariant>

document::document()
{
}

document::document(QString namber, QDate date)
{
    setNumber(namber);
    setDate(date);

}

document::document(QString namber, QDate date, User author)
{
    setNumber(namber);
    setDate(date);
    setAuthor(author);
}

document::document(int namber, QDate date, User author)
{
    setNumber(namber);
    setDate(date);
    setAuthor(author);

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
User document::author() const
{
    return _author;
}

void document::setAuthor(const User &author)
{
    _author = author;
}



