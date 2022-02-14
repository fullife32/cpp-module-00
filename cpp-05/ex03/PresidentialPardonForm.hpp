/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:11:24 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 00:33:17 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"
class Form;

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm( std::string const target );
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm( PresidentialPardonForm const &other );
	PresidentialPardonForm &operator=( PresidentialPardonForm const &other );

	void	execute( Bureaucrat const & executor ) const;
};

#endif