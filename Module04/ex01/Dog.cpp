#include "Dog.hpp"


//CONSTRUCTORS
Dog::Dog()
{
    std::cout << "Default Dog constructor" << std::endl;
    _brain = new Brain();
    _type = "Dog";
}

Dog::Dog(std::string type)
{
    _type = type;
    std::cout << "Copy Dog constructor of type " << type << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Default Dog destructor" << std::endl;
}

//PUBLIC
void            Dog::makeSound() const
{
    std::cout << "Barking" << std::endl;
}
