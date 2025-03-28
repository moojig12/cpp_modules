#pragma once

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string	_type;
public:
	Animal();
	Animal(const std::string &type);
	Animal	&operator=(const Animal &b);
	virtual	~Animal() = 0;

	std::string	getType() const;
	virtual void		makeSound() const;
};

#endif