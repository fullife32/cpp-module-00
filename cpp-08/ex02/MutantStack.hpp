/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:50:35 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/18 17:45:52 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>

template < typename T >
class MutantStack : public std::stack<T> {
public:
	MutantStack<T>() { }
	virtual ~MutantStack<T>() { }
	
	MutantStack<T>( MutantStack const &other ) { *this = other; }
	MutantStack<T> &operator=( MutantStack const &other ) {
		if (this == &other)
			return *this;
		this->c = other.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }

	const_iterator	cbegin() { return this->c.begin(); }
	const_iterator	cend() { return this->c.end(); }

	reverse_iterator	rbegin() { return this->c.rbegin(); }
	reverse_iterator	rend() { return this->c.rend(); }
	
	const_reverse_iterator	crbegin() { return this->c.rbegin(); }
	const_reverse_iterator	crend() { return this->c.rend(); }

};

#endif