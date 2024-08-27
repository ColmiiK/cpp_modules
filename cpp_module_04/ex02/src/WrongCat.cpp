/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:50:25 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/18 10:56:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat( void ) {
	std::cout << "Default WrongCat constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& source ) {
	std::cout << "Copy WrongCat constructor" << std::endl;
	type = source.type;
}

WrongCat& WrongCat::operator=( const WrongCat& source ) {
	std::cout << "Copy operator WrongCat" << std::endl;
	type = source.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound( void ) const {
	std::cout << "Wrong Meow" << std::endl;
}