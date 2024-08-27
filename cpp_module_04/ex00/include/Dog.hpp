/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:26:14 by alvega-g          #+#    #+#             */
/*   Updated: 2024/07/02 13:15:44 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <iostream>

class Dog : public Animal {
	public:
		Dog( void );
		Dog( const Dog& source );
		Dog& operator=( const Dog& source );
		~Dog( void );
		virtual void makeSound( void ) const;
};

#endif