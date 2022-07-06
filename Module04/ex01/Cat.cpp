#include "Cat.hpp"


//CONSTRUCTORS
Cat::Cat()
{
    std::cout << "Default Cat constructor" << std::endl;
    _brain = new Brain();
    _type = "Cat";
}

Cat::Cat(const Cat &cat)
{
    _brain = new Brain();
    *_brain = *cat._brain;
    std::cout << "Copy Cat constructor" << std::endl;
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

//OPERATOR
void    Cat::operator = (const Cat &cat)
{
    _brain = new Brain();
    *_brain = *cat._brain;
    _type = cat.getType();
    std::cout << "Cat assignement operator" << std::endl;
}
