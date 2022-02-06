#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void setName(std::string name);
		void attack();
		void setWeapon(Weapon weapon);
	private:
		std::string _name;
		Weapon& _weapon;
};

#endif