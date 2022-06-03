/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:51:33 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/02 19:53:36 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template < typename T >
void	swap(T & a, T & b) {
	T	sw;

	sw = b;
	b = a;
	a = sw;
}

template < typename T >
T const &	min(T const & a, T const & b) {
	return (a < b ? a : b);
}

template < typename T >
T const &	max(T const & a, T const & b) {
	return (a > b ? a : b);
}

#endif
