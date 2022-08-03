#include "Data.hpp"

//CONSTRUCTORS
Data::Data()
{
    std::cout << "Default Data constructor" << std::endl;
}

Data::Data(std::string str)
{
    _str = str;
    std::cout << "Copy Data constructor" << std::endl;
}

Data::~Data()
{
    std::cout << "Default Data destructor" << std::endl;
}

//METHODS
uintptr_t   Data::serialize(Data *ptr)
{
    uintptr_t   ret = reinterpret_cast<uintptr_t>(ptr);
    return ret;
}

Data    *Data::deserialize(uintptr_t raw)
{
    Data    *ret = reinterpret_cast<Data*>(raw);
    return ret;
}

//OVERLOADS
Data    Data::operator = (Data raw)
{
    *this = raw;
    return *this;
}

//GETTERS
void    Data::getStr()
{
    std::cout << "The string is: " << _str << std::endl;
}