#ifndef EX00_DOG_HPP
# define EX00_DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	public:
		Dog(void);
		Dog(std::string name);
		Dog(Dog const & src);
		~Dog(void);

		Dog & operator=(Dog const & rhs);
		virtual void makeSound(void);

	private:
		Brain *_brain;
};

#endif //EX00_DOG_HPP
