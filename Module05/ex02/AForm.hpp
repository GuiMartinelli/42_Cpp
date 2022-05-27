/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:00:18 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/25 20:15:14 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeSign;
	int const			_gradeExe;
public:
	AForm();
	AForm(std::string name, int sign, int exe);
	AForm(AForm const & obj);
	virtual ~AForm();

	AForm &	operator=(AForm const & obj);

	std::string	getName() const ;
	bool		getIsSigned() const ;
	int			getGradeSign() const ;
	int			getGradeExe() const ;

	void	setSign(bool b);

	virtual void	beSigned(Bureaucrat const & bur) = 0;
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception {
		public:
			char const* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			char const* what() const throw();
	};
};

std::ostream &	operator<<(std::ostream & o, AForm & f);

#endif