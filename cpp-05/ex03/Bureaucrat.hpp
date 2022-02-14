/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:09:40 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 01:42:41 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

#include "Form.hpp"
class Form;

class Bureaucrat {
private:
	std::string const	m_name;
	int					m_grade;
public:
	Bureaucrat( std::string name, int grade );
	~Bureaucrat();
	Bureaucrat( Bureaucrat const &other );
	Bureaucrat &operator=( Bureaucrat const &other );

	class GradeTooHighException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: The bureaucrat grade is too high";
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: The bureaucrat grade is too low";
			}
	};

	std::string const	getName() const;
	int					getGrade() const;

	void	upGrade();
	void	downGrade();
	void	signForm( Form& f );
	void	executeForm(Form const & form) const;
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &b );

#endif