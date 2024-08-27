/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:47:39 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/13 11:47:40 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
    srand(time(0));
    int rng = rand() % 3;
    if (rng == 0)
        return std::cout << "(A) <<<" << std::endl, new A;
    if (rng == 1)
        return std::cout << "(B) <<<" << std::endl, new B;
    if (rng == 2)
        return std::cout << "(C) <<<" << std::endl, new C;
    return NULL;
}

void identify(Base* p) {
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    if (a)
        std::cout << "Pointer to class A" << std::endl;
    if (b)
        std::cout << "Pointer to class B" << std::endl;
    if (c)
        std::cout << "Pointer to class C" << std::endl;
}

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "Reference to class A" << std::endl;
    }
    catch (std::exception & e){}
    try {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "Reference to class B" << std::endl;
    }
    catch (std::exception & e){}
    try {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "Reference to class C" << std::endl;
    }
    catch (std::exception & e){}
}
