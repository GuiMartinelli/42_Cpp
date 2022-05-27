/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:08:25 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/25 20:44:33 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = "Nobody";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExe()) {
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & obj) {
	if (this != &obj) {
		this->setSign(obj.getIsSigned());
		this->_target = obj.getTarget();
	}
	return *this;
}

std::string	PresidentialPardonForm::getTarget() const  {
	return this->_target;
}

void	PresidentialPardonForm::beSigned(Bureaucrat const & bur) {
	if (bur.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	else
		this->setSign(true);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getGradeExe())
		throw GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
