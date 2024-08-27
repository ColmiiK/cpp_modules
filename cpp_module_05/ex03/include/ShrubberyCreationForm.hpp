/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:28 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        std::string const _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const & obj);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const & obj);
        void runForm() const;
};
