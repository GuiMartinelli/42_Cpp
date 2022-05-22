/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:26:27 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/22 17:28:47 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTERE_HPP
#define CHARACTERE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[4];
public:
	Character();
	Character(std::string name);
	Character(Character const & obj);
	~Character();

	Character &	operator=(Character const & obj);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);
};

#endif
