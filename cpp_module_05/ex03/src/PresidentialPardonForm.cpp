/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:35 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:36 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj){
    *this = obj;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & obj){
    if (this == &obj)
        ;
    return *this;
}
void PresidentialPardonForm::runForm() const {
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
