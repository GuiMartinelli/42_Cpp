/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:19:24 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 17:06:49 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(AMateria const & obj) {
	*this = obj;
}

AMateria::~AMateria() {
}

AMateria &	AMateria::operator=(AMateria const & obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return *this;
}

std::string const &	AMateria::getType() const  {
	return this->type;
}
