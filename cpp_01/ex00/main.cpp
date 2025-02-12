#include "Zombie.hpp"


int	main(void)
{
	// Heap allocated Zombie
	Zombie*	zombo2 = newZombie("Carl");
	zombo2->announce();

	{
		std::cout << "Kevin gets stack allocated inside scope\n";
		// Stack allocated Zomibe
		Zombie	zombo1("Kevin");
		zombo1.announce();
		std::cout << "Kevin now gets out of scope\n";
	}
	randomChump("Devin");

	delete(zombo2);
}