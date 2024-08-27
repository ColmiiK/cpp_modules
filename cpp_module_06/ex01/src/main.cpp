/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:47:28 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/13 11:47:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    Data a("Pepe", 42);

    uintptr_t raw = Serializer::serialize(&a);

    std::cout << raw << std::endl;

    Data *b = Serializer::deserialize(raw);

    std::cout << b->getName() << std::endl;
    std::cout << b->getAge() << std::endl;
    return 0;
}
