/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:34:08 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/12 11:38:31 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <FragTrap.hpp>
# include <ScavTrap.hpp>

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string str );
		DiamondTrap( const DiamondTrap &source );
		DiamondTrap& operator=( const DiamondTrap &source );
		~DiamondTrap( void );
		
		void attack(const std::string &target );
		void whoAmI( void );
		
};


#endif