/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:52:01 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:52:02 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>

class PmergeMe {
private:
public:
    PmergeMe();
    PmergeMe(PmergeMe const & obj);
    ~PmergeMe();
    PmergeMe& operator=(PmergeMe const & obj);
    std::vector<int> resolveVector(std::string input);
    std::deque<int> resolveDeque(std::string input);
};
