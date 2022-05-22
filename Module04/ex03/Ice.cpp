/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:24:37 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 15:54:17 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria() {
	this->type = "ice";
}

Ice::Ice(Ice const & obj) : AMateria() {
	*this = obj;
}

Ice::~Ice() {
}

Ice &	Ice::operator=(Ice const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return *this;
}

AMateria*	Ice::clone() const  {
	return new Ice();
}

void	Ice::use(ICharacter& target) const  {
	std::cout << "* shoots and ice bolt at " << target.getName() << " *" << std::endl;
}
