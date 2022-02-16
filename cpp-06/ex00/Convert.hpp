/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:07:01 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/16 16:14:03 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <limits>
#include <cstdlib>

class Convert {
private:
	std::string m_arg;
	
	bool	m_isChar;
	bool	m_isInt;
	bool	m_isFloat;
	bool	m_isDouble;
	bool	m_isEmpty;

	char	m_nChar;
	double	m_nDouble;

	void	m_setType();
	void	m_setChar( std::string s );
	void	m_setInt( std::string s );
	void	m_setFloat( std::string s );
	void	m_setDouble( std::string s );

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