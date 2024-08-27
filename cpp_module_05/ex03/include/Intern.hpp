/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:24 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:25 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    private:
    public:
        Intern();
        ~Intern();
        Intern(Intern const & obj);
        Intern& operator=(Intern const & obj);
        AForm* makeForm(std::string name, std::string target);
};
