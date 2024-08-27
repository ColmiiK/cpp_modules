/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:55 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:56 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
    private:
        std::string const _target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const & obj);
        PresidentialPardonForm& operator=(PresidentialPardonForm const & obj);
        void runForm() const;
};
