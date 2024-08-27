/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:23:28 by alvega-g          #+#    #+#             */
/*   Updated: 2024/05/28 16:44:32 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl( void ) {
}

Harl::~Harl( void ) {
}

void Harl::debug( void ){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::insignificant( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}


void Harl::complain( std::string level ) {
	void (Harl::*ptr_complain[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string complains[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	int i = 0;
	for (; i < 4; i++) {
		if (complains[i] == level)
			break;
	}
	switch(i){
		case(0):
			(this->*ptr_complain[0])();
		case(1):
			(this->*ptr_complain[1])();
		case(2):
			(this->*ptr_complain[2])();
		case(3):
			(this->*ptr_complain[3])();
			break;
		default:
			insignificant();
			break;
	}
}