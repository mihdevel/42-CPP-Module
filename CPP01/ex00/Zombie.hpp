#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		
	private:
		std::string name;
		void set_name(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif