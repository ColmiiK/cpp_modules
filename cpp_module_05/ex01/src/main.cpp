/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:49 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:50 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
	Bureaucrat alpha("Alpha", 5);
    alpha.decrementGrade();
    Form one("One", 200, 50);
    std::cout << one << std::endl;
    std::cout << alpha << std::endl;

    alpha.signForm(one);

    std::cout << one << std::endl;

}
