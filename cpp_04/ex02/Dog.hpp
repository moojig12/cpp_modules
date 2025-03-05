#pragma once

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(const Dog &b);
	Dog&	operator=(const Dog &b);
	~Dog();

	void	makeSound() const;
	void	setIdea(int i, const std::string &str);
	std::string	getIdea(int i) const;
};

#endif