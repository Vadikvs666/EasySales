#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <QString>
#include <QDate>

class document
{
public:
    document();
    QString number() const;
    void setNumber(const QString &number);
    void setNumber(const int &number);

    QDate date() const;
    void setDate(const QDate &date);

protected:
    QString _number;
    QDate _date;


};

#endif // DOCUMENT_H
