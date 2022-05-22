/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:38:32 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 17:03:30 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() {
	this->type = "cure";
}

Cure::Cure(Cure const & obj) : AMateria() {
	*this = obj;
}

Cure::~Cure() {
}

Cure &	Cure::operator=(Cure const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return *this;
}

AMateria*	Cure::clone() const  {
	return new Cure();
}

void	Cure::use(ICharacter& target) const  {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
