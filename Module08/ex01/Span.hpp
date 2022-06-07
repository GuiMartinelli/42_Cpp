/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:28:56 by guferrei          #+#    #+#             */
/*   Updated: 2022/06/07 19:37:34 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>

class Span
{
private:
	std::vector<int>	_content;
	unsigned int const	_size;
public:
	Span();
	Span(unsigned int n);
	Span(Span const & obj);
	~Span();

	Span &	operator=(Span const & obj);

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
};

#endif