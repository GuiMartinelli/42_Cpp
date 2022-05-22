/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:24:39 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 14:34:50 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const & obj);
	~Ice();

	Ice &	operator=(Ice const & obj);

	AMateria*	clone() const ;
	void		use(ICharacter& target) const ;
};

#endif
