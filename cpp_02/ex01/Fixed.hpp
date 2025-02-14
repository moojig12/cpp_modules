/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmandakh <nmandakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:09:52 by nmandakh          #+#    #+#             */
/*   Updated: 2025/02/14 12:59:48 by nmandakh         ###   ########.fr       */
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


	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif