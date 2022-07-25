#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
    }
    std::cout << "Copy Brain constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor" << std::endl;
}

Brain   &Brain::operator = (const Brain &brain)
{
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
    }
    return *this;
}
