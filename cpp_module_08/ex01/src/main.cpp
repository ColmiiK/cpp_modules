/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:03:06 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/19 13:03:07 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try{sp.addNumber(20);}
    catch (std::exception const & e){std::cout << e.what() << std::endl;};
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span b(0);
    try {std::cout << b.shortestSpan() << std::endl;}
    catch (std::exception const & e){std::cout << e.what() << std::endl;};
    
    const int maxNumber = 1000000;
    const int amount = 20000;
    
    Span c(amount);
    c.addNumbers(amount, maxNumber);
    /*std::cout << "Printing the whole vector..." << std::endl;
    for (int i = 0; i < amount; i++)
        std::cout << c.getNumber(i) << ", ";
    std::cout << "Finished printing\n\n" << std::endl;
    */std::cout << c.shortestSpan() << std::endl;
    std::cout << c.longestSpan() << std::endl;
    return 0;
}
