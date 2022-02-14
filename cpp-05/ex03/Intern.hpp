/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:00:07 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 02:35:10 by eassouli         ###   ########.fr       */
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
	typedef Form (Intern::*t_callClass)();
	struct m_formPair
	{
		std::string	formName;
		t_callClass	callClass;
	};

	m_formPair	forms[3];
public:
	Intern();
	~Intern();
	Intern( Intern const &other );
	Intern &operator=( Intern const &other );

	Form*	makeForm( std::string form, std::string target ) const;
};

#endif