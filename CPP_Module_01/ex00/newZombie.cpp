#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie _zombie(name);

    return (&_zombie);
}