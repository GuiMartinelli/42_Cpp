/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:06:38 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/26 21:00:30 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = "Nobody";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExe()) {
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & obj) {
	if (this != &obj) {
		this->setSign(obj.getIsSigned());
		this->_target = obj.getTarget();
	}
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const  {
	return this->_target;
}

void	RobotomyRequestForm::beSigned(Bureaucrat const & bur) {
	if (bur.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	else
		this->setSign(true);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const  {
	if (executor.getGrade() > this->getGradeExe())
		throw GradeTooLowException();
	else {
		std::cout << "**** DRILLING NOISES ****" << std::endl;
		if (rand() % 100 > 50)
			std::cout << this->_target << " has been successfully robotomized!!" << std::endl;
		else
			std::cout << "Robotomization failed =(" << std::endl;
	}
}
