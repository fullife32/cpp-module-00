/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:07:46 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/13 23:49:39 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string name, int gradeSign, int gradeExec ) : m_name(name), m_signed(false), m_gradeSign(gradeSign), m_gradeExec(gradeExec) {
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() { }

Form::Form( Form const &other ) : m_name(other.m_name), m_signed(other.m_signed), m_gradeSign(other.m_gradeSign), m_gradeExec(other.m_gradeExec) { }

Form &Form::operator=( Form const &other ) {
	if ( this == &other )
		return *this;
	m_signed = other.m_signed;
	return *this;
}

std::string const	Form::getName() const {
	return m_name;
}

bool	Form::getSigned() const {
	return m_signed;
}

int	Form::getGradeSign() const {
	return m_gradeSign;
}

int	Form::getGradeExec() const {
	return m_gradeExec;
}

void	Form::beSigned( Bureaucrat& b ) {
	if (b.getGrade() <= m_gradeSign) {
		m_signed = true;
	}
	else
		throw Form::GradeTooHighException();
}

std::ostream	&operator<<( std::ostream &o, Form const &f ) {
	o << f.getName() << ", form grade to sign " << f.getGradeSign() << ", form grade to execute " << f.getGradeExec() << ", form is signed: " << f.getSigned() << ".";
	return o;
}