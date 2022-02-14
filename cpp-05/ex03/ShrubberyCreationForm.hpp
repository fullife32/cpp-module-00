/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:10:13 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 00:39:02 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include <fstream>
#include "Form.hpp"
class Form;

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm( std::string const target );
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm( ShrubberyCreationForm const &other );
	ShrubberyCreationForm &operator=( ShrubberyCreationForm const &other );

	void	execute( Bureaucrat const & executor ) const;
};

#endif