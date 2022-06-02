#include "FragTrap.hpp"


//CONSTRUCTORS
FragTrap::FragTrap()
{
    std::cout << "Default constructor: FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _damage = 30;
    _energy = 100;
    std::cout << "Copy constructor: FragTrap with the name " << name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Default destructor: FragTrap with the name " << _name << std::endl;
}


//PUBLIC FUNCTIONS
void    FragTrap::highFivesGuys()
{
    std::cout << "+HighFive!" << std::endl;
}