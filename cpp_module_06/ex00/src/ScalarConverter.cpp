/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:47:18 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/13 11:47:19 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter const & obj){*this = obj;}
ScalarConverter::~ScalarConverter(){}
ScalarConverter& ScalarConverter::operator=(ScalarConverter const & obj){
    if (this != &obj)
        ;
    return *this;
}

static void castFromChar(char c){
    std::cout << "char: \t" << static_cast<char>(c) << std::endl;
    std::cout << "int: \t" << static_cast<int>(c) << std::endl;
    std::cout << "float: \t" << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}
static void castFromInt(int value){
    if (value < 32 || value > 126)
        std::cout << "char: \tnon displayable" << std::endl;
    else
        std::cout << "char: \t" << static_cast<char>(value) << std::endl;
    std::cout << "int: \t" << static_cast<int>(value) << std::endl;
    std::cout << "float: \t" << static_cast<float>(value) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

static void castFromFloat(float val){
    if (val < 32 || val > 126)
        std::cout << "char: \tnon displayable" << std::endl;
    else
        std::cout << "char: \t" << static_cast<char>(val) << std::endl;
    std::cout << "int: \t" << static_cast<int>(val) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: \t" << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << std::endl;
}
static void castFromDouble(double val){
    if (val < 32 || val > 126)
        std::cout << "char: \tnon displayable" << std::endl;
    else
        std::cout << "char: \t" << static_cast<char>(val) << std::endl;
    std::cout << "int: \t" << static_cast<int>(val) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: \t" << static_cast<float>(val) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(val) << std::endl;
}

static void castFromNan() {
    std::cout << "char: \timpossible" << std::endl;
    std::cout << "int: \timpossible" << std::endl;
    std::cout << "float: \t" << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
    std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
}

static void castFromInf(std::string str) {
    std::cout << "char: \tnon displayable" << std::endl;
    std::cout << "int: \tnon displayable" << std::endl;
    std::cout << "float: \t";
    if (str[0] == '-')
        std::cout << "-";
    std::cout << std::numeric_limits<float>::infinity() << "f" << std::endl;
    std::cout << "double: ";
    if (str[0] == '-')
        std::cout << "-";
    std::cout << std::numeric_limits<double>::infinity() << std::endl;
}

static char checkInput(std::string str) {
    {
        if (!str.compare("nan"))
            return 'N';
        if  (!str.compare("-inff") || !str.compare("+inff")
            || !str.compare("-inf") || !str.compare("+inf")
            || !str.compare("inff") || !str.compare("inf"))
            return 'E';
    }
    {
        bool isChar = true;
        if (str.length() != 1)
            isChar = false;
        if (std::isalpha(str[0]) == false)
            isChar = false;
        if (isChar == true)
            return 'C';
    }
    {
        bool isInt = true;
        for (unsigned int i = 0; i < str.length(); i++) {
            if (i == 0 && (str[i] == '-'))
                i++;
            if (std::isdigit(str[i]) == false) {
                isInt = false;
                break;
            }
        }
        if (isInt == true)
            return 'I';
    }
    {
        bool isFloat = true;
        unsigned int i = 0;
        if (i == 0 && str[i] == '-')
            i++;
        for (;i < str.length() && std::isdigit(str[i]); i++)
            ;
        if (i < str.length() && str[i] == '.') {
            i++;
            for (;i < str.length() - 1 && std::isdigit(str[i]); i++)
                ;
            if (str[i] != 'f' || i + 1 != str.length())
                isFloat = false;
        }
        else
            isFloat = false;
        if (isFloat == true)
            return 'F';
    }
    {
        bool isDouble = true;
        unsigned int i = 0;
        if (i == 0 && str[i] == '-')
            i++;
        for (;i < str.length() && std::isdigit(str[i]); i++)
            ;
        if (i < str.length() && str[i] == '.') {
            i++;
            for (;i < str.length() - 1 && std::isdigit(str[i]); i++)
                ;
            if (i + 1 != str.length())
                isDouble = false;
        }
        else
            isDouble = false;
        if (isDouble == true)
            return 'D';
    }
    return '.';
}

void ScalarConverter::convert(std::string str) {
    char *endptr;
    switch (checkInput(str)) {
        case 'C':
            castFromChar(str[0]);
            break;
        case 'I':
            castFromInt(atoi(str.c_str()));
            break;
        case 'F':
            castFromFloat(std::strtof(str.c_str(), &endptr));
            break;
        case 'D':
            castFromDouble(std::strtod(str.c_str(), &endptr));
            break;
        case 'N':
            castFromNan();
            break;
        case 'E':
            castFromInf(str);
            break;
        default:
            std::cerr << "Error: unable to determine variable type" << std::endl;
            break;
    }
}
