/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:05:53 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/10 13:23:48 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>
# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook{
	private:
		Contact contacts[8];
		int index;
	public:
		// Constructor & Destructor
		PhoneBook();
		~PhoneBook();
		// Methods
		void add();
		void search();
};


#endif