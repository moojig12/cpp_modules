#ifndef ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
private:
	std::string	_target;
public:
	RobotomyRequestForm(const std::string&	target);
	~RobotomyRequestForm();

	void execute(Bureaucrat& bureaucrat) const;
	std::string getTarget() const;
};

#endif