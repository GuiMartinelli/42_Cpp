/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:12:11 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/09 14:53:18 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon &type) {
	this->_weapon = &type;
}

void	HumanB::attack(void) {
	std::cout << this->_name << " attacks with their "
	<< this->_weapon->getType() << std::endl;
}
