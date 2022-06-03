#include "WrongCat.hpp"


//CONSTRUCTORS
WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Default WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    _type = type;
    std::cout << "Copy WrongCat constructor of type " << type << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Default WrongCat destructor" << std::endl;
}

/*//PUBLIC
void            Cat::makeSound() const
{
    std::cout << "FFFffffff..." << std::endl;
}*/
