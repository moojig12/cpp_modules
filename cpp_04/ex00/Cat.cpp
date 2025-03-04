#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat has been constructed (default)!\n";
}

Cat::Cat(const Cat &b) {
	_type = b._type;
	std::cout << "Cat has been copied!\n";
}

Cat&	Cat::operator=(const Cat &b) {
	if (this != &b) {
		Animal::operator=(b);
	}
	std::cout << "Cat has been assigned!\n";
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destruction!\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}