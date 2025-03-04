#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog has been constructed (default)!\n";
}

Dog::Dog(const Dog &b) {
	_type = b._type;
	std::cout << "Dog has been copied!\n";
}

Dog&	Dog::operator=(const Dog &b) {
	if (this != &b) {
		Animal::operator=(b);
	}
	std::cout << "Dog has been assigned!\n";
	return (*this);
}

Dog::~Dog() {
	std::cout << "Cat destruction!\n";
}

void	Dog::makeSound() const {
	std::cout << "Woof\n";
}