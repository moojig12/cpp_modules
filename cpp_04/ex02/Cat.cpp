#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat has been constructed (default)!\n";
}

Cat::Cat(const Cat &b) : Animal(b) {
	_type = b._type;
	_brain = new Brain(*b._brain);
	std::cout << "Cat has been copied!\n";
}

Cat&	Cat::operator=(const Cat &b) {
	if (this != &b) {
		Animal::operator=(b);
		delete _brain;
		_brain = new Brain(*b._brain);
	}
	std::cout << "Cat has been assigned!\n";
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destruction!\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}

std::string Cat::getIdea(int i) const
{
	return(_brain->getIdea(i));
}

void	Cat::setIdea(int i, const std::string &str)
{
	_brain->setIdea(i, str);
}