/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmandakh <nmandakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:09:52 by nmandakh          #+#    #+#             */
/*   Updated: 2025/02/14 14:52:16 by nmandakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <ostream>

class Fixed
{
private:
	int	_value;
	static const int	_fractional = 8;
public:
	Fixed();
	Fixed(const Fixed& b);
	Fixed(const int num);
	Fixed(const float fnum);
	~Fixed();

	Fixed&	operator=(const Fixed& b);
	Fixed	operator+(const Fixed& b);
	Fixed	operator-(const Fixed& b);
	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	operator*(const Fixed& b);
	Fixed	operator/(const Fixed& b);
	int		operator<(const Fixed& b);
	int		operator>(const Fixed& b);
	int		operator<=(const Fixed& b);
	int		operator>=(const Fixed& b);
	int		operator==(const Fixed& b);
	int		operator!=(const Fixed& b);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
	
	static Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif