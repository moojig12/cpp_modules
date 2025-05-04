#include "Bureaucrat.hpp"
#include "Form.hpp"

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

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);
std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	return (out << Bureaucrat.getName() << ", Bureaucrat grade " << Bureaucrat.getGrade());
}

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

void	Bureaucrat::signForm(Form& form) {
	form.beSigned(*this);
}