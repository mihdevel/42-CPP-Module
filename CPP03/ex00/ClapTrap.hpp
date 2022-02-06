#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string _name;
	int32_t _hitPoints;
	int32_t _energyPoints;
	int32_t _attackDamage;
};


#endif //EX00_CLAPTRAP_HPP
