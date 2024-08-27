/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:37 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:38 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj){
    *this = obj;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj){
    if (this == &obj)
        ;
    return *this;
}

void ShrubberyCreationForm::runForm() const {
        std::ofstream file;
        file.open(std::string(this->_target + std::string("_shrubbery")).c_str());
        file << "           ,@@@@@@@," << std::endl;
        file << "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
        file << ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
        file << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
        file << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
        file << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
        file << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
        file << "    |o|        | |         | |" << std::endl;
        file << "    |.|        | |         | |" << std::endl;
        file << "  \\/ ._\\//_/__/  ,\\_/\\/__\\/.  \\_/\\/__/_" << std::endl;
        file.close();
}
