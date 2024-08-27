/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:02:57 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/19 13:02:58 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
int easyfind(T container, int find){
    for (unsigned int i = 0; container[i]; i++) {
        if (container[i] == find)
            return container[i];
    }
    throw "Unable to find parameter in container";
}
