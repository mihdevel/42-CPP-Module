#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Human("Human");
	ClapTrap Zombie("Zombie");

	Zombie.attack("Human");
	Human.takeDamage(10);
	Human.beRepaired(2);
	return (0);
}