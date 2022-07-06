#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
    std::cout << "Copy Brain constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor" << std::endl;
}

void Brain::operator = (const Brain &brain)
{
    *this = brain;
}
