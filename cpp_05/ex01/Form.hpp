#pragma once

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	unsigned int		_signGrade;
	unsigned int		_executeGrade;
public:
	Form();
	Form(std::string name, unsigned int sign_grade, unsigned int execute_grade);
	Form(const Form& other);
	Form& operator=(const Form& other);
	~Form();

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
	unsigned int	getSignGrade() const;
	unsigned int	getExecuteGrade() const;
	bool			getSign() const;
	void			beSigned(Bureaucrat& bureaucrat);
	void			executeForm(Bureaucrat& bureaucrat);
};

#endif