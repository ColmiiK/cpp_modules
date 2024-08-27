/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:59:57 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/12 11:32:39 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string str );
		FragTrap( const FragTrap& source );
		FragTrap& operator=( const FragTrap& source );
		~FragTrap( void );
		
		void highFivesGuys( void );
};

#endif