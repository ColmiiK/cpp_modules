/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:41:33 by alvega-g          #+#    #+#             */
/*   Updated: 2024/08/09 11:41:34 by alvega-g         ###   ########.fr       */
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
