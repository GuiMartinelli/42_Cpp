/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:09:19 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/09 14:53:42 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with their "
	<< this->_weapon.getType() << std::endl;
}
