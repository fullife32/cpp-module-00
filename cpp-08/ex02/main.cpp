/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:12:39 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/18 18:06:42 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

void	mutantTest() {
	MutantStack<int> mstack;

	std::cout << "Empty ? " << mstack.empty() << std::endl;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Empty ? " << mstack.empty() << std::endl;

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int>::reverse_iterator rit = mstack.rend();
	MutantStack<int>::reverse_iterator rite = mstack.rbegin();

	while (rite != rit)
	{
		std::cout << *rite << std::endl;
		++rite;
	}

	std::stack<int> s(mstack);
}

void	vectorTest() {
	std::vector<int>	v;

	std::cout << "Empty ? " << v.empty() << std::endl;

	v.push_back(5);
	v.push_back(17);

	std::cout << v.back() << std::endl;

	v.pop_back();

	std::cout << "Empty ? " << v.empty() << std::endl;

	std::cout << v.size() << std::endl;

	v.push_back(3);
	v.push_back(5);
	v.push_back(737);
	v.push_back(0);

	std::vector<int>::iterator itV = v.begin();
	std::vector<int>::iterator iteV = v.end();

	++itV;
	--itV;
	while (itV != iteV)
	{
		std::cout << *itV << std::endl;
		++itV;
	}

	std::vector<int>::reverse_iterator ritV = v.rend();
	std::vector<int>::reverse_iterator riteV = v.rbegin();

	while (riteV != ritV)
	{
		std::cout << *riteV << std::endl;
		++riteV;
	}
}

int main()
{
	mutantTest();
	std::cout << std::endl;
	vectorTest();

	return 0;
}