#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed") {}

Zombie::Zombie(const std::string s) : _name(s) {}

Zombie::~Zombie(void)
{
	std::cout << _name << " died!\n";
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

//	Keyword "this" refers to the object
/* in this case it's only for clarity purposes
	It's only necessary when there's a name conflict*/
void	Zombie::setName(const std::string name)
{
	this->_name = name;
}