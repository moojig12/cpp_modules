#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat& Bureaucrat) const {
	if (Bureaucrat.getGrade() > getExecuteGrade())
		throw AForm::GradeTooLowException(Bureaucrat.getGrade());
	if (!getSign())
		throw AForm::FormNotSignedException();

	std::cout << "Bureaucrat " << Bureaucrat.getName() << " is executing " << getName() << std::endl;
	std::string filename = getTarget() + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (!file.is_open())
		throw std::ios_base::failure("Failed to open file");

	file << "     &&& &&  & &&\n"
		<< "   && &\\/&\\|& ()|/ @, &&\n"
		<< "   &\\/(/&/&||/& /_/)_&/_&\n"
		<< "&() &\\/&|()|/&\\/ '%\" & ()\n"
		<< "&_\\/&_/&&&|&&|\\/&\\_/_&/_&\n"
		<< "&&   && & &| &| /& & % ()& /&&\n"
		<< " ()&_---()&\\&\\|&&-&&--%---()~\n"
		<< "     &&     \\|||\n"
		<< "             |||\n"
		<< "             |||\n"
		<< "             |||\n"
		<< "         , -=-~.-^- _\n"
		<< std::endl;

	file.close();
	std::cout << "Shrubbery created in " << _target << "_shrubbery" << std::endl;
}