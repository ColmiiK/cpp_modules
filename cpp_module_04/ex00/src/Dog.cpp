/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:32:15 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/17 16:28:23 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ) {
	std::cout << "Default Dog constructor" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog& source ) {
	std::cout << "Copy Dog constructor" << std::endl;
	type = source.type;
}

Dog& Dog::operator=( const Dog& source ) {
	std::cout << "Copy operator Dog" << std::endl;
	type = source.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << "Woof" << std::endl;
}