/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmandakh <nmandakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:09:52 by nmandakh          #+#    #+#             */
/*   Updated: 2025/02/14 12:40:16 by nmandakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_value;
	static const int	_fractional = 8;
public:
	Fixed();
	Fixed(const Fixed& b);
	~Fixed();

	Fixed& operator=(const Fixed& b);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};


#endif
