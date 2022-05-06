/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:17:29 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/06 14:51:11 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	//Declaring and instance a Zombie object
	Zombie	nemesis("Nemesis");
	nemesis.announce();

	//Declaring a pointer to a Zombie object and constructing with NEW keyword inside newZombie function
	Zombie*	x;

	x = newZombie("Mr.X");
	x->announce();
	delete	x;

	//Calling randomChump function that instances a new Zombie and call announce method
	randomChump("T-078");
}
