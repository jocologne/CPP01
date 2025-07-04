
#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Unnamed";
}

Zombie::~Zombie()
{
	std::cout << RED << name << " destroyed" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << GREEN << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}