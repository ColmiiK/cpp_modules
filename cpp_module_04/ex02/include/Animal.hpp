/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:50:45 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/04 11:52:46 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( const Animal& source );
		Animal& operator=( const Animal& source );
		virtual ~Animal( void );
		virtual void makeSound( void ) const = 0;
		std::string getType( void ) const;
};

#endif