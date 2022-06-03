/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:03:51 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/02 20:44:38 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T* array, int lenght, void (*ft)(T&)) {
	for (int i = 0; i < lenght; i++)
		ft(array[i]);
}

#endif