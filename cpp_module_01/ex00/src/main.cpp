/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:19:11 by alvega-g          #+#    #+#             */
/*   Updated: 2024/05/28 15:53:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main(){
	Zombie *zombie = newZombie("Foo");
	zombie->announce();

	randomChump("Bar");
	
	delete zombie;
	return 0;
}