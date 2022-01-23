/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:57:10 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/23 01:32:28 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	replaceLine(std::string str, std::string s1, std::string s2) {
	std::string	cmp;
	int			i = 0;

	while (str[i])
	{
		if (str[i] == s1[0])
		{
			cmp.assign(str, i, s1.size());
			if (cmp == s1)
			{
				str.erase(i, s1.size());
				str.insert(i, s2);
				i+= s2.size() - 1;
			}
		}
		i++;
	}
	return (str);
}

std::string	getExtension( std::string fileName ) {
	std::string	extension = ".replace";
	return (fileName + extension);
}

int	main(int ac, char* av[]) {
	std::string	dst;
	if (ac != 4)
	{
		std::cerr << "Error: There must be 3 arguments" << std::endl;
		return 1;
	}
	else if (strlen(av[2]) == 0 || strlen(av[3]) == 0)
	{
		std::cerr << "Error: Both strings must not be empty" << std::endl;
		return 1;
	}
	std::ifstream	ifs(av[1]);

	if (!ifs)
	{
		std::cerr << "Error: " << av[1] << ": no such file" << std::endl;
		return 1;
	}
	std::ofstream	ofs(getExtension(av[1]));
	
	while (!ifs.eof() && !ifs.fail())
	{
		std::getline(ifs, dst);
		ofs << replaceLine(dst, av[2], av[3]) << std::endl;
	}

	ifs.close();
	ofs.close();
	return 0;
}