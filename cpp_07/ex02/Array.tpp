#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_arr = new T[0];
	size_t = 0;
}

template <typename T>
Array<T>::Array(int n)
{
	_size = n;
	_arr = new T(size_t);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <typename T>
size_t Array<T>::size() {
	return (_size);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size) {
		throw std::out_of_range("Index out of bounds!");
	}
	return (_arr[index]);
}