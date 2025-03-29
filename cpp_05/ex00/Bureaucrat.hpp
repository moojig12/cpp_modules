#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	unsigned int	_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(unsigned int grade);
	Bureaucrat(std::string name, unsigned int grade);
	~Bureaucrat();

	std::string		getName() const;
	unsigned int	getGrade() const;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat);

std::ostream& operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	return (out << Bureaucrat.getName() << ", Bureaucrat grade " << Bureaucrat.getGrade());
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name)
{
}

Bureaucrat::Bureaucrat(unsigned int grade)
{
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
{
}

Bureaucrat::~Bureaucrat()
{
}


#endif