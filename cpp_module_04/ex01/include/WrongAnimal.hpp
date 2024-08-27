/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:34:08 by alvega-g          #+#    #+#             */
/*   Updated: 2024/07/02 13:32:51 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& source );
		WrongAnimal& operator=( const WrongAnimal& source );
		virtual ~WrongAnimal( void );
		void makeSound( void ) const;
		std::string getType( void ) const;
};

#endif