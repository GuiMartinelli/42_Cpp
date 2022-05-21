/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:16:27 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/20 21:46:34 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	std::cout << "Testing default FragTrap class" << std::endl;

	//Declaring and constructing the f1 object with default constructor
	FragTrap	f1("Mary");
	f1.attack("a bat");
	f1.takeDamage(67);
	f1.beRepaired(25);
	f1.highFivesGuys();

	std::cout << std::endl << "Testing assignment operator" << std::endl;

	//Declaring and constructing the f2 object copying from f1
	FragTrap	f2( f1 );
	f2.attack("a pidgeon");
	f2.takeDamage(25);
	f2.beRepaired(25);
	f2.highFivesGuys();

	std::cout << std::endl << "Testing copy constructor" << std::endl;

	//Declaring and constructing the f3 object and assigning f2 to it
	FragTrap	f3("Jenny");
	f3 = f1;
	f2.takeDamage(67);
	f2.attack("a random guy at street");
	f2.beRepaired(25);
	f2.highFivesGuys();

	std::cout << std::endl;
}
