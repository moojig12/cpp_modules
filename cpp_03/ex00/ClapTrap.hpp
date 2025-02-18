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
	~ClapTrap();
};

#endif