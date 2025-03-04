#pragma once

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &b);
	WrongCat&	operator=(const WrongCat &b);
	~WrongCat();

	void	makeSound() const;
};

#endif