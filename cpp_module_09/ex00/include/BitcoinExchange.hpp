/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:51:42 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:51:43 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <sstream>
#include <limits>

class BitcoinExchange {
private:
    std::map<std::string, float> _csv;
    std::map<std::string, float> _input;
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const & obj);
    BitcoinExchange& operator=(BitcoinExchange const & obj);
    
    void addValueCSV(std::string date, float rate);
    float getValue(std::string date);
    std::map<std::string, float>::iterator addValueInput(std::string date, float rate);
    void runMap(std::map<std::string, float>::iterator it, BitcoinExchange &data);
};

void split(const std::string& str, char delimiter, std::string parts[], int maxParts);

