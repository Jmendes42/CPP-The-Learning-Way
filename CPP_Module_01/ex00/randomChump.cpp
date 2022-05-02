#include "Zombie.hpp"

void    Zombie::randomChump(std::string name)
{
    Zombie _zombie(name);

    _zombie.announce();
}