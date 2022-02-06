#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
			~FragTrap(void);

		FragTrap & operator=(FragTrap const & rhs);

		void highFivesGuys(void);
};

#endif //EX02_FRAGTRAP_HPP
