/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:42:31 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:42:32 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("null"), _grade(150){}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    try {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade = grade;
	}
    catch (std::exception & e) {
            std::cout << e.what() << std::endl;
			this->_grade = 150;
        }
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(Bureaucrat const & obj){
    *this = obj;
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const & obj){
    //this->_name = obj._name;
    this->_grade = obj._grade;
    return *this;
}
std::ostream& operator<<(std::ostream & os, Bureaucrat const & obj) {
    os << "Bureaucrat " << obj.getName() << ", current grade is " << obj.getGrade();
    return os;
}
std::string const & Bureaucrat::getName() const {return _name;}
int const & Bureaucrat::getGrade() const {return _grade;}

void Bureaucrat::signAForm(AForm & obj) {
    obj.beSigned(*this);
    if (obj.getSigned() == true)
        std::cout << _name << " signed " << obj.getName() << std::endl;
    else 
        std::cout << _name << " couldn't sign " << obj.getName() << " because grade was too low." << std::endl;
}

void Bureaucrat::executeForm(AForm const & form) const {
    form.execute(*this);
}

void Bureaucrat::incrementGrade(){
    try {
        if (_grade == 1)
            throw Bureaucrat::GradeTooHighException();
		_grade--;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}
void Bureaucrat::decrementGrade(){
    try {
        if (_grade == 150)
            throw Bureaucrat::GradeTooLowException();
		_grade++;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}
