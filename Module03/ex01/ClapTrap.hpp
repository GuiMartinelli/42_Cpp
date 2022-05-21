/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:18:49 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/20 20:12:28 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_healthPts;
	int			_energyPts;
	int			_attackDmg;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & obj);
	~ClapTrap();

	ClapTrap &	operator=(ClapTrap const & obj);

	std::string	getName() const ;
	int			getHealth() const ;
	int			getEnergy() const ;
	int			getAttack() const ;

	void	setName(std::string name);
	void	setHealth(int hp);
	void	setEnergy(int ep);
	void	setAttack(int att);

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
