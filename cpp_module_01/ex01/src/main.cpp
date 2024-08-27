/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:21:06 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/18 12:33:49 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main( void ){
	Zombie *zombie = zombieHorde(5, "Foo");
	for (int i = 0; i < 5; i++){
		zombie[i].announce();
	}
	delete [] zombie;
	return 0;
}