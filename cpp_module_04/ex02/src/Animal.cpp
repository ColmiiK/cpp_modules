/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:50:35 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/17 13:46:17 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal( void ) {
	std::cout << "Default Animal constructor" << std::endl;
	type = "Animal";
}

Animal::Animal( const Animal& source ) {
	std::cout << "Copy Animal constructor" << std::endl;
	type = source.type;
}

Animal& Animal::operator=( const Animal& source ) {
	std::cout << "Copy operator Animal" << std::endl;
	type = source.type;
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound( void ) const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType( void ) const {
	return (type);
}