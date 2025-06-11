#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter default constructor called" << std::endl;
}
ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter destructor called" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	if (this != &other) {
		(void)other;
	}
	return *this;
}

t_scalartype handle_type(const std::string &literal) {
	if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
		return CHAR;
	if (literal == "nanf" || literal == "inff" || literal == "-inff" || literal == "+inff")	
		return PSEUDO;
	if (literal == "nan" || literal == "inf" || literal == "-inf" || literal == "+inf")
		return PSEUDO;
	if ((literal.find('.') != std::string::npos) && literal.find('f') != std::string::npos)
		return FLOAT;
	if (literal.find('.') != std::string::npos)
		return DOUBLE;
	if (isdigit(literal[0]) || (literal[0] == '-' && isdigit(literal[1])))
		return INT;
	return UNDEFINED;
}

void ScalarConverter::convert(const std::string &literal) {
	std::cout << "Converting literal: " << literal << std::endl;

	t_scalartype type = handle_type(literal);
	
	switch (type) {
		case CHAR:
			std::cout << "Type is CHAR" << std::endl;
			// char representation
			if (strtol(literal.c_str(), NULL, 10) < 127 && strtol(literal.c_str(), NULL, 10) > 31)
				std::cout << "char: " << static_cast<char>(std::strtol(literal.c_str(), NULL, 10)) << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
			break;
		case INT:
			std::cout << "Type is INT" << std::endl;
			// char representation
			if (strtol(literal.c_str(), NULL, 10) < 127 && strtol(literal.c_str(), NULL, 10) > 31)
				std::cout << "char: '" << static_cast<char>(std::strtol(literal.c_str(), NULL, 10)) << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			// int representation
			std::cout << "int: " << std::strtol(literal.c_str(), NULL, 10) << std::endl;
			// float representation
			std::cout << "float: " << std::strtof(literal.c_str(), NULL) << ".0f" << std::endl;
			// double representation
			std::cout << "double: " << std::strtod(literal.c_str(), NULL) << ".0" << std::endl;
			break;
		case FLOAT:
			std::cout << "Type is FLOAT" << std::endl;
			// char representation
			if (std::ceil((std::strtof(literal.c_str(), NULL))) == std::floor((std::strtof(literal.c_str(), NULL)))) {
				if (strtol(literal.c_str(), NULL, 10) < 127 && strtol(literal.c_str(), NULL, 10) > 31)
					std::cout << "char: " << static_cast<char>(std::strtol(literal.c_str(), NULL, 10)) << std::endl;
				else
					std::cout << "char: Non displayable" << std::endl;
			} else {
				std::cout << "char: impossible" << std::endl;
			}
			// int representation
			std::cout << "int: " << std::strtol(literal.c_str(), NULL, 10) << std::endl;
			// float representation
			if (std::ceil(std::strtof(literal.c_str(), NULL)) == std::strtof(literal.c_str(), NULL)) {
				std::cout << "float: " << std::strtof(literal.c_str(), NULL) << ".0f" << std::endl;
			}
			else {
				std::cout << "float: " << std::strtof(literal.c_str(), NULL) << "f" << std::endl;
			}
			// double representation
			if (std::ceil(std::strtod(literal.c_str(), NULL)) == std::strtod(literal.c_str(), NULL)) {
				std::cout << "double: " << std::strtod(literal.c_str(), NULL) << ".0" << std::endl;
			}
			else {
				std::cout << "double: " << std::strtod(literal.c_str(), NULL) << std::endl;
			}
			break;
		case DOUBLE:
			std::cout << "Type is DOUBLE" << std::endl;
			// char representation
			if (std::ceil((std::strtod(literal.c_str(), NULL))) == std::floor((std::strtod(literal.c_str(), NULL)))) {
				if (strtol(literal.c_str(), NULL, 10) < 127 && strtol(literal.c_str(), NULL, 10) > 31)
					std::cout << "char: " << static_cast<char>(std::strtol(literal.c_str(), NULL, 10)) << std::endl;
				else
					std::cout << "char: Non displayable" << std::endl;
			} else {
				std::cout << "char: impossible" << std::endl;
			}
			// int representation
			std::cout << "int: " << std::strtol(literal.c_str(), NULL, 10) << std::endl;
			// float representation
			if (std::ceil(std::strtof(literal.c_str(), NULL)) == std::strtof(literal.c_str(), NULL)) {
				std::cout << "float: " << std::strtof(literal.c_str(), NULL) << ".0f" << std::endl;
			}
			else {
				std::cout << "float: " << std::strtof(literal.c_str(), NULL) << "f" << std::endl;
			}
			// double representation
			if (std::ceil(std::strtod(literal.c_str(), NULL)) == std::strtod(literal.c_str(), NULL)) {
				std::cout << "double: " << std::strtod(literal.c_str(), NULL) << ".0" << std::endl;
			}
			else {
				std::cout << "double: " << std::strtod(literal.c_str(), NULL) << std::endl;
			}
			break;
		case PSEUDO:
			std::cout << "Type is PSEUDO" << std::endl;
			if (literal == "nanf" || literal == "nan") {
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			} else if (literal == "inf" || literal == "inff" || literal == "+inf" || literal == "+inff") {
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: +inff" << std::endl;
				std::cout << "double: +inf" << std::endl;
			} else if (literal == "-inff" || literal == "-inf") {
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: -inff" << std::endl;
				std::cout << "double: -inf" << std::endl;
			}
			break;
		default:
			std::cout << "Type is UNDEFINED" << std::endl;
			break;
	}
}
