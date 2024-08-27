/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:37:09 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/12 11:33:08 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		unsigned int attackDamage;
	public:
		ClapTrap( void );
		ClapTrap( std::string str );
		ClapTrap( const ClapTrap& source);
		ClapTrap& operator=( const ClapTrap& source);
		virtual ~ClapTrap( void );
		
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};

#endif