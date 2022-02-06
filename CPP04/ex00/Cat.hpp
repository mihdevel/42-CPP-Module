#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

# include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat(void);
		Cat(std::string name);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);
		virtual void makeSound(void);

};

#endif //EX00_CAT_HPP
