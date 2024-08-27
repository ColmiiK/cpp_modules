/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:36:40 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 14:12:35 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main( void ) {
	ClapTrap robot("Foo");

	robot.attack("Bar");
	robot.takeDamage(5);
	robot.attack("Bar");
	robot.beRepaired(1);
	robot.takeDamage(10);
	robot.attack("Bar");
}