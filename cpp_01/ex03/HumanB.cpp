#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

void	HumanB::equip(const Weapon& weapon) {
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (!_weapon)
		std::cout << _name << " has no weapon!\n";
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
}