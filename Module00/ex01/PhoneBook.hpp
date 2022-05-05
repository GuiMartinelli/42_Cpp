/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:04:11 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/02 17:23:23 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook {
	public:

	Phonebook();
	~Phonebook();

	void	newContact();
	void	searchContact();

	private:

	Contact	_contacs[8];
	int		index;
};

# endif