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

void	FragTrap::attack(std::string const &target) {
	if (_hp > 0)
	{
		if (_energy > 0)
		{
			_energy--;
			std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _dmg << " points of damage!\n";
		}
		else
			std::cout << "FragTrap " << _name << " doesn't have enough energy to attack!\n";
	}
	else
		std::cout << "FragTrap " << _name << " is dead and cannot attack!\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has been destroyed!\n(FragTrap destructor)\n";
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << _name << " requests a High five!\n";
}