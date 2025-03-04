#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &b);
	Dog&	operator=(const Dog &b);
	~Dog();

	void	makeSound() const;
};

#endif