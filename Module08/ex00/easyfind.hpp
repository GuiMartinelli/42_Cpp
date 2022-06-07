/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:04:07 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/06 19:08:26 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T, typename U>
typename T::iterator	easyfind(T& container, U element) {
	typename T::iterator	occ;

	occ = std::find(container.begin(), container.end(), element);
	if (occ == container.end())
		throw std::exception();
	return occ;
}

#endif
