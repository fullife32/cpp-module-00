/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:07:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 16:22:44 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() { }

Intern::~Intern() { }

Intern::Intern( Intern const &other ) {
	*this = other;
}

Intern &Intern::operator=( Intern const &other ) {
	if ( this == &other )
		return *this;
	std::cout << "Nothing to copy" << std::endl;
	return *this;
}

const	Intern::s_formPair Intern::m_forms[3] = {
	{"shrubbery creation", &Intern::m_shrubbery},
	{"robotomy request", &Intern::m_robotomy},
	{"presidential pardon", &Intern::m_presidential}
};

Form*	Intern::makeForm( std::string form, std::string target ) const {
	for (int i = 0; i < 3; i++) {
		if (this->m_forms[i].formName.compare(form) == 0) {
			std::cout << "Intern creates " << form << std::endl;
			return (this->m_forms[i].callback(target));
		}
	}
	throw Intern::NoFormFound();
	return 0;
}

Form*	Intern::m_shrubbery( std::string target ) {
	return new ShrubberyCreationForm(target);
}

Form*	Intern::m_robotomy( std::string target ) {
	return new RobotomyRequestForm(target);
}

Form*	Intern::m_presidential( std::string target ) {
	return new PresidentialPardonForm(target);
}
