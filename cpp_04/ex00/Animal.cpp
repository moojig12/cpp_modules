#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Constructor for Animal has been called!\n";
}

Animal::Animal(const std::string &type) {
	std::cout << "Copy Constructor for Animal has been called!\n";
}

Animal	&Animal::operator=(const Animal &b) {
	if (this != &b)
	{
		_type = b._type;
		std::cout << "Copy assignment operator has been called!\n";
	}
	else
		return (*this);
}

Animal::~Animal() {
	std::cout << "Destructor for Animal has been called!\n";
}
