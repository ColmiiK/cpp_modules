/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:51:50 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/27 10:51:51 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <cctype>

class RPN {
private:
    std::stack<int> _stack;
    RPN& operator=(RPN const & obj);
    RPN(RPN const & obj);
public:
    RPN();
    ~RPN();
    void resolve(std::string str);
};
