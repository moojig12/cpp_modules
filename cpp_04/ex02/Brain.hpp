#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &b);
	Brain&	operator=(const Brain &b);
	~Brain();

	std::string	getIdea(int i) const;
	void	setIdea(int i, const std::string &str);
};

#endif