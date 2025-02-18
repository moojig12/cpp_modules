#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : _name("Unnamed"), _hp(10), _dmg(0), _energy(10) { std::cout << "You forgot to name this poor fella\n";} 

ClapTrap::ClapTrap(const std::string name) : _name(name), _hp(10), _dmg(0), _energy(10) { std::cout << name << " has been born!\n";}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " self destructed!\n";
}