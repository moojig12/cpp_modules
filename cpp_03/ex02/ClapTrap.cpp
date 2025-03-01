#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : _name("Unnamed ClapTrap"), _hp(10), _dmg(0), _energy(10) { std::cout << "ClapTrap Constructor!\n(default constructor)\n";} 

ClapTrap::ClapTrap(const std::string name) : _name(name), _hp(10), _dmg(0), _energy(10) { std::cout << name << " has been born!\n(name string constructor)\n";}

ClapTrap::ClapTrap(const ClapTrap &b) : _name(b._name), _hp(b._hp), _dmg(b._dmg), _energy(b._energy) {
	std::cout << _name << " has been copied!\n(Copy constructor)\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &b) {
	if (this != &b) {
		_name = b._name;
		_dmg = b._dmg;
		_energy = b._energy;
		_hp = b._hp;
		std::cout << _name << " has been assigned!\n(copy assignment constructor)\n";
	}
	return (*this);
}

ClapTrap::~ClapTrap() { std::cout << _name << " self destructed!\n(destructor)\n";}

void ClapTrap::attack(const std::string& target)
{
	if (_hp > 0)
	{
		if (_energy > 0)
		{
			_energy--;
			std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _dmg << " points of damage!\n";
		}
		else
			std::cout << "ClapTrap " << _name << " doesn't have enough energy to attack!\n";
	}
	else
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		if (_hp > amount)
		{
			_hp -= amount;
			std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!\n";
		}
		else
		{
			_hp = 0;
			std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and explodes!\n";
		}
	}
	else
		std::cout << "ClapTrap " << _name << " is dead and cannot take anymore damage!\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp > 0)
	{
		if (_energy >= amount)
		{
			_energy -= amount;
			_hp += amount;
			std::cout << "ClapTrap " << _name << " repairs self!\n";
		}
		else
			std::cout << "ClapTrap " << _name << " doesn't have enough energy to repair for " << amount << " hp!\n";
	}
	else
		std::cout << "ClapTrap " << _name << " is dead and cannot repair self!\n";
}

void	ClapTrap::printStats(void) {
	std::cout << "\e[1;38:5:58m" << _name \
	<< "\e[0m\n" << "\e[1;38:5:34m	Health: " << _hp << "\e[0m\n\e[1;38:5:184m	Energy: " << _energy << "\e[0m\n";
}