#include "Weapon.hpp"

const std::string& Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(const std::string& new_type)
{
	_type = new_type;
}

Weapon::Weapon(const std::string& type) : _type(type) {}