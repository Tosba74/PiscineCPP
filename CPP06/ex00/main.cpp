/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:52:22 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/03 18:27:17 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits.h>
#include <cmath>

void	convert(std::string nbr)
{
	double	nb;
	
	if (nbr.length() == 1 && !isdigit(nbr[0]))
		nb = static_cast<double>(nbr[0]);
	else
		nb = atof(nbr.c_str());
		
	if ((nbr.length() > 1 && !std::isdigit(nbr[0])) || std::numeric_limits<int>::min() > nb || nb > std::numeric_limits<int>::max())
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;	
	}
	else
	{
		if (31 < nb && nb < 127)
			std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	}
	
	if (!fmod(nb, 1))	
	{
		std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
		std::cout << "double: " << nb << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
		std::cout << "double: " << nb << std::endl;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Convert need one argument of type number" << std::endl;
	else
		convert(av[1]);  
	return 0;
}

/*
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <cmath>

void convert(std::string arg){
	double d;
	if (arg.length() == 1 && !isdigit(static_cast<int>(arg[0])))
		 d = static_cast<double>(arg[0]);
	else
		 d = atof(arg.c_str());
	if ((atoi(arg.c_str()) == 0 && arg.length() > 1 )|| d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "char: Impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if ((atoi(arg.c_str()) == 0 && arg.length() > 1) || d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (fmod(d, 1) == 0)
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	if (fmod(d, 1) == 0)
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(d) << std::endl;
}

int main(int ac, char ** av) {
	if (ac == 2)
			convert(av[1]);
	return (0);
}
*/
