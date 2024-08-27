/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:33 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:34 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main() {
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
        Bureaucrat alpha("Alpha", 1);
        alpha.signAForm(*rrf);
        alpha.executeForm(*rrf);
        delete rrf;
    }
    {
        Intern two;
        AForm* invalid;
        invalid = two.makeForm("InvalidForm", "InvalidName");
        delete invalid;
    }
}
