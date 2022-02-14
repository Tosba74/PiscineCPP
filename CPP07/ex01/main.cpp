/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:02:48 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/10 19:38:00 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"

int main(int ac, char **av)
{
    int			int_tab[] = {0, 24, 456};
    std::cout << "\033[32m--------INT TAB----------\033[0m" << std::endl;
	iter(inttab, 3, &display);
    std::cout << std::endl;

    float		floattab[] = {1.45, 42.42, 666.69};
    std::cout << "\033[32m--------FLOAT TAB--------\033[0m" << std::endl;
	iter(floattab, 3, &display);
    std::cout << std::endl;

    std::string str = "Run";
    std::cout << "\033[32m--------STRING----------\033[0m" << std::endl;
    iter(&str, 1, &display);
    std::cout << std::endl;

    std::string		strtab[] = {"top", "mid", "bot"};
    std::cout << "\033[32m-------STRING TAB-------\033[0m" << std::endl;
    iter(strtab, 3, &display);
	std::cout << std::endl;

	if (ac > 1)
	{
    	std::cout << "\033[32m-------TEST AV----------\033[0m" << std::endl;
    	iter(av, ac, &display);
    	std::cout << std::endl;
	}
	return 0;
}
