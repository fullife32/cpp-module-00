/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:11:04 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 01:08:07 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include <cstdlib>
#include "Form.hpp"
class Form;

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm( std::string const target );
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm( RobotomyRequestForm const &other );
	RobotomyRequestForm &operator=( RobotomyRequestForm const &other );

	void	execute( Bureaucrat const & executor ) const;
};

#endif