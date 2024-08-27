/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:51:35 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/14 11:30:41 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <iostream>

PhoneBook::PhoneBook(){
	index = 0;
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::add(){
	std::string str;
	
	str = "";
	while (str == ""){
		std::cout << "Enter your first name: ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		if (str == "")
			std::cout << "Field cannot be empty, please try again" << std::endl;
	}
	contacts[index % 8].set_first_name(str);
	
	str = "";
	while (str == ""){
		std::cout << "Enter your last name: ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		if (str == "")
			std::cout << "Field cannot be empty, please try again" << std::endl;
	}
	contacts[index % 8].set_last_name(str);

	str = "";
	while (str == ""){
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		if (str == "")
			std::cout << "Field cannot be empty, please try again" << std::endl;
	}
	contacts[index % 8].set_nickname(str);

	str = "";
	while (str == ""){
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		if (str == "")
			std::cout << "Field cannot be empty, please try again" << std::endl;
		if (str.find_first_not_of("0123456789") != std::string::npos) {
			std::cout << "Field can only contain numbers, please try again" << std::endl;
			str = "";
		}
	}
	contacts[index % 8].set_number(str);

	str = "";
	while (str == ""){
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, str);
		if (std::cin.eof()) {
			std::cout << std::endl;
			return ;
		}
		if (str == "")
			std::cout << "Field cannot be empty, please try again" << std::endl;
	}
	contacts[index % 8].set_darkest_secret(str);
	
	index++;
	
	if (index > 7)
		std::cout << "Warning: phonebook is full, adding more contacts will overwrite the oldest ones" << std::endl;
}

static void check_spacing_and_print(std::string str){
	if (str.length() <= 10) {
		std::cout << std::right << std::setw(10) << str;
	} else {
		str = str.substr(0, 9) + ".";
		std::cout << std::right << std::setw(10) << str;
	}
	std::cout << "|";
	return ;
}
static void search_ui(Contact contacts[8]){
	std::string str;

	std::cout << " ____________________________________________" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	
	for (size_t i = 0; i < 8; i++){
		std::cout << "|         " << i + 1 << "|";
		check_spacing_and_print(contacts[i].get_first_name());
		check_spacing_and_print(contacts[i].get_last_name());
		check_spacing_and_print(contacts[i].get_nickname());
		std::cout << std::endl;			
	}	
	
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << std::endl;
	return;
}

void PhoneBook::search(){
	std::string str;

	search_ui(contacts);
	
	std::cout << "Enter the index of the contact you want to see: ";
	std::getline(std::cin, str);
	if (std::cin.eof()) {
		std::cout << std::endl;
		return ;
	}
	if (str.size() != 1 || str[0] < '1' || str[0] > '8'){
		std::cout << "Invalid index, please try again" << std::endl;
		return;
	}
	else if (contacts[str[0] - '1'].get_first_name() == ""){
		std::cout << "No contact at this index, please try again" << std::endl;
		return;
	}
	else{
		std::cout << "First Name: " << contacts[str[0] - '1'].get_first_name() << std::endl;
		std::cout << "Last Name: " << contacts[str[0] - '1'].get_last_name() << std::endl;
		std::cout << "Nickname: " << contacts[str[0] - '1'].get_nickname() << std::endl;
		std::cout << "Phone Number: " << contacts[str[0] - '1'].get_number() << std::endl;
		std::cout << "Darkest Secret: " << contacts[str[0] - '1'].get_darkest_secret() << std::endl;
	}
}