#pragma once

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	unsigned int		_signGrade;
	unsigned int		_executeGrade;
public:
	AForm();
	AForm(std::string name, unsigned int sign_grade, unsigned int execute_grade);
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	virtual ~AForm();

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

	class FormNotSignedException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class FormNotExecutableException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	std::string		getName() const;
	unsigned int	getSignGrade() const;
	unsigned int	getExecuteGrade() const;
	bool			getSign() const;
	void			beSigned(Bureaucrat& bureaucrat);
	bool			isExecutable(const Bureaucrat &executor) const;
	virtual void			execute(Bureaucrat& bureaucrat) const = 0;
};

std::ostream&	operator<<(std::ostream& out, const AForm& AForm);

#endif