
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public AForm {
private:
	std::string	_target;
public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();

	void execute(Bureaucrat& bureaucrat) const;
	std::string getTarget() const;
};

#endif