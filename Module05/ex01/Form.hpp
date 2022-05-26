/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:00:18 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/24 22:01:47 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeSign;
	int const			_gradeExe;
public:
	Form();
	Form(std::string name, int sign, int exe);
	Form(Form const & obj);
	~Form();

	Form &	operator=(Form const & obj);

	std::string	getName() const ;
	bool		getIsSigned() const ;
	int			getGradeSign() const ;
	int			getGradeExe() const ;

	void	beSigned(Bureaucrat const & bur);

	class GradeTooHighException : public std::exception {
		public:
			char const* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			char const* what() const throw();
	};
};

std::ostream &	operator<<(std::ostream & o, Form & f);

#endif