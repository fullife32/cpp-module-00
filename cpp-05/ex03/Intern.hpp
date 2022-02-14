/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:00:07 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 16:28:21 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	struct s_formPair
	{
		std::string	formName;
		Form*		(*callback)(std::string target);
	};
	static const	s_formPair	m_forms[3];
	static Form*	m_shrubbery( std::string target );
	static Form*	m_robotomy( std::string target );
	static Form*	m_presidential( std::string target );
public:
	Intern();
	~Intern();
	Intern( Intern const &other );
	Intern &operator=( Intern const &other );

	class NoFormFound : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return "Error: The form you have chosen does not match any existing form.";
			}
	};

	Form*	makeForm( std::string form, std::string target ) const;
};

#endif