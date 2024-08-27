/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:33:23 by alvega-g          #+#    #+#             */
/*   Updated: 2024/05/28 16:13:40 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

int main(int ac, char **av) {
	if (ac != 4){
		return (printError("Incorrect number of arguments"));
	}
	if (!av[2][0])
		return (printError("Incorrect input"));
	std::ifstream file(av[1]);
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string original;
	
	if (openCopyFile(original, file))
		return (printError("Unable to open file"));
	
	std::string replaced = searchAndReplace(original, s1, s2);
	if (createAndCopy(av[1], replaced))
		return (printError("Unable to create and copy replaced text to file"));
	
	return (0);
}