#include "WrongAnimal.hpp"


//CONSTRUCTORS
WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    _type = type;
    std::cout << "Copy WrongAnimal constructor of type " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal destructor" << std::endl;
}

//PUBLIC
std::string    WrongAnimal::getType() const
{
    return (_type);
}

void            WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal making a sound" << std::endl;
}

//OPERATOR
void    WrongAnimal::operator = (WrongAnimal &animal)
{
    _type = animal.getType();
}