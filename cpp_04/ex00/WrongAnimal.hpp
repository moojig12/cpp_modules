#pragma once

#ifndef	WRONGANIMAL_HPP
# define WONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal	&operator=(const WrongAnimal &b);
	virtual	~WrongAnimal();

	std::string	getType() const;
	void		makeSound() const;
};

#endif