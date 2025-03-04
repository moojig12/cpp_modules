
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat has been constructed (default)!\n";
}

WrongCat::WrongCat(const WrongCat &b) {
	_type = b._type;
	std::cout << "WrongCat has been copied!\n";
}

WrongCat&	WrongCat::operator=(const WrongCat &b) {
	if (this != &b) {
		WrongAnimal::operator=(b);
	}
	std::cout << "WrongCat has been assigned!\n";
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destruction!\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow\n";
}