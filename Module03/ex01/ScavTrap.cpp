/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:10:39 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/19 21:25:36 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Default constructor called" << std::endl;

	this->setHealth(100);
	this->setEnergy(50);
	this->setAttack(20);
}

ScavTrap::ScavTrap(ScavTrap const & obj) : ClapTrap(obj) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;

	*this = obj;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & obj) {
	if (this != &obj) {
		this->setName(obj.getName());
		this->setHealth(obj.getHealth());
		this->setEnergy(obj.getEnergy());
		this->setAttack(obj.getAttack());
	}
	return *this;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " is now in the Gate Keeper mode" << std::endl;
}
