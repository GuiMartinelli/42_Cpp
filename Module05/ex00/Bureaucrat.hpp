/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:07:49 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/24 20:39:40 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const & obj);
	~Bureaucrat();

	Bureaucrat &	operator=(Bureaucrat const & obj);

	std::string	getName() const ;
	int			getGrade() const ;

	void		increment();
	void		decrement();

	class GradeTooHighException : public std::exception {
		public:
			char const* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			char const* what() const throw();
	};
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat & obj);

#endif
