#include "Cat.hpp"


//CONSTRUCTORS
Cat::Cat()
{
    std::cout << "Default Cat constructor" << std::endl;
    _brain = new Brain();
    _type = "Cat";
}

Cat::Cat(const Cat &cat)
:Animal()
{
    _brain = new Brain();
    *_brain = *cat._brain;
    _type = cat._type;
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
Cat    &Cat::operator = (const Cat &animal)
{
    *_brain = *animal._brain;
    _type = animal._type;
    std::cout << "Cat assignement operator" << std::endl;
    
    return *this;
}
