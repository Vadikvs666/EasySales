#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    User();
    int id() const;
    void setId(int id);

    QString name() const;
    void setName(const QString &name);

    QString password() const;
    void setPassword(const QString &password);

private:
    int _id;
    QString _name;
    QString _password;
};

#endif // USER_H
