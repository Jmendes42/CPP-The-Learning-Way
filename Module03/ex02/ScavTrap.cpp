#include "ScavTrap.hpp"


//CONSTRUCTORS
ScavTrap::ScavTrap()
{
    std::cout << "Default constructor: ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _damage = 20;
    _energy = 50;
    std::cout << "Copy constructor: ScavTrap with the name " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default destructor: ScavTrap with the name " << _name << std::endl;
}


//PUBLIC FUNCTIONS
void    ScavTrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energy > 0)
    {
        _energy--;
        std::cout << "ScavTrap " << _name << " dealt " << _damage << " to target " << target << std::endl;
        std::cout << "ScavTrap " << _name << " has " << _energy << " energy left" << std::endl; 
    }
    else if (_hitPoints == 0)
        std::cout << "ScavTrap " << _name << " has no hit points left" << std::endl;
    else if (_energy == 0)
        std::cout << "ScavTrap " << _name << " has no energy left" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is in gate keeper mode" << std::endl;
}