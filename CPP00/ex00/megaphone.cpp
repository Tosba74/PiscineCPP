/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:43:40 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/14 15:00:19 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	count = 0;
	int	i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (count = 1; count < ac; count++)
		{
			for (i = 0; av[count][i]; i++)
				std::cout << (char)std::toupper(av[count][i]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
