
#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#define RED 	"\033[31m"
#define GREEN 	"\033[32m"
#define RESET	"\033[0m"

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif