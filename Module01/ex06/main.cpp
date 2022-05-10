/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:09:16 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/10 17:32:17 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;

	if (argc != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
}
