#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::GradeTooHighException::GradeTooHighException(unsigned int grade) : _grade(grade) {}
AForm::GradeTooLowException::GradeTooLowException(unsigned int grade) : _grade(grade) {}

const char* AForm::GradeTooHighException::what() const throw() {
	std::cerr << _grade << " ";
	return ("is too high of a grade!");
}

// GradeTooLowException what()
const char* AForm::GradeTooLowException::what() const throw() {
	std::cerr << _grade << " ";
	return ("is too low of a grade!");
}

AForm::AForm() : _name("unnamed"), _signed(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, unsigned int sign_grade, unsigned int execute_grade) : _name(name), _signed(false), _signGrade(sign_grade), _executeGrade(execute_grade)
{
	std::cout << "AForm parameterized constructor called" << std::endl;
	if (sign_grade < 1)
		throw AForm::GradeTooHighException(sign_grade);
	else if (sign_grade > 150)
		throw AForm::GradeTooLowException(sign_grade);
}

AForm::AForm(const AForm& other) : _name(other._name), _signGrade(other._signGrade)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_signGrade = other._signGrade;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const AForm& AForm) {
	return (out << AForm.getName() << ", AForm sign grade " << AForm.getSignGrade() << \
	 ", AForm execute grade " << AForm.getExecuteGrade() << ", AForm sign status " << AForm.getSign() << std::endl);
}

std::string		AForm::getName() const {
	return (_name);
}

unsigned int	AForm::getSignGrade() const {
	return (_signGrade);
}

unsigned int	AForm::getExecuteGrade() const {
	return (_executeGrade);
}

bool	AForm::getSign() const {
	return (_signed);
}

void	AForm::beSigned(Bureaucrat& bureaucrat) {
	if (_signed == true)
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << _name << " because it has already been signed!\n";
		return ;
	}
	else if (bureaucrat.getGrade() > _signGrade)
		throw AForm::GradeTooLowException(bureaucrat.getGrade());
	else
		_signed = true;
	std::cout << bureaucrat.getName() << " signed " << _name;
}

/* void	AForm::executeForm(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > _executeGrade)
		throw AForm::GradeTooLowException(bureaucrat.getGrade());
	else
		_signed = true;
	std::cout << _name << " has been executed!\n";
} */

bool AForm::isExecutable(const Bureaucrat& executor) const {
  if (!getSign()){
    throw AForm::FormNotSignedException();
  }
  if (executor.getGrade() >= _executeGrade) {
    throw AForm::FormNotExecutableException();
  }
  return true;
}

const char* AForm::FormNotSignedException::what() const throw() {
  return "Form is not signed\n";
}

const char* AForm::FormNotExecutableException::what() const throw() {
  return "Beureaucrat grade is too low to execute the form\n";
}