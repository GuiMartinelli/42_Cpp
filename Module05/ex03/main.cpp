/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:55:25 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/26 21:13:25 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int	main(void) {
	Bureaucrat*	bur = new Bureaucrat("Arthur", 1);
	Intern*	intern = new Intern();
	AForm*	form;

	std::cout << "Making a Shrubbery Creation form:" << std::endl;
	form = intern->makeForm("SHRUBBERY CREATION", "drawn");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;
	
	form = intern->makeForm("shrubbery creation", "drawn");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	form = intern->makeForm("SHrubbeRY CreATion", "drawn");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	//===================================================================================================//

	std::cout << std::endl << "Making a Robotomy Request form:" << std::endl;
	form = intern->makeForm("robotomy request", "Bianca");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	form = intern->makeForm("ROBOTOMY REQUEST", "Bianca");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	form = intern->makeForm("ROBotOMy REQuesT", "Bianca");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	//===================================================================================================//

	std::cout << std::endl << "Making a Presidential Pardon form:" << std::endl;
	form = intern->makeForm("Presidential Pardon", "Chronno");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	form = intern->makeForm("PRESIDENTIAL PARDON", "Chronno");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	form = intern->makeForm("PREsideNTIal PaRdOn", "Chronno");
	bur->signForm(*form);
	delete form;
	std::cout << std::endl;

	//===================================================================================================//

	std::cout << std::endl << "Trying to make invalid forms:" << std::endl;
	intern->makeForm("BSJDFVA", "Jerry");

	//===================================================================================================//

	delete intern;
	delete bur;
}
