/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:09:04 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/16 16:23:05 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( std::string arg ) : m_arg(arg) {
	m_isChar = false;
	m_isInt = false;
	m_isFloat = false;
	m_isDouble = false;
	m_isEmpty = false;
	m_nChar = 0;
	m_nDouble = 0;
	m_setType();
}

Convert::~Convert() { }

Convert::Convert( Convert const &other ) {
	*this = other;
}

Convert &Convert::operator=( Convert const &other ) {
	if ( this == &other )
		return *this;
	m_arg = other.m_arg;
	m_isChar = other.m_isChar;
	m_isInt = other.m_isInt;
	m_isFloat = other.m_isFloat;
	m_isDouble = other.m_isDouble;
	m_isEmpty = other.m_isEmpty;
	m_nChar = other.m_nChar;
	m_nDouble = other.m_nDouble;
	return *this;
}

void	Convert::m_setType() {
	m_setChar(m_arg);
	m_setInt(m_arg);
	m_setFloat(m_arg);
	m_setDouble(m_arg);
}

void	Convert::m_setChar( std::string s ) {
	if (s.size() == 1 && !isdigit(s.at(0))) {
		m_nChar = s.at(0);
		m_isChar = true;
	}
	else if (s.size() == 0)
		m_isEmpty = true;
}

void	Convert::m_setInt( std::string s ) {
	char*		pEnd;
	long int	tmp;

	tmp = std::strtol(s.c_str(), &pEnd, 10);
	if (*pEnd == '\0'
		&& tmp >= std::numeric_limits<int>::min()
		&& tmp <= std::numeric_limits<int>::max()) {
		m_isInt = true;
	}
}

void	Convert::m_setFloat( std::string s ) {
	char*	pEnd;
	double	tmp;

	tmp = std::strtof(s.c_str(), &pEnd);
	if (*pEnd == 'f' && std::strlen(pEnd) == 1)
		m_isFloat = true;
}

void	Convert::m_setDouble( std::string s ) {
	char*	pEnd;

	m_nDouble = std::strtod(s.c_str(), &pEnd);
	if (*pEnd == '\0' && m_isChar == false && m_isInt == false)
		m_isDouble = true;
	else if (m_isChar == false && m_isInt == false
		  && m_isFloat == false && m_isDouble == false)
		m_isEmpty = true;
}


void	Convert::m_printChar( double nb ) {
	std::cout << "char: ";
	if (m_isEmpty == false
		&& nb >= std::numeric_limits<char>::min()
		&& nb <= std::numeric_limits<char>::max()) {
		if (isprint(nb))
			std::cout << static_cast<char>(nb) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::m_printInt( double nb ) {
	std::cout << "int: ";
	if (m_isEmpty == false
		&& nb >= std::numeric_limits<int>::min()
		&& nb <= std::numeric_limits<int>::max())
		std::cout << static_cast<int>(nb) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::m_printFloat( double nb ) {
	std::cout << "float: ";
	if (m_isEmpty == false)
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(nb) << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::m_printDouble( double nb ) {
	std::cout << "double: ";
	if (m_isEmpty == false)
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(nb) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::printConvert() {
	if (m_isChar)
		m_nDouble = static_cast<double>(m_nChar);
	m_printChar(m_nDouble);
	m_printInt(m_nDouble);
	m_printFloat(m_nDouble);
	m_printDouble(m_nDouble);
}