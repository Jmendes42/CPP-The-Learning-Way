#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Carla");
    ScavTrap b("Carlos");

    a.attack("random");
    b.takeDamage(9);
    b.beRepaired(11);
    b.attack("random");
    b.get();

    a = b;

    a.get();
    b.guardGate();
    return (0);
}