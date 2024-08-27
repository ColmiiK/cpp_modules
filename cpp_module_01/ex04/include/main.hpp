/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:34:13 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/20 13:07:48 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <string>
#include <iostream>
#include <fstream>

int printError(std::string msg);
int openCopyFile(std::string &original, std::ifstream& file);
std::string searchAndReplace(std::string &original, std::string &s1, std::string &s2);
int createAndCopy(std::string filename, std::string &str);

#endif