/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:30:23 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/10 15:46:42 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av){
	std::string str;
	
	if (ac == 1)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < ac; i++)
			str.append(av[i]);
	}
	for (size_t i = 0; i < str.length(); ++i)
		str[i] = std::toupper(str[i]);
	std::cout << str << std::endl;
	return 0; 
}
