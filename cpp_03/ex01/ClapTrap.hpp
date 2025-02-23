#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int	_hp;
	int	_dmg;
	int	_energy;
public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap & operator = (const ClapTrap &other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif