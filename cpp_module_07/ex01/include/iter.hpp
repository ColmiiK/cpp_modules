/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:32:20 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/14 13:32:21 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename L, typename F>
void iter(T array, L length, F function) {
    for (int i = 0; i < length; i++) {
        array[i] = function(array[i]);
    }
}
