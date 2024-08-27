/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:11:52 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/18 12:15:56 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif