/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:25:37 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/03 19:01:02 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template< typename T >
class Array
{
private:
	T*				_elements;
	unsigned int	_size;
public:
	Array<T>() {
		this->_elements = new T[0];
		this->_size = 0;
	}

	Array<T>(unsigned int n) {
		this->_elements = new T[n];
		this->_size = n;
	}
	
	Array<T>(Array const & obj) {
		*this = obj;
	}
	
	~Array<T>() {
		delete [] this->_elements;
	}
	
	Array &	operator=(Array const & obj) {
		if (this != &obj) {
			for (unsigned int i = 0; i < obj._size; i++) {
				try {
					this->_elements[i] = obj._elements[i];
				} catch (std::exception& e) {
					break ;
				}
			}
		}
		return *this;
	}

	T&	operator[](unsigned int const index) {
		if (index >= this->_size)
			throw std::exception();
		return this->_elements[index];
	}

	const T&	operator[](unsigned int const index) const {
		if (index >= this->_size)
			throw std::exception();
		return this->_elements[index];
	}

	unsigned int	size() const {
		return this->_size;
	}
};

#endif