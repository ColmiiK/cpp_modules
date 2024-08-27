/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:35 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:36 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat alpha("Alpha", 3);
    std::cout << alpha << std::endl;
    Bureaucrat beta;
    std::cout << beta << std::endl;
/* 	for (int i = 0; i < 10; i++)
		alpha.incrementGrade();
	std::cout << alpha.getGrade() << std::endl;
	for (int i = 0; i < 10; i++)
		alpha.decrementGrade();
	std::cout << alpha.getGrade() << std::endl; */
}
