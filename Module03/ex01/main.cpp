/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:06:44 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/19 21:56:43 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	std::cout << "Testing default ScavTrap class" << std::endl;

	//Declaring and constructing the s1 object with default constructor
	ScavTrap	s1("Tim");
	s1.attack("some scary monster");
	s1.takeDamage(67);
	s1.beRepaired(25);
	s1.guardGate();

	std::cout << std::endl << "Testing assignment operator" << std::endl;

	//Declaring and constructing the s2 object copying from s1
	ScavTrap	s2( s1 );
	s2.attack("some scary monster");
	s2.takeDamage(67);
	s2.beRepaired(25);
	s2.guardGate();

	std::cout << std::endl << "Testing copy constructor" << std::endl;

	//Declaring and constructing the s3 object and assigning s2 to it
	ScavTrap	s3("Michael");
	s3 = s1;
	s2.attack("some scary monster");
	s2.takeDamage(67);
	s2.beRepaired(25);
	s2.guardGate();

	std::cout << std::endl << "Testing ClapTrap class" << std::endl;

	//Declaring and constructing the p1 object
	ClapTrap	p1("Anne");
	p1.attack("some rat");
	p1.takeDamage(7);
	p1.beRepaired(4);

	std::cout << std::endl;
}
