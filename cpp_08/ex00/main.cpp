#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(void) {
	std::vector<int>	vec;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}
	try {
		easyfind(vec, 5);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}