/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:49:43 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/19 12:28:21 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
	std::cout << "HumanA " << HumanA::name << " created with ";
	std::cout << HumanA::weapon.getType() << std::endl;
}

HumanA::~HumanA(void){
	std::cout << "HumanA " << HumanA::name << " destroyed" << std::endl;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their ";
	std::cout << HumanA::weapon.getType() << std::endl;
}
