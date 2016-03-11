#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <QString>
#include <QDate>
#include "user.h"

class document
{
public:
    document();
    document(QString namber="",QDate date=QDate::currentDate());
    document(QString namber,QDate date,User author);
    document(int namber,QDate date,User author);
    QString number() const;
    void setNumber(const QString &number);
    void setNumber(const int &number);

    QDate date() const;
    void setDate(const QDate &date);

    User author() const;
    void setAuthor(const User &author);

protected:
    QString _number;
    QDate _date;
    User _author;


};

#endif // DOCUMENT_H
