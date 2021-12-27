/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:39:11 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/27 19:31:26 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	this->strs[0] = "DEBUG";
	this->strs[1] = "INFO";
	this->strs[2] = "WARNING";
	this->strs[3] = "ERROR";
    
	return;
}

Karen::~Karen()
{
	return;
}

void	Karen::debug(void)
{
    std::cout << "\e[36m[DEBUG]\e[0m" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
    std::cout << "\e[34m[INFO]\e[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
    std::cout << "\e[32m[WARNING]\e[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. << std::endl
	std::coutI’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
    std::cout << "\e[31m[ERROR]\e[0m" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	typedef		void(Karen::*tpf)(void);
	tpf			func[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(this->strs[i]))
		{
			(this->*(func[i]))();
			return ;
		}
	}
	std::cout << "no message for this alerts" << std::endl;
	return ;
}