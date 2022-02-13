/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:10:57 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/13 23:45:30 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : m_name(name), m_grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat( Bureaucrat const &other ) : m_name(other.m_name), m_grade(other.m_grade) { }

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &other ) {
	if ( this == &other )
		return *this;
	m_grade = other.m_grade;
	return *this;
}

std::string const	Bureaucrat::getName() const {
	return m_name;
}

int		Bureaucrat::getGrade() const {
	return m_grade;
}

void	Bureaucrat::upGrade() {
	if (m_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	m_grade--;
	std::cout << m_name << " has been up to grade " << m_grade << "." << std::endl;
}

void	Bureaucrat::downGrade() {
	if (m_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << m_name << " has been down to grade " << m_grade << "." << std::endl;
	m_grade++;
}

void	Bureaucrat::signForm( Form& f) {
	if (m_grade <= f.getGradeSign())
	{
		f.beSigned(*this);
		std::cout << m_name << " signed " << f.getName() << "." << std::endl;
	}
	else
		std::cout << m_name << " couldn't sign " << f.getName() << " because their grade is too low." << std::endl;
}

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &b ) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return o;
}