/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:36:53 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/18 10:51:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <WrongAnimal.hpp>
# include <iostream>

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( const WrongCat& source );
		WrongCat& operator=( const WrongCat& source );
		~WrongCat( void );
		void makeSound( void ) const;
};

#endif