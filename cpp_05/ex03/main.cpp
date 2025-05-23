#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main() {
	
	AForm* form = NULL;
	try {
		Intern intern;
		Bureaucrat bureaucrat("Bob", 1);
		form = intern.makeForm("robotomy request", "Bender");
		std::cout << *form << std::endl;
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		delete form;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}