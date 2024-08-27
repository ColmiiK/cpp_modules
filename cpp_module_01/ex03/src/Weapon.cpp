/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:43:46 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/19 12:25:23 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string type){
	setType(type);
}

Weapon::~Weapon(void){
}

std::string const Weapon::getType(void){
	return (Weapon::type);
}
void Weapon::setType(std::string type) {
	Weapon::type = type;
}