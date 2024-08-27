/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:39 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:40 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const _name;
        bool _signed;
        int const _requiredGrade;
        int const _executeGrade;
    public:
        Form();
        Form(std::string name, int required, int execute);
        ~Form();
        Form(Form const & obj);
        Form& operator=(Form const & obj);
        
        std::string const & getName() const;
        bool const & getSigned() const;
        int const & getRequiredGrade() const;
        int const & getExecuteGrade() const;
        
        void beSigned(Bureaucrat & obj);
        void checkGrade(int grade);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw() {return "Error: grade is too high.";}
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {return "Error: grade is too low.";}
        };
};

std::ostream& operator<<(std::ostream & os, Form const & obj);
