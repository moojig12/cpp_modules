#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_name = "Unnamed FragTrap";
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << "constructor for FragTrap called!, Don't forget to name him\n(FragTrap default constructor)\n";
}

FragTrap::FragTrap(const std::string name) {
	_name = name;
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << "name constructor called for " << _name << "\n(FragTrap name constructor)\n";
}

FragTrap::FragTrap(const FragTrap &b) : ClapTrap::ClapTrap(b) {
	std::cout << "copy constructor called for " << _name << "\n(FragTrap copy constructor)\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &b) {
	std::string	temp = _name;
	if (this != &b)
	{
		ClapTrap::operator=(b);
	}
	std::cout << "FragTrap " << temp << " is assigned from " << b._name << "! (FragTrap Copy assignment operator)" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been destroyed!\n(FragTrap destructor)\n";
}

void	FragTrap::highFiveGuys(void) {
	if (_hp > 0)
		std::cout << "FragTrap " << _name << " requests a High five!\n";
	else
		std::cout << "FragTrap " << _name << " is dead and cannot request a High five!\n";
}