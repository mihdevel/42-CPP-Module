#ifndef WEAPON_HHP
# define WEAPON_HHP
# include <iostream>
# include <string>

class Weapon{
	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string str);
		std::string const & getType() const;
	private:
		std::string _type;
};

#endif