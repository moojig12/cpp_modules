#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : _name("Unnamed"), _hp(10), _dmg(0), _energy(10) { std::cout << "You forgot to name this poor fella\n";} 

ClapTrap::ClapTrap(const std::string name) : _name(name), _hp(10), _dmg(0), _energy(10) { std::cout << name << " has been born!\n";}

ClapTrap::ClapTrap(const ClapTrap &b) : _name(b._name), _hp(b._hp), _dmg(b._dmg), _energy(b._energy) {
	std::cout << _name << " has been copied!\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &b) {
	if (this != &b) {
		_name = b._name;
		_dmg = b._dmg;
		_energy = b._energy;
		_hp = b._hp;
	}
	else
		return (*this);
}

ClapTrap::~ClapTrap() { std::cout << _name << " self destructed!\n";}

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
		std::cout << "ClapTrap " << _name << " is dead!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		_hp--;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << _name << " is dead!\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp > 0)
	{
		if (_energy > 0)
		{
			_energy--;
			_hp++;
			std::cout << "ClapTrap " << _name << " repairs self!\n";
		}
		else
			std::cout << "ClapTrap " << _name << "doesn't have enough energy to repair!\n";
	}
	else
		std::cout << "ClapTrap " << _name << " is dead!\n";
}