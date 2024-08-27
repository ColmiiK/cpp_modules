/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:36:40 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/12 11:51:22 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <DiamondTrap.hpp>

int main()
{
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		DiamondTrap a("Alpha");
		DiamondTrap b("Beta");
		DiamondTrap c(a);

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		a.guardGate();
		a.highFivesGuys();
		a.takeDamage(99);
		a.takeDamage(1);
		b.whoAmI();
		b.attack("Beta-clone");
		c.whoAmI();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}