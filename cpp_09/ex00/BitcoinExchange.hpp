#pragma once

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <iomanip>
class BitcoinExchange {
private:
	std::string	_inputFile;
	std::string	_inputFileMarket;
	std::map<std::string, float>	_stack;
	std::map<std::string, float>	_stackMarket;

	void	checkData(std::string key, std::string value);
	void	printData(std::string key, std::string value);
public:
	BitcoinExchange();
	BitcoinExchange(std::string inputFile, std::string inputFileMarket);
	BitcoinExchange(const BitcoinExchange& oth);
	BitcoinExchange&	operator=(const BitcoinExchange& oth);
	~BitcoinExchange();

	void	exchange();
	
	class FileOpenError : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class BadInputError : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	class EmptyValueError : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	class UnsignedIntError : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	class LargeNumberError : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

#endif
