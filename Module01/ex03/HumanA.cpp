#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon)
{
    _name = name;
    _weapon = &weapon;
    //std::cout << "HumanA " << _name << " has been created, weilding a " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    //std::cout << "HumanA named " << _name << " has been deleted" << std::endl;
}

void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}