/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:09:40 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/13 21:54:15 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

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
				return "Error: The grade is too high";
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: The grade is too low";
			}
	};

	std::string const	getName() const;
	int					getGrade() const;

	void	upGrade();
	void	downGrade();
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &b );

#endif