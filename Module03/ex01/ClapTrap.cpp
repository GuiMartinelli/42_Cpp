/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:25:00 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/19 20:34:45 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap Default constructor called" << std::endl;

	this->_name = name;
	this->_healthPts = 10;
	this->_energyPts = 10;
	this->_attackDmg = 0;
}

ClapTrap::ClapTrap(ClapTrap const & obj) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;

	*this = obj;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & obj) {
	std::cout << "Copy assigment operator called" << std::endl;

	if (this != &obj) {
		this->_name = obj.getName();
		this->_healthPts = obj.getHealth();
		this->_energyPts = obj.getEnergy();
		this->_attackDmg = obj.getAttack();
	}
	return *this;
}

std::string	ClapTrap::getName() const {
	return this->_name;
}

int			ClapTrap::getHealth() const {
	return this->_healthPts;
}

int			ClapTrap::getEnergy() const {
	return this->_energyPts;
}

int			ClapTrap::getAttack() const {
	return this->_attackDmg;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHealth(int hp) {
	this->_healthPts = hp;
}

void	ClapTrap::setEnergy(int ep) {
	this->_energyPts = ep;
}

void	ClapTrap::setAttack(int att) {
	this->_attackDmg = att;
}

void	ClapTrap::attack(const std::string & target) {
	if (this->_energyPts > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " \
		<< target << " causing " << this->_attackDmg \
		<< " points of damage!" << std::endl;
		this->_energyPts--;
	} else
		std::cout << this->_name <<" don't have enough energy points to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " has taken " \
	<< amount << " points of damage... Ouch" << std::endl;

	this->_healthPts -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
		if (this->_energyPts > 0) {
		std::cout << "ClapTrap " << this->_name << " auto repair in " \
		<< amount << " health points" << std::endl;
		this->_energyPts--;
		this->_healthPts += amount;
	} else
		std::cout << this->_name <<" don't have enough energy points to auto repair" << std::endl;
}
