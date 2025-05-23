#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(unsigned int grade) : _grade(grade) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(unsigned int grade) : _grade(grade) {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	std::cerr << _grade << " ";
	return ("is too high of a grade!");
}

// GradeTooLowException what()
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	std::cerr << _grade << " ";
	return ("is too low of a grade!");
}

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(grade);
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException(grade);
	else
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat){
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return os;
};

std::string		Bureaucrat::getName() const {
	return (_name);
}

unsigned int	Bureaucrat::getGrade() const {
	return (_grade);
}


void	Bureaucrat::incrementGrade() {
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException(_grade);
}

void	Bureaucrat::decrementGrade() {
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException(_grade);
}

void	Bureaucrat::signForm(AForm& form) {
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm& form) {
	if (form.isExecutable(*this))
		form.execute(*this);
	else
		std::cout << *this << " couldn't execute " << form.getName() << " because it is not signed!" << std::endl;
}