#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombos = new Zombie[N];

	std::cout << "Checking names\n";
	for (int i = 0; i < N; i++)
		zombos[i].announce();

	std::cout << "Initializing names now!\n";
	for (int i = 0; i < N; i++)
		zombos[i].setName(name);

	return (zombos);
}
