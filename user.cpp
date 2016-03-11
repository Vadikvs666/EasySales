#include "user.h"

User::User()
{
}
int User::id() const
{
    return _id;
}

void User::setId(int id)
{
    _id = id;
}
QString User::name() const
{
    return _name;
}

void User::setName(const QString &name)
{
    _name = name;
}
QString User::password() const
{
    return _password;
}

void User::setPassword(const QString &password)
{
    _password = password;
}



