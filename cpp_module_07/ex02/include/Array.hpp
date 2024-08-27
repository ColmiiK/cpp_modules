/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:32:26 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/14 13:32:27 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

template <typename T>
class Array {
    private:
        T * _array;
        unsigned int _size;
    public:
        Array() {
            _size = 0;
            _array = new T[_size];
        };
        Array(unsigned int amount) : _size(amount) {
            _array = new T[_size];
        };
        ~Array() {
            delete [] _array;
        };
        Array(Array const & obj) {
            *this = obj;
        };
        Array& operator=(Array const & obj) {
            _size = obj._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = obj._array[i];
            }
            return *this;
        };
        T& operator[](unsigned int index) {
            if (index < 0 || index >= _size)
                throw Array::OutOfBoundsException();
            return _array[index];
        };
        unsigned int size() {return _size;};
        class OutOfBoundsException : public std::exception {
            public:
                const char* what() const throw(){return "Index is out of bounds";};
        };
};
