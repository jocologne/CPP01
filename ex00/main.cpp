
#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	std::cout << std::endl;

	// Stack allocation (automatic destruction)
	std::cout << GREEN <<"=== Stack zombie ===" << RESET <<std::endl;
	randomChump("Stack");

	// Heap allocation (manual destruction needed)
	std::cout << RED <<"\n=== Heap zombie ===" << RESET <<std::endl;
	Zombie* heap_zombie = newZombie("Heap");
	heap_zombie->announce();
	delete heap_zombie;
	
	std::cout << std::endl;

	return 0;
}