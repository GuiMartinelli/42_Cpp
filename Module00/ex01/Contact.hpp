/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:17:45 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/03 18:43:22 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact {
	public :

	Contact();
	~Contact();

	void		printContact(int index);
	void		printExtededContact(int index);

	void		setFstName();
	void		setLstName();
	void		setNickname();
	void		setPhone();
	void		setSecret();

	private:

	std::string	_fstName;
	std::string	_lstName;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
};

# endif