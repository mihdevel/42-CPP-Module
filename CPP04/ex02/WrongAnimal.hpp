#ifndef EX00_WRONGANIMAL_HPP
# define EX00_WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal(void);

		WrongAnimal & operator=(WrongAnimal const & rhs);

		void setType(const std::string & type);
		std::string getType(void);
		void makeSound(void);

	protected:
		std::string _name;
		std::string _type;
};
#endif //EX00_WRONGANIMAL_HPP
