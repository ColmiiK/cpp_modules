/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:03:00 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/19 13:03:01 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

int main() {
    {
        std::vector<int> a(10);
        for (int i = 0; i < 10; i++)
            a[i] = i + 1;
        try {
            std::cout << easyfind(a, 3) << std::endl;
            std::cout << easyfind(a, 15) << std::endl;
        }
        catch (const char *e){
            std::cout << e << std::endl;
        }
    }

    {
        int array[10];
        for (int i = 0; i < 10; i++)
            array[i] = i + 1;
        try {
            std::cout << easyfind(array, 5) << std::endl;
            std::cout << easyfind(array, 20) << std::endl;
        }
        catch (const char *e){
            std::cout << e << std::endl;
        }
    }
    {
        std::deque<int> dq;
        for (int i = 0; i < 10; i++)
            dq.push_front(i + 1);
        try {
            std::cout << easyfind(dq, 7) << std::endl;
            std::cout << easyfind(dq, 77) << std::endl;
        }
        catch (const char *e){
            std::cout << e << std::endl;
        }
    }
}
