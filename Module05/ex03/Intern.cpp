/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:04:11 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/26 20:41:12 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

	this->formOpt[0] = "shrubbery creation";
	this->formOpt[1] = "robotomy request";
	this->formOpt[2] = "presidential pardon";
}

Intern::Intern(Intern const & obj) {
	*this = obj;
}

Intern::~Intern() {
}

Intern &	Intern::operator=(Intern const & obj) {
	if (this != &obj) {
		*this = obj;
	}
	return *this;
}

AForm*	Intern::makeForm(std::string formName, std::string target) {
	AForm*	form;
	int		i = 0;

	for(int i = 0; i < (int)formName.size(); i++) {
		formName[i] = std::tolower(formName[i]);
	}

	while (i < 3 && formName != this->formOpt[i])
		i++;

	switch (i) {
	case 0: {
		form = new ShrubberryCreationForm(target);
		std::cout << "Intern creates " << formName << std::endl;
		return form;
	}
	case 1: {
		form = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << formName << std::endl;
		return form;
	}
	case 2: {
		form = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << formName << std::endl;
		return form;
	}
	default:
		std::cout << "Sorry sir, I couldn't create this form because it doesn't exists" << std::endl;
		return NULL;
	}
}
