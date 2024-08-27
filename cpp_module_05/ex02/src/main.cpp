/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:01 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:02 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    {
        ShrubberyCreationForm one("Goodsprings");
        Bureaucrat victor("Victor", 100);
        victor.signAForm(one);
        victor.executeForm(one);
    }
    {
        RobotomyRequestForm one("Courier");
        Bureaucrat moebius("Dr. Moebius", 5);
        moebius.signAForm(one);
        moebius.executeForm(one);
    }
    {
        PresidentialPardonForm one("Caesar");
        Bureaucrat house("Mr. House", 5);
        house.signAForm(one);
        house.executeForm(one);
    }

}
