#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Human("Human");
	FragTrap Zombie("Zombie");

	Zombie.attack("Human");
	Zombie.highFivesGuys();
	Human.takeDamage(10);
	Human.beRepaired(2);
	return (0);
}