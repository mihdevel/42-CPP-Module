#ifndef EX00_ANIMAL_HPP
# define EX00_ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(std::string name);
		Animal(Animal const & src);
		virtual ~Animal(void);

		Animal & operator=(Animal const & rhs);

		void setType(const std::string & type);
		std::string getType(void);
		void makeSound(void);

	protected:
		std::string _name;
		std::string _type;
};
#endif //EX00_ANIMAL_HPP
