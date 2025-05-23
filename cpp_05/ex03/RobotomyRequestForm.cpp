#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}
void RobotomyRequestForm::execute(Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() > getExecuteGrade())
		throw AForm::GradeTooLowException(bureaucrat.getGrade());
	if (!getSign())
		throw AForm::FormNotSignedException();

	std::cout << "Bureaucrat " << bureaucrat.getName() << " is executing " << getName() << std::endl;
	std::cout << "Drilling noises..." << std::endl;

	int random = std::rand() % 2;
	if (random == 0)
	{
		std::cout << "Robotomy on " << _target << " was successful!" << std::endl;
	}
	else
	{
		std::cout << "Robotomy on " << _target << " failed!" << std::endl;
	}
}