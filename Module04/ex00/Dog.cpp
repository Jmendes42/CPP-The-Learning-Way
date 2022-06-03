#include "Dog.hpp"


//CONSTRUCTORS
Dog::Dog()
{
    _type = "Dog";
    std::cout << "Default Dog constructor" << std::endl;
}

Dog::Dog(std::string type)
{
    _type = type;
    std::cout << "Copy Dog constructor of type " << type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Default Dog destructor" << std::endl;
}

//PUBLIC
void            Dog::makeSound() const
{
    std::cout << "Barking" << std::endl;
}
