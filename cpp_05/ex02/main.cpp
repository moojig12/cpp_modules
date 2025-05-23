#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() {
// exercise 00
	try
	{
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Bob2(Bob);
		Bureaucrat	Bob3 = Bob2;
		Bureaucrat	George("George", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
// exercise 00
	try {
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	George("George", 150);
		std::cout << Bob << std::endl;
		std::cout << George << std::endl;
		Bob.incrementGrade();
		std::cout << Bob << std::endl;
		Bob.decrementGrade();
		std::cout << Bob << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

// exercise 02
	try {
		Bureaucrat	Frank("Frank", 1);

		ShrubberyCreationForm shrubbery("shrubbery");
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}