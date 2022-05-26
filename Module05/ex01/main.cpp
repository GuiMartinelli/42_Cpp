/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:55:25 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/25 19:33:02 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	Bureaucrat*	b1 = new Bureaucrat("Thomas", 10);
	Form*	f1 = new Form("A55", 15, 10);
	Form*	f2 = new Form("A20", 5, 5);
	Form*	f3 = new Form("B52", 10, 8);

	std::cout << "Trying to sign a Form with higher level: " << std::endl;
	b1->signForm(*f1);

	std::cout << std::endl << "Trying to sign a Form with lower level: " << std::endl;
	b1->signForm(*f2);

	std::cout << std::endl << "Trying to sign a Form with level equal: " << std::endl;
	b1->signForm(*f3);

	delete b1;
	delete f1;
	delete f2;
	delete f3;
}
