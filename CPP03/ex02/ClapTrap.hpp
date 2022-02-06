#ifndef EX00_CLAPTRAP_HPP
# define EX00_CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & rhs);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int32_t _hitPoints;
		int32_t _energyPoints;
		int32_t _attackDamage;
};

#endif //EX00_CLAPTRAP_HPP
