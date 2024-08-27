/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:24:54 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/18 12:38:30 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie ( void ){
	Zombie::name = "(null)";
	std::cout << Zombie::name << " has been created" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << Zombie::name << " has been destroyed" << std::endl;
}

void Zombie::announce(void){
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	Zombie::name = name;
}
