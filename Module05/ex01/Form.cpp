/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:29:52 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/24 22:01:54 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"),
				_isSigned(false),
				_gradeSign(20),
				_gradeExe(5) {
}

Form::Form(std::string name, int sign, int exe) : _name(name),
													_isSigned(false),
													_gradeSign(sign),
													_gradeExe(exe) {

}

Form::Form(Form const & obj) : _name(obj.getName()),
								_gradeSign(obj.getGradeSign()),
								_gradeExe(obj.getGradeExe()) {
	*this = obj;
}

Form::~Form() {
}

Form &	Form::operator=(Form const & obj) {
	if (this != &obj)
		this->_isSigned = obj.getIsSigned();
	return *this;
}

std::string	Form::getName() const {
	return this->_name;
}

bool		Form::getIsSigned() const {
	return _isSigned;
}

int			Form::getGradeSign() const {
	return _gradeSign;
}

int			Form::getGradeExe() const {
	return _gradeExe;
}

void	Form::beSigned(Bureaucrat const & bur) {
	if (bur.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	else
		this->_isSigned = true;
}

char const* Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}

char const* Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}


std::ostream &	operator<<(std::ostream & o, Form & f) {
	o << "Form Name: " << f.getName() << " | Is Signed: " << f.getIsSigned() \
	<< " | Grade to Sign: " << f.getGradeSign() << " | Grade to Execute: " \
	<< f.getGradeExe();

	return o;
}