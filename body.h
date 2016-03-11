#ifndef BODY_H
#define BODY_H
#include <vector>
template<typename fieldslist>

class Body
{
public:
    Body()
    {

    };
    bool addLine(fieldslist line);
    bool removeLine(int number);
    bool operator [] (int i);
private:
    std::vector<fieldslist> _body;

};

#endif // BODY_H
