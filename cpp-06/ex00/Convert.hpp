/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:07:01 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/15 19:19:14 by eassouli         ###   ########.fr       */
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
	
	bool	m_isChar;
	bool	m_isInt;
	bool	m_isFloat;
	bool	m_isDouble;
	bool	m_isEmpty;

	char	m_nChar;
	int		m_nInt;
	float	m_nFloat;
	double	m_nDouble;

	void	m_setType();
	void	m_setChar( char& nb, std::string s );
	void	m_setInt( int& nb, std::string s );
	void	m_setFloat( float& nb, std::string s );
	void	m_setDouble( double& nb, std::string s );

	void	m_printChar( double nb );
	void	m_printInt( double nb );
	void	m_printFloat( double nb );
	void	m_printDouble( double nb );
public:
	Convert( std::string arg );
	~Convert();
	Convert( Convert const &other );
	Convert &operator=( Convert const &other );

	void	printConvert();
};

#endif