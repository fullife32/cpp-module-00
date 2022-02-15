/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:09:04 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/15 19:21:07 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( std::string arg ) : m_arg(arg) {
	m_isChar = false;
	m_isInt = false;
	m_isFloat = false;
	m_isDouble = false;
	m_isEmpty = false;
	m_setTypes();
}

Convert::~Convert() { }

Convert::Convert( Convert const &other ) {
	*this = other;
}

Convert &Convert::operator=( Convert const &other ) {
	if ( this == &other )
		return *this;
	m_arg = other.m_arg;
	return *this;
}

void	Convert::m_setTypes() {
	m_setChar(&m_nChar, m_arg);
	m_setInt(&m_nInt, m_arg);
	m_setFloat(&m_nFloat, m_arg);
	m_setDouble(&m_nDouble, m_arg);
}

void	Convert::m_setChar( std::string s ) {
	if (s.size() == 1)
		m_isChar = true;
	else if (s.size() == 0)
		m_isEmpty = true;
	// && isprint(*s.c_str()) add this to print
}

void	Convert::m_setInt( int& nb, std::string s ) {
	char*		pEnd;
	long int	tmp;

	(void)nb; // 
	tmp = std::strtol(s.c_str(), &pEnd, 10);
	if (*pEnd == '\0')
		m_isInt = true;
}

void	Convert::m_setFloat( float& nb, std::string s ) {
	char*	pEnd;

	nb = std::strtof(s.c_str(), &pEnd);
	if (*pEnd != '\0')
		m_isEmpty = true;
}

void	Convert::m_setDouble( double& nb, std::string s ) {
	char*	pEnd;

	nb = std::strtod(s.c_str(), &pEnd);
	if (*pEnd == '\0')
		m_nDouble = true;
	else if (*pEnd == 'f')
		m_nFloat = true;
}


void	Convert::m_printChar( double nb ) {
	std::cout << "char: ";
	if (m_isEmpty == false && m_isChar == true) {
		if (isprint(nb))
			std::cout << static_cast<char>(nb) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "impossible" << std::endl;
}

void	Convert::m_printInt( double nb ) {
	(void)nb;
}

void	Convert::m_printFloat( double nb ) {
	//fixed pour avoir virgule et set precision/ f a la fin
	(void)nb;
}

void	Convert::m_printDouble( double nb ) {

	(void)nb;
}


// void	Convert::m_setType() {
// 	if (isdigit(*m_arg.c_str())
// 	|| (*m_arg.c_str() == '-' && isdigit(*m_arg.c_str()+1))) {
// 		m_typeNb = 1;
// 	}
// 	else
// 		m_typeNb = 0;
// }

// void	Convert::m_setNb() {
// 	std::stringstream	s;
// 	s << m_arg;
// 	s >> m_nb;
// 	if (s >> m_nb)
// 		;
// 	else
// 		m_type = "nope";
// }

// void	Convert::m_printChar( double nb ) {
// 	std::cout << "char: ";
// 	if (m_type.compare("nan") == 0)
// 		std::cout << "impossible" << std::endl;
// 	else if (nb >= 0 && nb <= std::numeric_limits<char>::max()) {
// 		if (isprint(nb))
// 			std::cout << static_cast<char>(nb) << std::endl;
// 		else
// 			std::cout << "Non displayable" << std::endl;
// 	}
// 	else
// 		std::cout << "impossible" << std::endl;
// }

// void	Convert::m_printInt( double nb ) {
// 	std::cout << "int: ";
// 	if (m_type.compare("nan") == 0
// 	|| nb < std::numeric_limits<int>::min()
// 	|| nb > std::numeric_limits<int>::max())
// 		std::cout << "impossible" << std::endl;
// 	else
// 		std::cout << static_cast<int>(nb) << std::endl;		
// }

// void	Convert::m_printFloat( double nb ) {
// 	std::cout << "float: ";
// 	if (m_type.compare("nan") == 0)
// 		std::cout << "nanf" << std::endl;
// 	else
// 		std::cout << static_cast<float>(nb) << std::endl;
// }

// void	Convert::m_printDouble( double nb ) {
// 	std::cout << "double: ";
// 	if (m_type.compare("nan") == 0)
// 		std::cout << "nan" << std::endl;
// 	else
// 		std::cout << nb << std::endl;
// }

void	Convert::printConvert() {
	m_printChar(m_nDouble);
	m_printInt(m_nDouble);
	m_printFloat(m_nDouble);
	m_printDouble(m_nDouble);
}