#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>
class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int		_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	class GradeTooHighException : public std::exception {
	private:
		unsigned int	_grade;
	public:
		GradeTooHighException(unsigned int grade);
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	private:
		unsigned int	_grade;
	public:
		GradeTooLowException(unsigned int grade);
		virtual const char* what() const throw();
	};

	std::string		getName() const;
	unsigned int	getGrade() const;
};

#endif