/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:50:47 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/14 11:05:06 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( void ) {
	name = "null";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeperMode = false;
	std::cout << "Constructing ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap( std::string str ) : ClapTrap(str) {
	name = str;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeperMode = false;
	std::cout << "Constructing ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& source ) {
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;	
	gateKeeperMode = source.gateKeeperMode;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& source ) {
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
	gateKeeperMode = source.gateKeeperMode;
	return (*this);
}
ScavTrap::~ScavTrap( void ) {
	std::cout << "Deconstructing ScavTrap " << name << std::endl;
}


void ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap ";
	if (hitPoints <= 0) {
		std::cout << name << " has no hit points left!" << std::endl;
	}
	else if (energyPoints <= 0) {
		std::cout << name << " has no enery points left!" << std::endl;
	}
	else {
		std::cout << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate( void ) {
	gateKeeperMode = !gateKeeperMode;
	if (gateKeeperMode)
		std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
	if (!gateKeeperMode)
		std::cout << "ScavTrap " << name << " is no longer in Gate Keeper mode!" << std::endl;
}