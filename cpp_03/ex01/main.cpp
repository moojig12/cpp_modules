/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:51:30 by nmandakh          #+#    #+#             */
/*   Updated: 2025/03/01 11:23:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	Vasimov;
	ScavTrap	Dmitri("Dmitri");

	ScavTrap	Vasimov_copy("Vasimov");
	Vasimov = Vasimov_copy;

	std::cout << "\e[1;38:5:14mCleaning up!\e[0m\n";
}