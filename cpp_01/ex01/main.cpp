#include "Zombie.hpp"


int	main(void)
{
	int	horde_size = 10;
	Zombie*	Horde = zombieHorde(horde_size, "David");

	// Check if their names are properly assigned
	for (int i = 0; i < horde_size; i++)
		Horde[i].announce();

	delete[] Horde;
}