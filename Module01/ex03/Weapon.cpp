#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string weapon)
{
    Weapon::setType(weapon);
    //std::cout << _type << ": Was created!" << std::endl;
}

Weapon::~Weapon()
{
    //std::cout << _type << ": Was destroyed!" << std::endl;
}

void                Weapon::setType(std::string type)
{
    _type = type;
}

const std::string&   Weapon::getType(void)
{
    //std::cout << _type << std::endl;
    return(_type);
}