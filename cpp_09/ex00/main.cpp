#include <iostream>
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "usage: ./btc [FileName]\n";
		return 1;
	}
	try {
		BitcoinExchange	exchange(argv[1], "data.csv");
		exchange.exchange();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
