/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:47:24 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/13 11:47:25 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data {
    private:
        std::string _name;
        int _age;
    public:
        Data(){};
        Data(std::string name, int age) : _name(name), _age(age){};
        ~Data(){};
        Data(Data const & obj){*this = obj;};
        Data& operator=(Data const & obj) {
            this->_name = obj._name;
            this->_age = obj._age;
            return *this;
        };
        std::string getName(){return _name;};
        int getAge(){return _age;};;
};
