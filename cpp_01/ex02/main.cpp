#include <iostream>

int	main(void)
{
	std::string	strong("HI THIS IS BRAIN\n");

	// Initializing PTR and REF
	std::string*	stringPTR = &strong;
	std::string&	stringREF = strong;

	// Printing memory address section
	std::cout << &strong << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	// Values
	std::cout << strong;
	std::cout << *stringPTR;
	std::cout << stringREF;
}