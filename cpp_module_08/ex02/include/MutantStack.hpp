/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:03:12 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/19 13:03:13 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>(){};
    ~MutantStack(){};
    MutantStack(MutantStack const & obj) : std::stack<T>(obj){*this = obj;};
    MutantStack& operator=(MutantStack const & obj){
        std::stack<T>::operator=(obj);
        return *this;
    };
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(){return this->c.begin();};
    iterator end(){return this->c.end();};
};
