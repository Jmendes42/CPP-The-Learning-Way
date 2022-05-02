#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie _zombie(name);

    _zombie.announce();
}