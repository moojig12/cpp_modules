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
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);

		static void convert(const std::string &literal);
};

#endif