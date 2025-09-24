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
	void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

	class NoSpanException : public std::exception {
	public:
		virtual const char *what() const throw(); 
	};
	class SpanFullException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

#endif