#include "Animal.hpp"


//CONSTRUCTORS
Animal::Animal()
{
    std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
    std::cout << "Copy Animal constructor of type " << _type << std::endl;
    return ;
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
Animal*    Animal::operator = (const Animal &animal)
{
    return (new Animal(animal));
}