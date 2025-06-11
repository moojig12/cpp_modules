#pragma once

#ifndef SCALARCONVERTER_HPP
#define  SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

typedef enum e_scalartype {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	UNDEFINED
}	t_scalartype;

class ScalarConverter {
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
	public:
		static void convert(const std::string &literal);
};

#endif