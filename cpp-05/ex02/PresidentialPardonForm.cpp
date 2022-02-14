/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:27:59 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 01:41:12 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) : Form(target, 25, 5) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other ) : Form(other) { }

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const &other ) {
	if ( this == &other )
		return *this;
	std::cout << "You can't assign this concrete class" << std::endl;
	return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	Form::execute(executor);
	
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}