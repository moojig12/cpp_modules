#pragma once

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &b);
	Cat&	operator=(const Cat &b);
	~Cat();
	void	makeSound();
}

#endif