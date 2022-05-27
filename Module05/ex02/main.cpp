/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:55:25 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/26 20:56:33 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void) {
	Bureaucrat*	b1 = new Bureaucrat("Number1", 150);
	Bureaucrat*	b2 = new Bureaucrat("Number2", 140);
	Bureaucrat*	b3 = new Bureaucrat("Number3", 70);
	Bureaucrat*	b4 = new Bureaucrat("Number4", 20);
	Bureaucrat*	b5 = new Bureaucrat("Number5", 2);
	AForm*	form1 = new ShrubberryCreationForm("drawn");
	AForm*	form2 = new RobotomyRequestForm("Mickey");
	AForm*	form3 = new PresidentialPardonForm("Sulley");

	//===================================================================================================//

	std::cout << "Trying to sign a Shrubbery Creation Form with too low grade:" << std::endl;
	b1->signForm(*form1);

	std::cout << std::endl << "Trying to sign a Shrubbery Creation Form with higher grade:" << std::endl;
	b2->signForm(*form1);

	std::cout << std::endl << "Trying to execute a Shrubbery Creation Form with too low grade:" << std::endl;
	b2->executeForm(*form1);

	std::cout << std::endl << "Trying to execute a Shrubbery Creation Form with higher grade:" << std::endl;
	b3->executeForm(*form1);

	//===================================================================================================//

	std::cout << std::endl << "Trying to sign a Robotomy Request Form with too low grade:" << std::endl;
	b2->signForm(*form2);

	std::cout << std::endl << "Trying to sign a Robotomy Request Form with higher grade:" << std::endl;
	b3->signForm(*form2);

	std::cout << std::endl << "Trying to execute a Robotomy Request Form with too low grade:" << std::endl;
	b3->executeForm(*form2);

	std::cout << std::endl << "Trying to execute a Robotomy Request Form with higher grade:" << std::endl;
	b4->executeForm(*form2);

	//===================================================================================================//

	std::cout << std::endl << "Trying to sign a Presidential Pardon Form with too low grade:" << std::endl;
	b3->signForm(*form3);

	std::cout << std::endl << "Trying to sign a Presidential Pardon Form with higher grade:" << std::endl;
	b4->signForm(*form3);

	std::cout << std::endl << "Trying to execute a Presidential Pardon Form with too low grade:" << std::endl;
	b4->executeForm(*form3);

	std::cout << std::endl << "Trying to execute a Presidential Pardon Form with higher grade:" << std::endl;
	b5->executeForm(*form3);

	//===================================================================================================//

	delete b1;
	delete b2;
	delete b3;
	delete b4;
	delete b5;
	delete form1;
	delete form2;
	delete form3;
}
