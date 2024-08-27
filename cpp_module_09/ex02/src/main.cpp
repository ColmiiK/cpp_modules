/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:04 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:52:05 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Error: too few arguments" << std::endl;
        return 1;
    }
    std::string input;
    for (int i = 1; i < ac; i++) {
        input += av[i];
        input += " ";
    }
    PmergeMe a;
    std::cout << "Before: " << input << std::endl;
    
    {
        std::vector<int> result;
        std::clock_t start = std::clock();
        result = a.resolveVector(input);
        std::clock_t end = std::clock();
        double elapsedTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        std::cout << "After: ";
        for (unsigned int i = 0; i < result.size(); i++)
            std::cout << result[i] << " ";
        std::cout << "\n\nTime to process with std::vector:\t" << elapsedTime << "ms" << std::endl;
    }
    {
        std::deque<int> result;
        std::clock_t start = std::clock();
        result = a.resolveDeque(input);
        std::clock_t end = std::clock();
        double elapsedTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        std::cout << "Time to process with std::deque:\t" << elapsedTime << "ms" << std::endl;
    }
}
