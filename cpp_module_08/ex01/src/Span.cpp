/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:03:08 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/19 13:03:09 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}
Span::Span(unsigned int size){
    _vector.reserve(size);
}
Span::Span(Span const & obj){
    *this = obj;
}
Span::~Span(){}
Span& Span::operator=(Span const & obj){
    _vector = obj._vector;
    return *this;
}

void Span::addNumber(int n){
    if (_vector.size() >= _vector.capacity())
        throw Span::ExceededCapacity();
    _vector.push_back(n);
}
void Span::addNumbers(unsigned int amount, int max){
    srand(time(0));
    if (_vector.size() + amount > _vector.capacity())
        throw Span::ExceededCapacity();
    for (unsigned int i = 0; i < amount; i++)
        _vector.push_back(rand() % max);
}
int Span::shortestSpan(){
    if (_vector.size() <= 1)
        throw Span::NotEnoughNumbers();
    std::vector<int> sorted = _vector;
    std::sort(sorted.begin(), sorted.end());
    int shortestSpan = std::numeric_limits<int>::max();
    for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end() - 1; it++) {
        int currentSpan = *(it + 1) - *it;
        if (currentSpan < shortestSpan)
            shortestSpan = currentSpan;
    }
    return shortestSpan;
}
int Span::longestSpan(){
    if (_vector.size() <= 1)
        throw Span::NotEnoughNumbers();
    int min = *std::min_element(_vector.begin(), _vector.end());
    int max = *std::max_element(_vector.begin(), _vector.end());

    return max - min;
}
int Span::getNumber(unsigned int index){return _vector.at(index);}
