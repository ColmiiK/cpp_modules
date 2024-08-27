/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:22:56 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/11 13:03:19 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string number;
		std::string darkest_secret;
	public:
		// Constructor & Destructor
		Contact();
		~Contact();
		// Setters & Getters
		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_nickname(std::string str);
		void set_number(std::string str);
		void set_darkest_secret(std::string str);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_number();
		std::string get_darkest_secret();
};

#endif