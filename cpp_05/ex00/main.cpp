#include "Bureaucrat.hpp"

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
}