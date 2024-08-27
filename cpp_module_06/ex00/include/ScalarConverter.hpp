/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:47:13 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/13 11:47:14 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const & obj);
        ScalarConverter& operator=(ScalarConverter const & obj);
        ~ScalarConverter();
    public:
        static void convert(std::string str);
};

