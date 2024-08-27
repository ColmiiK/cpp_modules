/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:28:21 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/10 13:27:38 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int main(int ac, char **av){
	
	PhoneBook pb;
	std::string str;

	(void)av;
	
	if (ac != 1) {
		std::cerr << "No arguments allowed" << std::endl;
		return 1;
	}
	while (str != "EXIT"){
		if (!std::cin.eof()) {
			std::cout << "Enter a command: ";
			std::getline(std::cin, str);
		}
		if (std::cin.eof()) {
			std::cout << std::endl;
			return 0;
		}
		if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
		else if (str != "EXIT")
			std::cout << "Invalid command, please try again" << std::endl;
	}
	return 0;
}
