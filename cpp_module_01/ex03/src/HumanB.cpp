/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:53:12 by alvega-g          #+#    #+#             */
/*   Updated: 2024/05/28 16:04:08 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name) : name(name){
	std::cout << "HumanB " << name << " created with ";
	std::cout << "no weapon" << std::endl;
	weapon = NULL;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB " << HumanB::name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their ";
	if (this->weapon == NULL)
		std::cout << "(null) weapon" << std::endl;
	else
		std::cout << HumanB::weapon->getType() << std::endl;
}
