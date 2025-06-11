#include "AllClasses.hpp"

Base::~Base() {
	std::cout << "Base destructor called" << std::endl;
}

Base *generate()
{
	srand(static_cast<unsigned int>(time(NULL)));
	int randomNum = rand() % 3;

	switch (randomNum)
	{
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		case 2:
			return (new C());
			break;
		default:
			std::cerr << "Random seeding failed" << std::endl;
			break;
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A has been identified!" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B has been identified!" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C has been identified!" << std::endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A has been identified!" << std::endl;
	}
	catch(const std::exception& e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B has been identified!" << std::endl;
	}
	catch(const std::exception& e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C has been identified!" << std::endl;
	}
	catch(const std::exception& e) {}
}