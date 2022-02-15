/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:09:04 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/15 16:29:41 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( std::string arg ) : m_arg(arg), m_nb(0) {
	m_setType();
	m_setNb();
}

Convert::~Convert() { }

Convert::Convert( Convert const &other ) {
	*this = other;
}

Convert &Convert::operator=( Convert const &other ) {
	if ( this == &other )
		return *this;
	m_arg = other.m_arg;
	m_type = other.m_type;
	m_nb = other.m_nb;
	return *this;
}

void	Convert::m_setType() {
	if (isdigit(*m_arg.c_str())
	|| (*m_arg.c_str() == '-' && isdigit(*m_arg.c_str()+1))) {
		m_typeNb = 1;
	}
	else
		m_typeNb = 0;
}

void	Convert::m_setNb() {
	std::stringstream	s;
	s << m_arg;
	s >> m_nb;
	if (s >> m_nb)
		;
	else
		m_type = "nope";
}

void	Convert::m_printChar( double nb ) {
	std::cout << "char: ";
	if (m_type.compare("nan") == 0)
		std::cout << "impossible" << std::endl;
	else if (nb >= 0 && nb <= std::numeric_limits<char>::max()) {
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
	if (m_type.compare("nan") == 0
	|| nb < std::numeric_limits<int>::min()
	|| nb > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(nb) << std::endl;		
}

void	Convert::m_printFloat( double nb ) {
	std::cout << "float: ";
	if (m_type.compare("nan") == 0)
		std::cout << "nanf" << std::endl;
	else
		std::cout << static_cast<float>(nb) << std::endl;
}

void	Convert::m_printDouble( double nb ) {
	std::cout << "double: ";
	if (m_type.compare("nan") == 0)
		std::cout << "nan" << std::endl;
	else
		std::cout << nb << std::endl;
}

void	Convert::printConvert() {
	m_printChar(m_nb);
	m_printInt(m_nb);
	m_printFloat(m_nb);
	m_printDouble(m_nb);
}