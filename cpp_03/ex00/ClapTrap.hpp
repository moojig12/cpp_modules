#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	unsigned int	_hp;
	unsigned int	_dmg;
	unsigned int	_energy;
public:
	ClapTrap(void);
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap&	operator=(const ClapTrap &other);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	printStats(void);
};

#endif