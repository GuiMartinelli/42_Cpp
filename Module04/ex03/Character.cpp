/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:26:40 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 17:34:06 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter() {
	this->name = "Default name";

	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name) : ICharacter() {
	this->name = name;

	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const & obj) : ICharacter() {
	*this = obj;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character &	Character::operator=(Character const & obj) {
	if (this != &obj) {
		this->name = obj.name;
		for (int i = 0; i < 4; i++)
			if (obj.inventory[i] != NULL)
				this->inventory[i] = obj.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m) {
	int	idx = 0;

	while (idx < 4) {
		if (this->inventory[idx])
			idx++;
		else
			break;
	}
	if (idx > 3)
		std::cout << "Invetory is full, can't equip more Materias" << std::endl;
	else {
		this->inventory[idx] = m->clone();
	}
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
		std::cout << "Wrong param! Index must be between 0 and 3" << std::endl;
	else
		delete this->inventory[idx];
}

void Character::use(int idx, ICharacter & target) {
	if (idx > 3 || idx < 0)
		std::cout << "Wrong param! Index must be between 0 and 3" << std::endl;
	else if (!this->inventory[idx])
		std::cout << this->name << " don't have any Materias equiped in this index" << std::endl;
	else
		this->inventory[idx]->use(target);
}
