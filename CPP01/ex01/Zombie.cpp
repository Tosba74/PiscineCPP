/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:04:14 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/14 08:38:14 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
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

void	Zombie::setname(std::string name){this->_name = name;}

Zombie*	newZombie(std::string name)
{
	Zombie	*zozo;

	zozo = new Zombie();
	zozo->setname(name);
	return(zozo);
}

void	randomChump(std::string name)
{
	Zombie	zozo = Zombie();
	zozo.setname(name);
	zozo.announce();
}
