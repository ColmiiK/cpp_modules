/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:27:14 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/18 12:05:06 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain( void ) {
	std::cout << "Default Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = "Some idea";
	}
}

Brain::Brain( const Brain& source ) {
	std::cout << "Copy Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = source.ideas[i];
	}
}

Brain& Brain::operator=( const Brain & source ) {
	std::cout << "Brain copy operator" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = source.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor" << std::endl;
}