#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << this->name << ": Created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << ": Was destroyed" << std::endl;
}