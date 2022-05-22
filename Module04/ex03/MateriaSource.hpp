/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:55:43 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 15:43:26 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*inventory[4];
public:
	MateriaSource();
	MateriaSource(AMateria const & obj);
	~MateriaSource();

	MateriaSource &	operator=(MateriaSource const & obj);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif