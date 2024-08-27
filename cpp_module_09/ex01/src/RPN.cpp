/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:51:55 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:51:56 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}
RPN::RPN(RPN const & obj){*this = obj;}
RPN::~RPN(){}
RPN& RPN::operator=(RPN const & obj){
    this->_stack = obj._stack;
    return *this;
}

void RPN::resolve(std::string str){
    for (unsigned int i = 0; i < str.length(); i++) {
        if (str[i] == ' ')
            ;
        else if (str[i] == '(' || str[i] == ')')
            throw std::string("Error");
        else if (isdigit(str[i]))
            _stack.push(str[i] - '0');
        else if (str[i] == '+' && _stack.size() >= 2) {
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(a + b);
        }
        else if (str[i] == '-' && _stack.size() >= 2) {
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(a - b);
        }
        else if (str[i] == '*' && _stack.size() >= 2) {
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            _stack.push(a * b);
        }
        else if (str[i] == '/' && _stack.size() >= 2) {
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            if (b == 0)
                throw std::string("Error: I can't divide by zero 😢");
            _stack.push(a / b);
        }
        else
            throw std::string("Error");
    }
    if (_stack.size() != 1)
        throw std::string("Error");
    int result = _stack.top();
    _stack.pop();
    std::cout << result << std::endl;
}
