#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
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

	try {
		Bureaucrat	John("John", 151);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat	Timmy("Timmy", 150);
		Bureaucrat	Caleb("Caleb", 1);

		Form		form("Form", 1, 1);
		Form		form2("Form2", 150, 150);

		Caleb.signForm(form2);
		Timmy.signForm(form2);
		form2.executeForm(Caleb);
		Timmy.signForm(form);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}