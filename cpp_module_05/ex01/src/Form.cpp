/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:47 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:48 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("null"), _signed(false), _requiredGrade(150), _executeGrade(150){}
Form::Form(std::string name, int required, int execute) : _name(name), _requiredGrade(required), _executeGrade(execute) {
    try {
        checkGrade(required);
        checkGrade(execute);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}
Form::~Form(){}
Form::Form(Form const & obj) : _name(obj.getName()), _signed(obj.getSigned()), _requiredGrade(obj.getRequiredGrade()), _executeGrade(obj.getExecuteGrade()) {
    *this = obj;
}
Form& Form::operator=(Form const & obj) {
    //this->_name = obj._name;
    this->_signed = obj._signed;
    //this->_requiredGrade = obj._requiredGrade;
    //this->_executeGrade = obj._executeGrade;
    return *this;
}

std::string const & Form::getName() const {return _name;}
bool const & Form::getSigned() const {return _signed;}
int const & Form::getRequiredGrade() const {return _requiredGrade;}
int const & Form::getExecuteGrade() const {return _executeGrade;}

void Form::beSigned(Bureaucrat & obj) {
    try {
        if (obj.getGrade() <= this->getRequiredGrade()) {
            this->_signed = true;
        }
        else {
            throw Form::GradeTooLowException();
        }
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}

void Form::checkGrade(int grade) {
    if (grade > 150)
        throw Form::GradeTooLowException();
    else if (grade < 1)
        throw Form::GradeTooHighException();
}


std::ostream& operator<<(std::ostream & os, Form const & obj) {
    os << "Form " << obj.getName() << ", required grade to be signed is " << obj.getRequiredGrade() << ", required grade to be executed is " << obj.getExecuteGrade() << ". Signed currently? ";
    if (obj.getSigned() == 0)
        std::cout << "No";
    else 
        std::cout << "Yes";
    return os;
}
