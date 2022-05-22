/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:32:23 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 15:51:43 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(AMateria const & obj) {
	*this = obj;

	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & obj) {
	if (this != &obj)
		*this = obj;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	int	idx = 0;

	while (this->inventory[idx] != NULL)
		idx++;
	this->inventory[idx] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	else
		return 0;
}
