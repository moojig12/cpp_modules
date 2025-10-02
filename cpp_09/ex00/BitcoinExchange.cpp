#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _inputFile(""), _inputFileMarket("data.csv"), _stack(), _stackMarket() {}

BitcoinExchange::BitcoinExchange(std::string inputFile, std::string inputFileMarket) : _inputFile(inputFile), _inputFileMarket(inputFileMarket) {
	std::ifstream	data;

	data.open(_inputFileMarket.c_str());
	if (!data.is_open()) {
		throw FileOpenError();
	}
	std::string	line;
	std::getline(data, line);
	while (std::getline(data, line)) {
		std::string	key = line.substr(0, line.find(','));
		float	value = std::strtof(line.substr(line.find(',') + 1).c_str(), NULL);
		_stackMarket[key] = value;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& oth) {
	_stack = oth._stack;
	_stackMarket = oth._stackMarket;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& oth) {
	if (this == &oth) {
		_stack = oth._stack;
		_stackMarket = oth._stackMarket;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void	BitcoinExchange::exchange() {
	std::ifstream	data;

	data.open(_inputFile.c_str());
	if (!data.is_open()) {
		throw FileOpenError();
	}

	std::string	line;
	std::getline(data, line);
	while (std::getline(data, line)) {
		std::string	key = line.substr(0, line.find('|'));
		key.erase(std::remove(key.begin(), key.end(), ' '), key.end());

		std::string	value = line.substr(line.find('|') + 1).c_str();
		value.erase(std::remove(value.begin(), value.end(), ' '), value.end());
		checkData(key, value);
		printData(key, value);
	}
}

void	BitcoinExchange::checkData(std::string key, std::string value) {
	if (key.size() != 10 || key[4] != '-' || key[7] != '-') {
		throw BadInputError();
	}
	for (int i = 0; i < 10; i++) {
		if (i == 4 || i == 7) {
			continue;
		}
		if (key[i] < '0' || key[i] > '9') {
			throw BadInputError();
		}
	}
	int	year = std::strtol(key.substr(0, 4).c_str(), NULL, 10);
	int	month = std::strtol(key.substr(5, 6).c_str(), NULL, 10);
	int	day = std::strtol(key.substr(8, 9).c_str(), NULL, 10);

	if (year > 2022 || year < 2009 || month < 1 || month > 12 || day < 1 || day > 31) {
		throw BadInputError();
	}
	if (month == 2 && day > 29) {
		throw BadInputError();
	}

	if (value.empty()) {
		throw EmptyValueError();
	}
	long int	intValue = std::strtof(value.c_str(), NULL);
	if (intValue < 0) {
		throw UnsignedIntError();
	}
	if (intValue > 1000) {
		throw LargeNumberError();
	}
}

void	BitcoinExchange::printData(std::string key, std::string value) {
	int	intValue = std::strtof(value.c_str(), NULL);
	std::map<std::string, float>::iterator it = _stackMarket.find(key);
	if (it == _stackMarket.end()) {
		it = _stackMarket.lower_bound(key);
	}
	float	rate = it->second * intValue;
	std::cout << key << " => " << intValue << " " << rate << std::endl;
}

const char *BitcoinExchange::FileOpenError::what() const throw() {
	return "Error: Unable to open file!";
}
const char *BitcoinExchange::BadInputError::what() const throw() {
	return "Error: Invalid input!";
}
const char *BitcoinExchange::EmptyValueError::what() const throw() {
	return "Error: Empty value!";
}
const char *BitcoinExchange::UnsignedIntError::what() const throw() {
	return "Error: Not a positive number!";
}
const char *BitcoinExchange::LargeNumberError::what() const throw() {
	return "Error: Too large a number!";
}