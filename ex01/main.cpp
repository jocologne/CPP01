
#include "Zombie.hpp"

int main()
{
	int hordeSize = 5;
	Zombie* horde = zombieHorde(hordeSize, "Zombie");
	for (int i = 0; i < hordeSize; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}