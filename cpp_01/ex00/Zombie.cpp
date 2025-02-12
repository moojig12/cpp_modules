#include "Zombie.hpp"

Zombie::Zombie(const std::string s) : _name(s) {}

Zombie::~Zombie(void)
{
	std::cout << _name << " died!\n";
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}

void randomChump(const std::string name)
{
	Zombie(name).announce();
}