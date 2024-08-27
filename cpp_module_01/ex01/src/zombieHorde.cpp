/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:20:27 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/18 12:38:18 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie * zombieHorde( int N, std::string name ){
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return horde;
}