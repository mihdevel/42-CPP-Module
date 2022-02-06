#ifndef EX01_BRAIN_HPP
# define EX01_BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		Brain & operator=(Brain const & rhs);

		std::string ideas[100];
};

#endif //EX01_BRAIN_HPP