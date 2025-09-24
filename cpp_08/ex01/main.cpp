#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		Span spoon(10000);

		for (int i = 0; i < 10000; i++) {
			spoon.addNumber(rand());
		}
		std::cout << spoon.longestSpan() << std::endl;
		std::cout << spoon.shortestSpan() << std::endl;
		spoon.addNumber(5);
	}
	catch (const std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Span spoon(10);
		std::vector<int> cont;

		for (int i = 0; i < 10; i++) {
			cont.push_back(rand() % 10);
		}
		spoon.addRange(cont.begin(), cont.end());
		std::cout << spoon.longestSpan() << std::endl;
		std::cout << spoon.shortestSpan() << std::endl;
		spoon.addNumber(5);
	}
	catch (const std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}