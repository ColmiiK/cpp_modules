/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:58 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:59 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("null"), _signed(false), _requiredGrade(150), _executeGrade(150){}
AForm::AForm(std::string name, int required, int execute) : _name(name), _requiredGrade(required), _executeGrade(execute) {
    try {
        checkGrade(required);
        checkGrade(execute);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}
AForm::~AForm(){}
AForm::AForm(AForm const & obj) : _name(obj.getName()), _signed(obj.getSigned()), _requiredGrade(obj.getRequiredGrade()), _executeGrade(obj.getExecuteGrade()) {
    *this = obj;
}
AForm& AForm::operator=(AForm const & obj) {
    //this->_name = obj._name;
    this->_signed = obj._signed;
    //this->_requiredGrade = obj._requiredGrade;
    //this->_executeGrade = obj._executeGrade;
    return *this;
}

std::string const & AForm::getName() const {return _name;}
bool const & AForm::getSigned() const {return _signed;}
int const & AForm::getRequiredGrade() const {return _requiredGrade;}
int const & AForm::getExecuteGrade() const {return _executeGrade;}

void AForm::beSigned(Bureaucrat & obj) {
    try {
        if (obj.getGrade() <= this->getRequiredGrade()) {
            this->_signed = true;
        }
        else {
            throw AForm::GradeTooLowException();
        }
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}

void AForm::checkGrade(int grade) {
    if (grade > 150)
        throw AForm::GradeTooLowException();
    else if (grade < 1)
        throw AForm::GradeTooHighException();
}

std::ostream& operator<<(std::ostream & os, AForm const & obj) {
    os << "AForm " << obj.getName() << ", required grade to be signed is " << obj.getRequiredGrade() << ", required grade to be executed is " << obj.getExecuteGrade() << ". Signed currently? ";
    if (obj.getSigned() == 0)
        std::cout << "No";
    else 
        std::cout << "Yes";
    return os;
}

void AForm::execute(Bureaucrat const & executor) const {
    try {
        if (this->getSigned() == 0)
            throw "Form is not signed.";
        if (executor.getGrade() > this->getExecuteGrade())
            throw "Bureaucrat's grade is not high enough to execute form.";
        runForm();
        std::cout << executor.getName() << " executed " << _name << std::endl;
    }
    catch (char const* e){
        std::cout << "Exception: " << e << std::endl;
    }
}

