/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:04:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/13 18:51:24 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": I'm died .... again!!!" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
