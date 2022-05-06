/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:17:29 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/06 15:18:18 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void) {
	Zombie*	horde;

	std::cout << "Creating a Horde of 4 zombies named Rotten" << std::endl;
	horde = zombieHorde(4, "Rotten");
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	std::cout << std::endl <<  "Killing the horde" << std::endl;
	delete []	horde;

	std::cout << std::endl << "Creating a Horde of 10 zombies named Boomer" << std::endl;
	horde = zombieHorde(10, "Boomer");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	std::cout << std::endl << "Killing the horde" << std::endl;
	delete []	horde;

	std::cout << std::endl << "Creating a Horde of 50 zombies named Nemesis... Jesus Christ, just run" << std::endl;
	horde = zombieHorde(50, "Nemesis");
	for (int i = 0; i < 50; i++)
		horde[i].announce();
	std::cout << std::endl <<  "Somehow you killed them all" << std::endl;
	delete []	horde;
}
