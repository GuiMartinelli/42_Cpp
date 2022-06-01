/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:26:18 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/01 18:52:16 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _nbr(42), _str("Hello World") {
}

Data::Data(int n, std::string s) : _nbr(n), _str(s) {
}

Data::Data(Data const & obj) {
	*this = obj;
}

Data::~Data() {
}

Data&	Data::operator=(Data const & obj) {
	if (this != &obj) {
		this->_nbr = obj.getNumber();
		this->_str = obj.getString();
	}

	return *this;
}

int			Data::getNumber() const  {
	return _nbr;
}

std::string	Data::getString() const  {
	return _str;
}

uintptr_t	Data::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*				Data::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
