/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:09:31 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/13 19:07:54 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie		zomb1 = Zombie("NniiiaaaarRkKK");
	Zombie		*zomb2 = newZombie("BOOUeeuuUkkkk");

	zomb1.announce();
	zomb2->announce();
	randomChump("AaaarRkKK");
	delete zomb2;
	return (0);
}