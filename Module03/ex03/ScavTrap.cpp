/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:10:39 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/20 21:51:03 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScavTrap") {
	std::cout << "ScavTrap Default constructor called" << std::endl;

	this->setHealth(100);
	this->setEnergy(50);
	this->setAttack(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap param constructor called" << std::endl;

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

void	ScavTrap::attack(const std::string & target) {
	if (this->getEnergy() <= 0)
		std::cout << this->getName() <<" don't have enough energy points to attack" << std::endl;
	else if (this->getHealth() <= 0)
		std::cout << this->getName() <<" is dead and can't attack" << std::endl;
	else {
		std::cout << "ScavTrap " << this->getName() << " attacks " \
		<< target << " causing " << this->getAttack() \
		<< " points of damage!" << std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
}

void	ScavTrap::guardGate() const {
	if (this->getHealth() > 0)
		std::cout << "ScavTrap " << this->getName() << " is now in the Gate Keeper Mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is dead and can't activate Gate Keeper Mode" << std::endl;
}
