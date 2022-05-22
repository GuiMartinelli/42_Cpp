/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:13:47 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 14:32:06 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string	type;
public:
	AMateria();
	AMateria(AMateria const & obj);
	virtual ~AMateria();

	AMateria &	operator=(AMateria const & obj);

	std::string const &	getType() const ;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter & target) const = 0;
};

#endif
