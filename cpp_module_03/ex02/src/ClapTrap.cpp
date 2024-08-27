/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:37:00 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/14 11:05:23 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap( void ) {
	name = "null";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Constructing ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap( std::string str ) {
	name = str;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Constructing ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& source ) {
	std::cout << "Copy constructor called" << std::endl;
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& source ) {
	std::cout << "Copy assignment operator called" << std::endl;
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Deconstructing ClapTrap " << name << std::endl;
}

void ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap ";
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

void ClapTrap::takeDamage( unsigned int amount ) {
	if (hitPoints <= 0) {
		std::cout << name << " is already dead!" << std::endl;
	}
	else {
		std::cout << name << " takes " << amount << " points of damage!" << std::endl;
		hitPoints = hitPoints - amount;
		if (hitPoints <= 0) {
			std::cout << name << " died!" << std::endl;
		}
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (hitPoints <= 0) {
		std::cout << name << " has no hit points left!" << std::endl;
	}
	else if (energyPoints <= 0) {
		std::cout << name << " has no enery points left!" << std::endl;
	}
	else {
		std::cout << name << " repairs itself for " << amount << " points!" << std::endl;
		energyPoints--;
	}
}
