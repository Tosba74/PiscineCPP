/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 08:25:12 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/17 20:06:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

# include <stdlib.h>
# include <dirent.h>

/*
std::stringstream strStream;
	strStream << file.rdbuf();
	file.close();
	std::string str = strStream.str();
	size_t	place = 0;
	while ((place = str.find(s1, place)) != std::string::npos)
	{
		str.erase(place, s1.length());
		str.insert(place, s2);
		place += s2.length();
	}
	std::string	app = ".replace";
	filename += app;
	std::ofstream replaced;
	replaced.open(filename.c_str());
	if (!replaced.is_open())
	{
		std::cout << "Can't create the new file" << std::endl;
		exit(-1);
	}
	replaced << str;
	replaced.close();
	exit(0);
*/
void	check_secu(std::string filename, std::string s1, std::string s2)
{
	DIR				*dir = opendir(filename.c_str());

	if (s1 == s2)
	{
		std::cout << "String#1 & String#2 must be differents" << std::endl;
		exit(-1);
	}
	if ((filename.empty()) || (s1.empty()) || (s2.empty()))
	{
		std::cout << "At least one argument is empty !" << std::endl;
		exit(-1);
	}
	if (dir != nullptr)
	{
		std::cout << "Specified filename is a directory" << std::endl;
		closedir(dir);
		exit(-1);
	}
}
int		replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	ifs;
	std::string str;

	check_secu(filename, s1, s2);
	ifs.open(filename.c_str());
	if (!ifs.is_open())
	{
		std::cout << "Can't open the file" << std::endl;
		return (1);
	}
	std::stringstream	strStream;
	strStream << ifs.rdbuf();
	ifs.close();
	str = strStream.str();
	whil
	return(0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace <filename> <string#1> <string#2>" << std::endl;
		return (1);
	}
	return (replace(av[1], av[2], av[3]));
}