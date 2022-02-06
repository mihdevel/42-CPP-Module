#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Human("Human");
	ScavTrap Zombie("Zombie");

	Zombie.attack("Human");
	Zombie.guardGate();
	Human.takeDamage(10);
	Human.beRepaired(2);
	return (0);
}