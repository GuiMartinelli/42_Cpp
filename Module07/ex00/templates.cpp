/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:48:28 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/02 19:35:32 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

template < typename T >
void	swap(T a, T b) {
	T	sw;

	sw = b;
	b = a;
	a = sw;
}

template < typename T >
T	min(T const a, T const b) {
	return (a < b ? a : b);
}

template < typename T >
T	max(T const a, T const b) {
	return (a > b ? a : b);
}
