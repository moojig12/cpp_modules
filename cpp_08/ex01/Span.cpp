#include "Span.hpp"

Span::Span() {
	_n = 0;
}

Span::Span(unsigned int n) {
	_n = n;
	_data.reserve(n);
}

Span::Span(const Span& other) : _n(other._n), _data(other._data) {}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		_n = other._n;
		_data = other._data;
	}
	return (*this);
}

Span::~Span() {

}

void	Span::addNumber(int num) {
	if (_data.size() < _n) {
		_data.push_back(num);
	}
	else {
		throw Span::SpanFullException();
		return ;
	}
}

int	Span::shortestSpan() {
	if (_data.size() < 2) {
		throw Span::NoSpanException();
		return (0);
	}
	std::vector<int> sorted_data = _data;
	std::sort(sorted_data.begin(), sorted_data.end());
	int min_span = sorted_data[1] - sorted_data[0];
	for (size_t i = 1; i < sorted_data.size() - 1; i++) {
		int span = sorted_data[i + 1] - sorted_data[i];
		if (span < min_span) {
			min_span = span;
		}
	}
	return (min_span);
}

int	Span::longestSpan() {
	if (_data.size() < 2) {
		throw Span::NoSpanException();
		return (0);
	}
	int min = *std::min_element(_data.begin(), _data.end());
	int max = *std::max_element(_data.begin(), _data.end());
	return (max - min);
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (_data.size() + std::distance(start, end) > _n) {
		throw Span::SpanFullException();
		return ;
	}
}

const char *Span::NoSpanException::what() const throw() {
    return ("No span to find");
}

const char *Span::SpanFullException::what() const throw() {
    return ("Span is full");
}