/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmandakh <nmandakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:18:55 by nmandakh          #+#    #+#             */
/*   Updated: 2025/02/14 14:53:34 by nmandakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : _value()
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& b)
{
	// std::cout << "Copy constructor called\n";
	*this = b;
}

Fixed& Fixed::operator=(const Fixed& b)
{
	// std::cout << "Copy assignment operator called\n";
	if (this != &b)
		_value = b.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& b)
{
	return Fixed(toFloat() + b.toFloat());
}

Fixed&	Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed fix(*this);
	this->_value++;

	return (fix);
}

Fixed	Fixed::operator--(int)
{
	Fixed fix(*this);
	this->_value--;

	return (fix);
}


Fixed	Fixed::operator-(const Fixed& b) {
	return Fixed(toFloat() - b.toFloat());
}

Fixed	Fixed::operator*(const Fixed& b) {
	return Fixed(toFloat() * b.toFloat());
}

Fixed	Fixed::operator/(const Fixed& b) {
	return Fixed(toFloat() / b.toFloat());
}

int		Fixed::operator<(const Fixed& b) { return (_value < b._value); }
int		Fixed::operator>(const Fixed& b) { return (_value > b._value); }

int		Fixed::operator<=(const Fixed& b) { return (_value <= b._value); }
int		Fixed::operator>=(const Fixed& b) { return (_value >= b._value); }
int		Fixed::operator==(const Fixed& b) { return (_value == b._value); }
int		Fixed::operator!=(const Fixed& b) { return (_value != b._value); }

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}
Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}

Fixed::Fixed(const int num) : _value(num << _fractional)
{
	// std::cout << "Int constructor called\n";
}
Fixed::Fixed(const float fnum) : _value(static_cast<int>(roundf(fnum * (1 << _fractional))))
{
	// std::cout << "Float constructor called\n" << *this;
	// std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}


std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return float(_value) / (1 << _fractional);
}

int		Fixed::toInt(void) const
{
	return (_value >> _fractional);
}
