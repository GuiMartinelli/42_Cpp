/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:37:58 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 14:34:37 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const & obj);
	~Cure();

	Cure &	operator=(Cure const & obj);

	AMateria*	clone() const ;
	void		use(ICharacter& target) const ;
};

#endif
