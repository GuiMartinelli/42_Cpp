/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:58:53 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/09 14:51:10 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon();

	const std::string	getType();
	void				setType(std::string weapon);
};

#endif
