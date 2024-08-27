/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:28:30 by alvega-g          #+#    #+#             */
/*   Updated: 2024/07/02 13:13:11 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ) {
	array = new Brain();
	type = "Cat";
	std::cout << "Default Cat constructor" << std::endl;
}

Cat::Cat( const Cat& source ) {
	array = new Brain(*source.array);
	type = source.type;
	std::cout << "Copy Cat constructor" << std::endl;
}

Cat& Cat::operator=( const Cat& source ) {
	std::cout << "Copy operator Cat" << std::endl;
	if (this != &source) {
		delete array;
		array = new Brain(*source.array);
		type = source.type;
	}
	return (*this);
}

Cat::~Cat( void ) {
	delete array;
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}