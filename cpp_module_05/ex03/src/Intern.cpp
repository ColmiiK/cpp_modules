/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:32 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:33 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(Intern const & obj){
    *this = obj;
}
Intern::~Intern(){}
Intern& Intern::operator=(Intern const & obj){
    if (this != &obj)
        ;
    return *this;
}

AForm* makeShrubbery(std::string target){
    return new ShrubberyCreationForm(target);
}
AForm* makeRobotomy(std::string target){
    return new RobotomyRequestForm(target);
}
AForm* makePresidential(std::string target){
    return new PresidentialPardonForm(target);
}
AForm* Intern::makeForm(std::string name, std::string target){
    AForm* temp = NULL;
    AForm* (*ptr_makeForm[3])(std::string) = {
        &makeShrubbery,
        &makeRobotomy,
        &makePresidential,
    };
    std::string forms[3] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm",
    };
    try {
        for (int i = 0; i < 3; i++) {
            if (name == forms[i]) {
                temp = (ptr_makeForm[i])(target);
            }
        }
        if (!temp)
            throw "Error: couldn't find form";
    }
    catch (char const* e) {
        std::cout << e << std::endl;
        return temp;
    }
    std::cout << "Intern creates " << name << " with target " << target << std::endl;
    return temp;
}
