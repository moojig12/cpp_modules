#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog has been constructed (default)!\n";
}

Dog::Dog(const Dog &b) : Animal(b) {
	_type = b._type;
	_brain = new Brain(*b._brain);
	std::cout << "Dog has been copied!\n";
}

Dog&	Dog::operator=(const Dog &b) {
	if (this != &b) {
		Animal::operator=(b);
		delete _brain;
		_brain = new Brain(*b._brain);
	}
	std::cout << "Dog has been assigned!\n";
	return (*this);
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Cat destruction!\n";
}

void	Dog::makeSound() const {
	std::cout << "Woof\n";
}

std::string Dog::getIdea(int i) const
{
	return(_brain->getIdea(i));
}

void	Dog::setIdea(int i, const std::string &str)
{
	_brain->setIdea(i, str);
}