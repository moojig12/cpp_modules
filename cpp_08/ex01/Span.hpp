#pragma once

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
	unsigned int	_n;
	std::vector<int>	_data;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	void	addNumber(int num);
	int	shortestSpan();
	int	longestSpan();
};

#endif