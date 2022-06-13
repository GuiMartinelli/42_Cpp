/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:25:01 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/08 20:16:19 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack< T, Container >
{
public:
	MutantStack() : std::stack< T, Container>() {};
	MutantStack(MutantStack const & obj) : std::stack< T, Container>(obj) {};
	~MutantStack() {};

	MutantStack&	operator=(MutantStack const & obj) {
		std::stack< T, Container>::operator=(obj);
		return *this;
	}

	typedef typename	Container::iterator	iterator;

	typename Container::iterator	begin() {
		return this->c.begin();
	}

	typename Container::iterator	end() {
		return this->c.end();
	}
};

#endif