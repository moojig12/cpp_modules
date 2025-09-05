#pragma once

#ifndef ARRAY_HPP
#define  ARRAY_HPP

#include <cstddef>
#include <iostream>

template <typename T> class Array {
private:
	T*	_arr;
	size_t	_size;
public:
	Array() { _arr = new T[]; _size = 0; };
	Array(unsigned int n) { _size = n; _arr = new T[n]; };
	Array(const Array& other) {
		_size = other._size;
		_arr = new T[_size];
		for (size_t i = 0; i < _size; i++) {
			_arr[i] = other._arr[i];
		}
	};
	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] _arr;
			_size = other._size;
			_arr = new T[_size];
			for (size_t i = 0; i < _size; i++) {
				_arr[i] = other._arr[i];
			}
		}
		return (*this);
	};
	~Array() { delete[] _arr; };

	size_t size() { return (_size); };
	T& operator[](unsigned int index) {
		if (index >= _size) {
			throw std::out_of_range("Index out of bounds!");
		}
		return (_arr[index]);
	};
};

#endif