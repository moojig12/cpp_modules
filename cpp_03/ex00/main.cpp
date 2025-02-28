/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:51:30 by nmandakh          #+#    #+#             */
/*   Updated: 2025/02/28 21:29:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Johnny("Johnny");
	ClapTrap	Johnny_copy(Johnny);
	ClapTrap	KimiHolder("Kimi");

	ClapTrap	KimiAssigned;
	KimiAssigned = KimiHolder;

	std::cout << "\n\e[38:5:11m" << "Testing will now commence!" << "\e[0m\n";
}