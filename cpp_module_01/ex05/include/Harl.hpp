/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:11:31 by alvega-g          #+#    #+#             */
/*   Updated: 2024/05/28 16:18:21 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
};

#endif