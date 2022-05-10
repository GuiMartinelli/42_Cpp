/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:12:49 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/09 14:53:24 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {

private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon &type);
	void	attack();
};

#endif
