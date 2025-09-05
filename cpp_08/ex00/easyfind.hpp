#pragma once

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <iterator>

template <typename T>
int	easyfind(T &container, int value) {
	for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
		if (*it == value) {
			std::cout << "Value " << value << " found." << std::endl;
			return (*it);
		}
	}
	throw std::runtime_error("Value not found");
}

#endif