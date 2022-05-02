#include "Zombie.hpp"

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << ": Was destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*    Zombie::zombieHorde(int N, std::string name)
{
    Zombie *_zombie_hoard = new Zombie[N];

    for (int i = 0; i < N; i++)
        _zombie_hoard[i].set_name(name);
    return (_zombie_hoard);
}