/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:09:14 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/19 21:28:07 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap Default constructor called" << std::endl;

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

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << " requested high five!" << std::endl;
}
