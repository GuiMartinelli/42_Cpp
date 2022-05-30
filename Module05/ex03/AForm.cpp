/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:29:52 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/30 19:02:47 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"),
				_isSigned(false),
				_gradeSign(20),
				_gradeExe(5) {
}

AForm::AForm(std::string name, int sign, int exe) : _name(name),
													_isSigned(false),
													_gradeSign(sign),
													_gradeExe(exe) {

}

AForm::AForm(AForm const & obj) : _name(obj.getName()),
								_gradeSign(obj.getGradeSign()),
								_gradeExe(obj.getGradeExe()) {
	*this = obj;
}

AForm::~AForm() {
}

AForm &	AForm::operator=(AForm const & obj) {
	if (this != &obj)
		this->_isSigned = obj.getIsSigned();
	return *this;
}

std::string	AForm::getName() const {
	return this->_name;
}

bool		AForm::getIsSigned() const {
	return _isSigned;
}

int			AForm::getGradeSign() const {
	return _gradeSign;
}

int			AForm::getGradeExe() const {
	return _gradeExe;
}

void	AForm::setSign(bool b) {
	this->_isSigned = b;
}


char const* AForm::GradeTooHighException::what() const throw() {
	return ("Grade Too High");
}

char const* AForm::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}


std::ostream &	operator<<(std::ostream & o, AForm & f) {
	o << "AForm Name: " << f.getName() << " | Is Signed: " << f.getIsSigned() \
	<< " | Grade to Sign: " << f.getGradeSign() << " | Grade to Execute: " \
	<< f.getGradeExe();

	return o;
}
