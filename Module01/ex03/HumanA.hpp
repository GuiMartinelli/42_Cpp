/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:06:58 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/09 14:52:13 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack();
};

#endif
