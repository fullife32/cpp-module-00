/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:09:31 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/18 14:55:33 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n ) : m_size(n), m_vec() { }

Span::~Span() { }

Span::Span( Span const &other ) : m_size(other.m_size), m_vec(other.m_vec) { }

Span &Span::operator=( Span const &other ) {
	if ( this == &other )
		return *this;
	m_size = other.m_size;
	m_vec = other.m_vec;
	return *this;
}

void	Span::addNumber( int num ) {
	if (this->m_vec.size() == this->m_size)
		throw Span::AlreadyFull();
	this->m_vec.push_back(num);
}

int		Span::shortestSpan() {
	if (this->m_vec.size() == 0 || this->m_vec.size() == 1)
		throw Span::NoSpanFound();
	std::vector<int>	tmp = this->m_vec;

	std::sort(tmp.begin(), tmp.end());
	
	int shortest = tmp.at(1) - tmp.at(0);
	for (unsigned int i = 1; i < this->m_size - 1; i++) {
		shortest = std::min(tmp.at(i + 1) - tmp.at(i), shortest);
	}
	return shortest;
}

int		Span::longestSpan() {
	if (this->m_vec.size() == 0 || this->m_vec.size() == 1)
		throw Span::NoSpanFound();
	int min, max;
	min = *std::min_element(this->m_vec.begin(), this->m_vec.end());
	max = *std::max_element(this->m_vec.begin(), this->m_vec.end());
	return max - min;
}

void	Span::addManyNumber( std::vector<int>	vec ) {
	if (vec.size() > this->m_size - this->m_vec.size())
		throw Span::AlreadyFull();
	this->m_vec.insert(this->m_vec.end(), vec.begin(), vec.end());
}