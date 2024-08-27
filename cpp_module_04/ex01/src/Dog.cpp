/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:32:15 by alvega-g          #+#    #+#             */
/*   Updated: 2024/07/02 13:13:08 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog( void ) {
	array = new Brain();
	type = "Dog";
	std::cout << "Default Dog constructor" << std::endl;
}

Dog::Dog( const Dog& source ) {
	array = new Brain(*source.array);
	type = source.type;
	std::cout << "Copy Dog constructor" << std::endl;
}

Dog& Dog::operator=( const Dog& source ) {
	std::cout << "Copy operator Dog" << std::endl;
	if (this != &source) {
		delete array;
		array = new Brain(*source.array);
		type = source.type;
	}
	return (*this);
}

Dog::~Dog( void ) {
	delete array;
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound( void ) const {
	std::cout << "Woof" << std::endl;
}