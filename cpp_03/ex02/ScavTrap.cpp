#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "Unnamed ScavTrap";
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "constructor for ScavTrap called!, Don't forget to name him\n(child default constructor)\n";
}

ScavTrap::ScavTrap(const std::string name) {
	_name = name;
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "name constructor called for ScavTrap" << _name << "\n(child name constructor)\n";
}

ScavTrap::ScavTrap(const ScavTrap &b) : ClapTrap::ClapTrap(b), _guardStatus(b._guardStatus) {
	std::cout << "copy constructor called for ScavTrap" << _name << "\n(child copy constructor)\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &b) {
	std::string	temp = _name;
	if (this != &b)
	{
		ClapTrap::operator=(b);
		_guardStatus = b._guardStatus;
	}
	std::cout << "ScavTrap " << temp << " is assigned from " << b._name << "! (child Copy assignment operator)" << std::endl;
	return *this;
}

void	ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap variant ";
	ClapTrap::attack(target);
}

/* void	ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap variant ";
	ClapTrap::takeDamage(amount);
} */

void	ScavTrap::guardGate(void) {
	if (_hp > 0)
	{
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
	else
		std::cout << _name << " is destroyed and cannot guard the gate!\n";
}

ScavTrap::~ScavTrap() {
	std::cout << _name << " has been destroyed!\n(child destructor)\n";
}