/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:09:40 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/12 19:15:22 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat {
private:
	std::string const	m_name;
	int					m_grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat( Bureaucrat const &other );
	Bureaucrat &operator=( Bureaucrat const &other );

	std::string const	getName() const;
	int					getGrade() const;

	void	upGrade();
	void	downGrade();
};



#endif