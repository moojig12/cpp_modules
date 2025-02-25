#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("Unnamed"), _hp(100), _dmg(20), _energy(50), _guardStatus(false) {
	std::cout << "constructor for ScavTrap called!, Don't forget to name him\n";
}

void	ScavTrap::guardGate(void) {
	if (!_guardStatus)
	{
		_guardStatus = true;
		std::cout << _name << " is now in gate guarding mode!\n";
	}
	else
	{
		_guardStatus = false;
		std::cout << _name << " is not in gate guarding mode anymore!\n";
	}
}