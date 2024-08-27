/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:12:50 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/18 11:30:24 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	public:
		std::string ideas[100];
		Brain( void );
		Brain( const Brain& source );
		Brain& operator=( const Brain& source );
		~Brain( void );
};

#endif