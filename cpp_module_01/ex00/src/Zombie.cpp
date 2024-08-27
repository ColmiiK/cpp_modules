/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:14:54 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/18 12:27:27 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(std::string name) {
	Zombie::name = name;
	std::cout << Zombie::name << " has been created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << Zombie::name << " has been destroyed" << std::endl;
}

void Zombie::announce(void){
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
