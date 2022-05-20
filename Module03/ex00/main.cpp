/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:06:44 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/19 21:50:24 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	std::cout << "Testing with default constructor" << std::endl;

	//Declaring and constructing the p1 object
	ClapTrap	p1("Bob");
	p1.attack("a cat");
	p1.takeDamage(5);
	p1.beRepaired(5);

	std::cout << std::endl << "Testing with copy construcor" << std::endl;

	//Declaring and constructing the p2 object copying from p1
	ClapTrap	p2( p1 );
	p2.attack("a monster");
	p2.takeDamage(8);
	p2.beRepaired(2);

	std::cout << std::endl << "Testing with assignment operator and getting without energy points" << std::endl;
	
	//Declaring and constructing the p3 object and assigning p2 to it
	ClapTrap	p3("Oliver");
	p3 = p2;

	//For loop to spend all energy points
	for (int i = 0; i < 6 ; i++) {
		p3.attack("a tree");
	}
	p3.attack("a tree");
	p3.beRepaired(1);

	std::cout << std::endl;
}
