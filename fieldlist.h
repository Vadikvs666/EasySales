#ifndef FIELDLIST_H
#define FIELDLIST_H
#include <QString>

class fieldlist
{
public:
    fieldlist();
    int number() const;
    void setNumber(int number);

    QString product() const;
    void setProduct(const QString &product);

    int count() const;
    void setCount(int count);

    float price() const;
    void setPrice(float price);

    float summ() const;
    void setSumm(float summ);

private:
    int _number;
    QString _product;
    int _count;
    float _price;
    float _summ;
};

#endif // FIELDLIST_H
