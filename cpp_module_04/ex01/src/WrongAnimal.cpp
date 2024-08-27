/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:50:28 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/18 10:53:33 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal( void ) {
	std::cout << "Default WrongAnimal constructor" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal& source ) {
	std::cout << "Copy WrongAnimal constructor" << std::endl;
	type = source.type;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& source ) {
	std::cout << "Copy operator WrongAnimal" << std::endl;
	type = source.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (type);
}