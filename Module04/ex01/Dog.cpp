#include "Dog.hpp"


//CONSTRUCTORS
Dog::Dog()
{
    std::cout << "Default Dog constructor" << std::endl;
    _brain = new Brain();
    _type = "Dog";
}

Dog::Dog(const Dog &dog)
:Animal()
{
    _brain = new Brain();
    *_brain = *dog._brain;
    std::cout << "Copy Dog constructor" << std::endl;
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

Dog    &Dog::operator = (const Dog &animal)
{
    delete _brain;
    *_brain = *animal._brain;
    _type = animal._type;
    std::cout << "Dog assignement operator" << std::endl;
    return *this;
}
