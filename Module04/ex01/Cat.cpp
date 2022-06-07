#include "Cat.hpp"


//CONSTRUCTORS
Cat::Cat()
{
    std::cout << "Default Cat constructor" << std::endl;
    _brain = new Brain();
    _type = "Cat";
}

Cat::Cat(std::string type)
{
    _type = type;
    std::cout << "Copy Cat constructor of type " << type << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Default Cat destructor" << std::endl;
}

//PUBLIC
void            Cat::makeSound() const
{
    std::cout << "FFFffffff..." << std::endl;
}
