/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:51:40 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:51:41 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void parseCSVLine(std::string line, BitcoinExchange &data) {
    std::string tokens[2];
    split(line, ',', tokens, 2);
    std::stringstream ss(tokens[1]);
    float rate;
    ss >> rate;
    data.addValueCSV(tokens[0], rate);
}

void readCSVFile(BitcoinExchange &data) {
    std::fstream file("data.csv");
    if (!file){
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);
    }
    std::string line;
    while (std::getline(file, line)) {
        parseCSVLine(line, data);
    }
}

std::map<std::string, float>::iterator parseInputLine(std::string line, BitcoinExchange &data) {
    std::string tokens[2];
    split(line, '|', tokens, 2);
    if (tokens[1] == "")
        return data.addValueInput(tokens[0], -1);
    std::stringstream ss(tokens[1]);
    float rate;
    ss >> rate;
    return data.addValueInput(tokens[0], rate);
}

void readInputFile(char *name, BitcoinExchange &data) {
    std::fstream file(name);
    if (!file) {
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);
    }
    std::string line;
    while (std::getline(file, line)) {
        data.runMap(parseInputLine(line, data), data);
    }
}

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: incorrect number of arguments" << std::endl;
        return (1);
    }
    BitcoinExchange data;
    readCSVFile(data);
    readInputFile(av[1], data);
}
