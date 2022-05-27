/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:42:27 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/25 21:35:16 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberryCreationForm : public AForm
{
private:
	std::string	_target;
public:
	ShrubberryCreationForm();
	ShrubberryCreationForm(std::string target);
	ShrubberryCreationForm(ShrubberryCreationForm const & obj);
	virtual ~ShrubberryCreationForm();

	ShrubberryCreationForm &	operator=(ShrubberryCreationForm const & obj);

	std::string	getTarget() const ;

	void	beSigned(Bureaucrat const & bur);
	void	execute(Bureaucrat const & executor) const;
};

#endif