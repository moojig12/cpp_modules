#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	const Weapon*	_weapon;
public:
	HumanB(std::string name);

	void	attack(void);
	void	equip(const Weapon& weapon);
};
