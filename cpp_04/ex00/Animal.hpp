#pragma once

#ifndef	ANIMAL>HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string	_type;
public:
	Animal();
	Animal(const std::string &type);
	Animal	&operator=(const Animal &b);
	~Animal();
};

#endif