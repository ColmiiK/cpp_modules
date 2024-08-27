/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainUtils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:35:51 by alvega-g          #+#    #+#             */
/*   Updated: 2024/05/28 16:10:44 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

int printError(std::string msg){
	std::cerr << msg << std::endl;
	return (1);
}

int openCopyFile(std::string &original, std::ifstream &file){
	std::string line;
	

	if (file.is_open()){
		while (std::getline(file, line)){			
			original += line + '\n';
		}
		file.close();
		return (0);
	}
	else
		return (1);
}

std::string searchAndReplace(std::string &original, std::string &s1, std::string &s2){
	size_t start = 0;
	std::string replaced = original;

	while ((start = replaced.find(s1, start)) != std::string::npos)	{
		replaced.erase(start, s1.length());
		replaced.insert(start, s2);
		start += s2.length();
	}
	return (replaced);
}

int createAndCopy(std::string filename, std::string &str){
	filename.append(".replace");
	std::ofstream file(filename.c_str());
	if (file.is_open()) {
		file << str;
		file.close();
		return (0);
	}
	else {
		return (1);
	}
}