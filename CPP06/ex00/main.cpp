/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:52:22 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/19 20:07:50 by bmangin          ###   ########lyon.fr   */
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
