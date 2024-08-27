/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:32:22 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/14 13:32:23 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int addOne(int n){return n + 1;}
int uppercase(int n){return n -32;}

int main( void ) {
    {
    int array[5] = {1, 2, 3, 4, 5};
    int len = sizeof(array) / sizeof(array[0]);
    int (*function)(int);
    function = &addOne;

    std::cout << "\n>>> Before <<<" << std::endl;
    for (int i = 0; i < len; i++) {
        std::cout << array[i] << std::endl;
    }

     std::cout << "\n>>> After <<<" << std::endl;
    ::iter(array, len, function);
    for (int i = 0; i < len; i++) {
        std::cout << array[i] << std::endl;
    }
    }
    {
    char array[20] = "fateprojectionalpha";
    int len = sizeof(array) / sizeof(array[0]);
    int (*function)(int);
    function = &uppercase;

    std::cout << "\n>>> Before <<<" << std::endl;
    for (int i = 0; i < len; i++) {
        std::cout << array[i];
    }

     std::cout << "\n>>> After <<<" << std::endl;
    ::iter(array, len, function);
    for (int i = 0; i < len; i++) {
        std::cout << array[i];
    }


    }
    return 0;
}
