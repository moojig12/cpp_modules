#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Constructor for Animal has been called!\n";
}

Animal::Animal(const std::string &type) : _type(type) {
	std::cout << "Copy Constructor for Animal has been called!\n";
}

Animal	&Animal::operator=(const Animal &b) {
	if (this != &b)
	{
		_type = b._type;
		std::cout << "Copy assignment operator has been called!\n";
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Destructor for Animal has been called!\n";
}

void	Animal::makeSound() const {
	std::cout << "*Indiscernible animal noise*\n";
}

std::string	Animal::getType() const {
	return (_type);
}