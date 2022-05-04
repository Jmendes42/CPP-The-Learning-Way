#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    //std::cout << "HumanB " << _name << " has been created!" << std::endl;
}

HumanB::~HumanB()
{
    //std::cout << "HumanB named " << _name << " has been deleted" << std::endl;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon & weapon)
{
    _weapon = &weapon;
}
