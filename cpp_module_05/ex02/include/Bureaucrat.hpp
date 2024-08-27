/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:54 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:55 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & obj);
        Bureaucrat& operator=(Bureaucrat const & obj);
        std::string const & getName() const;
        int const & getGrade() const;
        void incrementGrade();
        void decrementGrade();

        void signAForm(AForm & obj);
        void executeForm(AForm const & form) const;
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw() {return "Error: Grade is too high.";};
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw() {return "Error: Grade is too low.";};
		};
};

std::ostream& operator<<(std::ostream & os, Bureaucrat const & obj);
