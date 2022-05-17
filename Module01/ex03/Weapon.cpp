/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:04:04 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/11 16:08:30 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	
}

Weapon::~Weapon(void) {
	
}

const std::string&	Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string weapon) {
	this->_type = weapon;
}
