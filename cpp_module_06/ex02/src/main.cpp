/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:47:37 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/13 11:47:38 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    {
        std::cout << "\n>>> A <<<" << std::endl;
        Base* a = new A;
        identify(a);
        identify(*a);
        delete a;
    }
    {
        std::cout << "\n>>> B <<<" << std::endl;
        Base* b = new B;
        identify(b);
        identify(*b);
        delete b;
    }
    {
        std::cout << "\n>>> C <<<" << std::endl;
        Base* c = new C;
        identify(c);
        identify(*c);
        delete c;
    }
    {
        std::cout << "\n>>> Random ";
        Base* random = generate();
        identify(random);
        identify(*random);
        delete random;
    }
}
