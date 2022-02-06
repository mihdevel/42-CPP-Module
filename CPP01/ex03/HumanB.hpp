#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string name);
	~HumanB();
	void setName(std::string name);
	void attack();
	void setWeapon(Weapon& weapon);
	Weapon* _weapon;
private:
	std::string _name;
};

#endif