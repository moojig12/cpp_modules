/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:51:30 by nmandakh          #+#    #+#             */
/*   Updated: 2025/03/01 12:00:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	Johnny("Johnny");
	ClapTrap	Johnny_copy(Johnny);
	ClapTrap	KimiHolder("Kimi");

	ClapTrap	KimiAssigned;
	KimiAssigned = KimiHolder;

	std::cout << "\n\e[1;38:5:11m" << "Testing will now commence!" << "\e[0m\n";
	std::cout << "\e[1;38:5:11m" << "Test case 1:" << "\e[0m\n";
	Johnny.attack("Outlaw");
	Johnny.takeDamage(6);
	Johnny.beRepaired(5);
	Johnny.takeDamage(9);
	Johnny.beRepaired(5);
	Johnny.printStats();
	std::cout << "\e[38:5:62mSummary of test case 1:\n" \
	<< "Johnny attacks Outlaw and takes damage. After taking damage Johnny repairs for 5 hp\nBut proceeds to take lethal damage and is not able to repair anymore\e[0m\n";

	std::cout << "\e[1;38:5:11m" << "Test case 2:" << "\e[0m\n";
	KimiAssigned.attack("Bone Head");
	KimiAssigned.takeDamage(8);
	KimiAssigned.attack("Bone Head");
	KimiAssigned.beRepaired(10);
	KimiAssigned.takeDamage(20);
	KimiAssigned.printStats();
	std::cout << "\e[38:5:62mSummary of test case 2:\n" \
	<< "Kimi battles Bone Head but tries to repair for too much hp for her energy\nand proceeds to take 20 damage which defaults her hp to 0 (dead)\e[0m\n";
	std::cout << "\n\e[1;38:5:9m" << "Tests for ClapTraps has ended!" << "\e[0m\n";
	ScavTrap	Vasimov;
	ScavTrap	Dmitri("Dmitri");
	
	ScavTrap	Vasimov_copy("Vasimov");
	Vasimov = Vasimov_copy;

	std::cout << "\n\e[1;38:5:11m" << "Testing will now commence for ScavTraps!" << "\e[0m\n";
	std::cout << "\e[1;38:5:11m" << "Test case 1:" << "\e[0m\n";
	Dmitri.attack("Black Queen");
	Dmitri.guardGate();
	Dmitri.takeDamage(25);
	Dmitri.beRepaired(30);
	Dmitri.takeDamage(125);
	Dmitri.attack("Black Queen");
	Dmitri.guardGate();

	std::cout << "\n\e[1;38:5:9m" << "Tests for ScavTraps has ended!" << "\e[0m\n";
	FragTrap	Roger("Roger");
	FragTrap	empty;
	
	empty = Roger;
	
	Roger.attack("Cat");
	Roger.highFiveGuys();
	Roger.takeDamage(9999);
	Roger.highFiveGuys();
	std::cout << "\n\e[1;38:5:9m" << "Tests for FragTraps has ended!" << "\e[0m\n";
	std::cout << "\e[1;38:5:14mCleaning up!\e[0m\n\n";
}