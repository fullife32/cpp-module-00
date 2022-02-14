/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:08:14 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 01:41:05 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) : Form(target, 72, 45) { }

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other ) : Form(other) { }

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &other ) {
	if ( this == &other )
		return *this;
	std::cout << "You can't assign this concrete class" << std::endl;
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	Form::execute(executor);
	
	int num;

	std::srand(std::time(0) + std::rand() % 1000);
	num = std::rand() % 2;
	if (num == 0)
		std::cout << "BZZZZZZZZZ!!! " << this->getName() << " has successfully been robotomized!" << std::endl;
	else
		std::cout << "The robotomization failed..." << std::endl;
}