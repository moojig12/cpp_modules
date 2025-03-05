#pragma once

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat &b);
	Cat&	operator=(const Cat &b);
	~Cat();

	void	makeSound() const;
	std::string	getIdea(int i) const;
	void	setIdea(int i, const std::string &str);
};

#endif