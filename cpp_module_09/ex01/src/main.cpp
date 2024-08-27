/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:51:53 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:51:54 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: incorrect number of arguments (ex. \"4 2 + 5 -\")" << std::endl;
        return 1;
    }
    RPN thing;
    try {thing.resolve(std::string(av[1]));}
    catch (std::string & e) {std::cerr << e << std::endl;}
    return 0;
}
