#include "Animal.hpp"


//CONSTRUCTORS
Animal::Animal()
{
    std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(std::string type)
{
    _type = type;
    std::cout << "Copy Animal constructor of type " << type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal destructor" << std::endl;
}

//PUBLIC
std::string    Animal::getType() const
{
    return (_type);
}

void            Animal::makeSound() const
{
    std::cout << "Animal making a sound" << std::endl;
}

//OPERATOR
void    Animal::operator = (Animal &animal)
{
    _type = animal.getType();
}