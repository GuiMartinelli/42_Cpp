/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:17:03 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/07 19:48:45 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {
}

Span::Span(unsigned int n) : _size(n) {
}

Span::Span(Span const & obj) : _size(obj._size) {
	*this = obj;
}

Span::~Span() {
}

Span &	Span::operator=(Span const & obj) {
	if (this != &obj) {
		for (int i = 0; (this->_content.begin() + i) < this->_content.end(); i++) {
			this->_content[i] = obj._content[i];
		}
	}
	return *this;
}

void	Span::addNumber(int n) {
	if (this->_content.size() < this->_size) {
		this->_content.push_back(n);
		return ;
	}
	throw std::exception();
}

int		Span::shortestSpan() {
	std::vector<int>			vec = this->_content;
	std::vector<int>::iterator	it;
	int							result;

	if (this->_content.size() < 2)
		throw std::exception();

	std::sort(vec.begin(), vec.end());

	it = vec.begin();
	for (; it < (vec.end() - 1); it++) {
		result = (*(it + 1) - *it < result ? *(it + 1) - *it : result);
	}
	return result;
}

int		Span::longestSpan() {
	if (this->_content.size() < 2)
		throw std::exception();
	return (*std::max_element(this->_content.begin(), this->_content.end()) -
			*std::min_element(this->_content.begin(), this->_content.end()));
}
