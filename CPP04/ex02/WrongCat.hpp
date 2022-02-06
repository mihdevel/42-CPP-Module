#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string name);
		WrongCat(WrongCat const & src);
		~WrongCat(void);

		WrongCat & operator=(WrongCat const & rhs);
		void makeSound(void);

};

#endif //EX00_WRONGCAT_HPP
