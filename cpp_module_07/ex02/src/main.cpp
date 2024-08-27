/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:32:30 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/14 13:32:31 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main( void ) {
    srand(time(0));
    Array <int>a(5);
    for (unsigned int i = 0; i < a.size(); i++) {
        a[i] = rand();
    }

    std::cout << ">>> A <<<" << std::endl;
    try {
        for (unsigned int i = 0; i < 10; i++) {
            std::cout << a[i] << std::endl;
        }
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    Array <int>b = a;
    std::cout << ">>> B <<<" << std::endl;
    for (unsigned int i = 0; i < b.size(); i++) {
        std::cout << b[i] << std::endl;
    }
 
    Array <int>c;
    std::cout << ">>> C <<<" << std::endl;
    try {std::cout << c[0] << std::endl;}
    catch (std::exception & e){std::cout << e.what() << std::endl;};
    

    Array <char>d(5);
    d[0] = 'H';
    d[1] = 'e';
    d[2] = 'l';
    d[3] = 'l';
    d[4] = 'o';

    std::cout << ">>> D (char) <<<" << std::endl;
    for (unsigned int i = 0; i < d.size(); i++) {
        std::cout << d[i];
    }
    std::cout << std::endl;
}

