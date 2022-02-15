/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:07:01 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/15 16:12:37 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <limits>

class Convert {
private:
	std::string m_arg;
	std::string	m_type;
	double		m_nb;

	void	m_printChar( double nb );
	void	m_printInt( double nb );
	void	m_printFloat( double nb );
	void	m_printDouble( double nb );

	void	m_setType();
	void	m_setNb();
public:
	Convert( std::string arg );
	~Convert();
	Convert( Convert const &other );
	Convert &operator=( Convert const &other );

	void	printConvert();
};

#endif