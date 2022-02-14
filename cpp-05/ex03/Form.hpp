/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:08:01 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 01:38:31 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
	std::string const	m_name;
	bool				m_signed;
	int const			m_gradeSign;
	int const			m_gradeExec;
public:
	Form( std::string name, int sign, int exec );
	virtual ~Form();
	Form( Form const &other );
	Form &operator=( Form const &other );

	class GradeTooHighException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: The form grade is too high";
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: The form grade is too low";
			}
	};
	class NotSignedException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: This form is not signed yet";
			}
	};
	class ExecGradeTooHighException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: The form execution grade is too high for this bureaucrat";
			}
	};

	std::string const	getName() const;
	bool				getSigned() const;
	int					getGradeSign() const;
	int					getGradeExec() const;

	void	beSigned( Bureaucrat& b );
	virtual void	execute( Bureaucrat const& executor ) const;
};

std::ostream	&operator<<( std::ostream &o, Form const &f );

#endif