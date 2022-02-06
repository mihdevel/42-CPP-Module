#ifndef EX00_DOG_HPP
# define EX00_DOG_HPP

# include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog const & src);
		virtual ~Dog(void);

		Dog & operator=(Dog const & rhs);
		virtual void makeSound(void);

};

#endif //EX00_DOG_HPP
