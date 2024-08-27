/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:28:30 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/17 16:28:27 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat( void ) {
	std::cout << "Default Cat constructor" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat& source ) {
	std::cout << "Copy Cat constructor" << std::endl;
	type = source.type;
}

Cat& Cat::operator=( const Cat& source ) {
	std::cout << "Copy operator Cat" << std::endl;
	type = source.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}