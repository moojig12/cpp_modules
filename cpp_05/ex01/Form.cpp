#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(unsigned int grade) : _grade(grade) {}
Form::GradeTooLowException::GradeTooLowException(unsigned int grade) : _grade(grade) {}

const char* Form::GradeTooHighException::what() const throw() {
	std::cerr << _grade << " ";
	return ("is too high of a grade!");
}

// GradeTooLowException what()
const char* Form::GradeTooLowException::what() const throw() {
	std::cerr << _grade << " ";
	return ("is too low of a grade!");
}

Form::Form() : _name("unnamed"), _signed(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int sign_grade, unsigned int execute_grade) : _name(name), _signed(false), _signGrade(sign_grade), _executeGrade(execute_grade)
{
	std::cout << "Form parameterized constructor called" << std::endl;
	if (sign_grade < 1)
		throw Form::GradeTooHighException(sign_grade);
	else if (sign_grade > 150)
		throw Form::GradeTooLowException(sign_grade);
}

Form::Form(const Form& other) : _name(other._name), _signGrade(other._signGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_signGrade = other._signGrade;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Form& Form);
std::ostream&	operator<<(std::ostream& out, const Form& Form) {
	return (out << Form.getName() << ", Form sign grade " << Form.getSignGrade() << \
	 ", Form execute grade " << Form.getExecuteGrade() << ", Form sign status " << Form.getSign() << std::endl);
}

std::string		Form::getName() const {
	return (_name);
}

unsigned int	Form::getSignGrade() const {
	return (_signGrade);
}

unsigned int	Form::getExecuteGrade() const {
	return (_executeGrade);
}

bool	Form::getSign() const {
	return (_signed);
}

void	Form::beSigned(Bureaucrat& bureaucrat) {
	if (_signed == true)
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because it has already been signed!\n";
		return ;
	}
	else if (bureaucrat.getGrade() > _signGrade)
		throw Form::GradeTooLowException(bureaucrat.getGrade());
	else
		_signed = true;
	std::cout << bureaucrat.getName() << " signed " << _name;
}

void	Form::executeForm(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > _executeGrade)
		throw Form::GradeTooLowException(bureaucrat.getGrade());
	else
		_signed = true;
	std::cout << _name << " has been executed!\n";
}