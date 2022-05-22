/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:12:55 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 16:26:51 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"),
								ScavTrap("Default_clap_name"),
								FragTrap("Default_clap_name") {
	std::cout << "DiamondTrap default construct called" << std::endl;

	this->_name = "Default";
	this->setHealth(FragTrap::getHealth());
	this->setEnergy(ScavTrap::getEnergy());
	this->setAttack(FragTrap::getAttack());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
												ScavTrap(name + "_clap_name"),
												FragTrap(name + "_clap_name") {
	std::cout << "DiamondTrap param construct called" << std::endl;

	this->_name = name;
	this->setHealth(FragTrap::getHealth());
	this->setEnergy(ScavTrap::getEnergy());
	this->setAttack(FragTrap::getAttack());
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj) : ClapTrap(obj),
													ScavTrap(obj),
													FragTrap(obj) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;

	*this = obj;
	this->_name = obj._name;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & obj) {
	if (this != &obj) {
		this->_name = obj._name;
		ClapTrap::setName(obj._name + "_clap_trap");
		this->setHealth(obj.getHealth());
		this->setEnergy(obj.getEnergy());
		this->setAttack(obj.getAttack());
	}
	return *this;
}

void	DiamondTrap::attack(const std::string & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
	std::cout << "I am DiamondTrap " << this->_name << " and ClapTrap " << ClapTrap::getName() << std::endl;
}
