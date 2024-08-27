/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:47:16 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/13 11:47:17 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        ScalarConverter::convert(av[1]);
    }
    else {
        std::cerr << "Incorrect number of arguments: ./convert \"a\"" << std::endl;
    }
    return 0;
}
