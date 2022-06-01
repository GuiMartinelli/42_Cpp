/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:26:29 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/01 18:48:51 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>

class Data
{
private:
	int			_nbr;
	std::string	_str;
public:
	Data();
	Data(int n, std::string s);
	Data(Data const & obj);
	~Data();

	Data&	operator=(Data const & obj);

	int			getNumber() const ;
	std::string	getString() const ;

	static uintptr_t	serialize(Data *ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif