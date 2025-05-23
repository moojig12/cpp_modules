#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:

	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();


	AForm *makeForm(std::string formName, std::string target);


	class FormNotFoundException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

};

#endif