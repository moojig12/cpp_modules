#pragma once
#include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(const std::string& type = "bare hands");
	const std::string&	getType(void) const;
	void	setType(const std::string& new_type);
};
