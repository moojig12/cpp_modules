#pragma once

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>

template <typename T>

class Array {
private:
	T*	_arr;
	size_t	_size;
public:
	Array();
	Array(int n);
	~Array();

	size_t size();
	T& operator[](unsigned int index);
};

#endif