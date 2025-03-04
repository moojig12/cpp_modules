#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "Constructor for WrongAnimal has been called!\n";
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type) {
	std::cout << "Copy Constructor for WrongAnimal has been called!\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &b) {
	if (this != &b)
	{
		_type = b._type;
		std::cout << "Copy assignment operator has been called!\n";
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor for WrongAnimal has been called!\n";
}

void	WrongAnimal::makeSound() const {
	std::cout << "*Indiscernible animal noise*\n";
}

std::string	WrongAnimal::getType() const {
	return (_type);
}