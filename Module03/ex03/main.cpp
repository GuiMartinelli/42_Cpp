/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:16:27 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/20 19:52:20 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {

	std::cout << "================================" << std::endl << std::endl;
	DiamondTrap	d1("Giga");
	d1.attack("a pig");
	d1.guardGate();
	d1.highFivesGuys();
	d1.whoAmI();

	std::cout << std::endl << "================================" << std::endl << std::endl;
	DiamondTrap d2( d1 );
	d2.attack("a pig");
	d2.guardGate();
	d2.highFivesGuys();
	d2.whoAmI();

	std::cout << std::endl << "================================" << std::endl << std::endl;
	DiamondTrap	d3("Test");
	d3 = d2;
	d3.attack("a pig");
	d3.guardGate();
	d3.highFivesGuys();
	d3.whoAmI();

	std::cout << std::endl << "================================" << std::endl;
}
