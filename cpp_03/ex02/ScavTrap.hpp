#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
	bool	_guardStatus;
public:
	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &b);
	ScavTrap	&operator=(const ScavTrap &b);
	~ScavTrap(void);

	void	attack(std::string const &target);
	void	guardGate();
};

#endif