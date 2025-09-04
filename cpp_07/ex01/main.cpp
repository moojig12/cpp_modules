#include "iter.hpp"
#include <iostream>

template <typename T>
void	printElement(T element) {
	std::cout << element << std::endl;
}

int	main(void) {
	// Test with an array of integers
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
	iter(intArray, intLength, printElement<int>);
	std::cout << "\n";

	// Test with an array of strings
	std::string strArray[] = {"I", "ate", "a", "sandwich"};
	size_t strLength = sizeof(strArray) / sizeof(strArray[0]);
	iter(strArray, strLength, printElement<std::string>);
	std::cout << "\n";

	// Test with an array of const strings
	const std::string constStrArray[] = {"I", "ate", "a", "golden", "sandwich"};
	size_t constStrLength = sizeof(constStrArray) / sizeof(constStrArray[0]);
	iter(constStrArray, constStrLength, printElement<const std::string>);
}