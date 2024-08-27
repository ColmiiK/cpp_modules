/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:51:37 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:51:38 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(BitcoinExchange const & obj){*this = obj;}
BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & obj){
    this->_csv = obj._csv;
    this->_input = obj._input;
    return *this;
}

void BitcoinExchange::addValueCSV(std::string date, float rate) {
    _csv[date] = rate;
}

float BitcoinExchange::getValue(std::string date) {
    if (_csv.find(date) == _csv.end()){
        std::map<std::string, float>::iterator it = _csv.upper_bound(date);
        it--;
        return it->second;
    }
    return _csv[date];
}

std::map<std::string, float>::iterator BitcoinExchange::addValueInput(std::string date, float rate) {
    _input[date] = rate;
    return _input.find(date);
}

void split(const std::string& str, char delimiter, std::string parts[], int maxParts) {
    std::string::size_type start = 0;
    std::string::size_type end;
    int partIndex = 0;

    while (partIndex < maxParts - 1 && (end = str.find(delimiter, start)) != std::string::npos) {
        parts[partIndex++] = str.substr(start, end - start);
        start = end + 1;
    }
    parts[partIndex] = str.substr(start);
}

static bool checkLeapYear(int year) {
    if (year % 400 == 0) {return true;}
    if (year % 100 == 0) {return false;}
    if (year % 4 == 0) {return true;}
    return false;
}

static void checkDate(std::string date) {
    std::stringstream ss(date);
    int year, month, day;
    ss >> year;
    ss >> month;
    ss >> day;
    month = abs(month);
    day = abs(day);
    if (checkLeapYear(year) && month == 2 && day == 29)
        return;
    if (year == 2009 && month == 01 && day == 01)
        throw "Error: date is invalid -> "+ date;
    if (year < 2009 || year > 2022)
        throw "Error: year is invalid -> " + date;
    if (month < 1 || month > 12)
        throw "Error: month is invalid -> " + date;
    if (day < 1 || day > 31)
        throw "Error: day is invalid -> " + date;
    if (month == 2 && day > 28)
        throw "Error: day is invalid -> " + date;
}

static void checkValue(float value) {
    if (value < 0)
        throw std::string("Error: value is too low");
    if (value > 1000)
        throw std::string("Error: value is too high");
}

static float multipliedRate(std::map<std::string, float>::iterator it, BitcoinExchange &data) {
    float rate = it->second;
    float value = data.getValue(it->first);
    std::cout <<"("<< rate << " * " << value << ") == ";
    return rate * value;
}

void BitcoinExchange::runMap(std::map<std::string, float>::iterator it, BitcoinExchange &data) {
    if (it->first == "date ")
        return;
    try {
        checkDate(it->first);
        checkValue(it->second);
        std::cout << it->first << "-> " << multipliedRate(it, data) << std::endl;
    }
    catch (std::string const & e) {std::cout << e <<  std::endl;}

}

