/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:43:31 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/10 13:46:17 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ){
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "String: \t" << &string << std::endl;
	std::cout << "Pointer: \t" << stringPTR << std::endl;
	std::cout << "Reference: \t" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String: \t" << string << std::endl;
	std::cout << "Pointer: \t" << *stringPTR << std::endl;
	std::cout << "Reference: \t" << stringREF << std::endl;
}
