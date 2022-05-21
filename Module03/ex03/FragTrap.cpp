/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:09:14 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/20 21:47:12 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFragTrap"){
	std::cout << "FragTrap Default constructor called" << std::endl;

	this->setHealth(100);
	this->setEnergy(100);
	this->setAttack(30);
}


FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap param constructor called" << std::endl;

	this->setHealth(100);
	this->setEnergy(100);
	this->setAttack(30);
}

FragTrap::FragTrap(FragTrap const & obj) : ClapTrap(obj) {
	std::cout << "FragTrap Copy constructor called" << std::endl;

	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & obj) {
	if (this != &obj) {
		this->setName(obj.getName());
		this->setHealth(obj.getHealth());
		this->setEnergy(obj.getEnergy());
		this->setAttack(obj.getAttack());
	}
	return *this;
}

void	FragTrap::highFivesGuys() const {
	if (this->getHealth() > 0)
		std::cout << "FragTrap " << this->getName() << " requested high five!" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is dead and can't request high five" << std::endl;
}
