#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::execute(Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() > getExecuteGrade())
		throw AForm::GradeTooLowException(bureaucrat.getGrade());
	if (!getSign())
		throw AForm::FormNotSignedException();

	std::cout << "Bureaucrat " << bureaucrat.getName() << " is executing " << getName() << std::endl;
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}