#include "Brain.hpp"


Brain::Brain() {
	std::cout << "Brain has been created!\n";
}

Brain&	Brain::operator=(const Brain &b) {
	if (this != &b)
		ideas[0] = b.ideas[0];
	std::cout << "Brain has been assigned!\n";
	return (*this);
}

Brain::Brain(const Brain &b) {
	for (int i = 0; i < 100; i++)
		ideas[i] = b.ideas[i];
	std::cout << "Brain has been copied!\n";
}

Brain::~Brain() {
	std::cout << "brain has been destroyed!\n";
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (ideas[i]);
	else
		return("Get index for Idea not in range!\n");
}

//setter
void Brain::setIdea(int i, const std::string &str)
{
	if (i >= 0 && i < 100)
		ideas[i] = str;
	else
		std::cout << "Set index for idea not in range!\n";
}
