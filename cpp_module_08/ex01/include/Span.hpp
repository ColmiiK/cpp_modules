/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:03:03 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/19 13:03:04 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <limits>
#include <vector>
#include <algorithm>

class Span {
private:
    std::vector <int>_vector;
    Span();
public:
    Span(unsigned int size);
    Span(Span const & obj);
    ~Span();
    Span& operator=(Span const & obj);

    void addNumber(int n);
    void addNumbers(unsigned int amount, int max);
    int shortestSpan();
    int longestSpan();
    int getNumber(unsigned int index);

    class ExceededCapacity : public std::exception{
    public:
        const char* what() const throw(){return "Array cannot hold any more values";}
    };
    class NotEnoughNumbers : public std::exception{
    public:
        const char* what() const throw(){return "Array doesn't have enough values to find span.";}
    };
};
