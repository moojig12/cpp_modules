#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGPTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &b);
		FragTrap	&operator=(const FragTrap &b);
		~FragTrap(void);
	
		// void	attack(std::string const &target);
		void	highFiveGuys(void);
	};

#endif
