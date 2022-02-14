/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:25:23 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/14 01:40:20 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) : Form(target, 145, 137) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other ) : Form(other) { }

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other ) {
	if ( this == &other )
		return *this;
	std::cout << "You can't assign this concrete class" << std::endl;
	return *this;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
	Form::execute(executor);
	std::ofstream	ofs((this->getName() + "_shrubbery").c_str());

	ofs << "               ,@@@@@@@," << std::endl;
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	ofs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	ofs << "       |o|        | |         | |" << std::endl;
	ofs << "       |.|        | |         | |" << std::endl;
	ofs << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;

	ofs.close();
	std::cout << this->getName() + "_shrubbery" << " successfully created!" << std::endl;
}