/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:41:52 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/24 21:29:18 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat") {
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj) : _name(obj.getName()){
	*this = obj;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & obj) {
	if (this != &obj) {
		this->_grade = obj.getGrade();
	}
	return *this;
}

std::string	Bureaucrat::getName() const  {
	return this->_name;
}

int	Bureaucrat::getGrade() const  {
	return this->_grade;
}

void	Bureaucrat::increment() {
	if (this->_grade < 2)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrement() {
	if (this->_grade > 149)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form & f) const {
	try {
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << this->_name << " coudn't sign " << f.getName() \
		<< " because " << e.what() << std::endl;
	}
}

char const*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}

char const*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat & obj) {
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();

	return o;
}
