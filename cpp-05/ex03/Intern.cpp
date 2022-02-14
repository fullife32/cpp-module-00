/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:07:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 02:42:54 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	forms[0] = (m_formPair){"shrubbery creation", &ShrubberyCreationForm};
	forms[1] = (m_formPair){"robotomy request", &RobotomyRequestForm};
	forms[2] = (m_formPair){"presidential pardon", &PresidentialPardonForm};
}

Intern::~Intern() { }

Intern::Intern( Intern const &other ) {
	std::cout << "Nothing to copy" << std::endl;
}

Intern &Intern::operator=( Intern const &other ) {
	if ( this == &other )
		return *this;
	std::cout << "Nothing to assign" << std::endl;
	return *this;
}

Form*	Intern::makeForm( std::string form, std::string target ) const {
	for (int i = 0; i < 3; i++) {
		if (this->forms[i].formName.compare(form) == 0) {
			std::cout << "Intern creates " << form << std::endl;
			return new (this->*forms[i].callClass)(target);
		}
	}
	std::cout << form << ": This form doesn't exist!" << std::endl;
	return 0;
}